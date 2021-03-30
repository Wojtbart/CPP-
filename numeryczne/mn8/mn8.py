import numpy as np
import operator
import scipy.interpolate
from sympy import simplify, Symbol
from sympy.plotting import plot
#importuje biblioteki do obliczenia funkcji lagrange'a i rysowania wykresu wielomianu

def funkcja(x): #funkcja zadana w zadaniu
    return 1/(1+5*pow(x,2))

def interpolacja_lagrange(x, x_values, y_values): #moja funkcja lagrange'a
    """
    x_values: tablica numpy zawierajca wartosci x
    y_values: tablica numpy zawierajca wartosci y
    """
    def lagrange(j):

        tablica = np.array([(x - x_values[i])/(x_values[j] - x_values[i]) for i in range(n) if i != j]) #jezeli indeksy sa roznie od siebie to liczymy
        return reduce(operator.mul, tablica) #uzywamy reduce by policzyc iloczyn
    assert len(x_values) != 0 and (len(x_values) == len(y_values)),"x i y nie moga byc puste i musza miec taka sama dlugosc"
    n = len(x_values)
    return sum( lagrange(j)*y_values[j] for j in range(n) )


#tworze tablice i bede tam zapisywal tu punkty punktami od -1 ... do 1
#wyliczylem sobie ze tych punktow bedzie 65
A=[]

print("Poszczegolne wartosci x to :")
for i in range(0, 65):
   A.append(-1+(i/32.0))
   print("x{} = {}".format((i +1), "%0.7f" % A[i])) #wyswietlam poszczegolne punkty

C=np.array(A)

#tworze tablice do zapisania tam wartosci funkcji w punktach
B=[]

for i in range(0, 65):
    B.append(funkcja(A[i]))# zapisuje wartosci funkcji w punktach do tablicy B

D=np.array(B)

print("Wartosci wielomianu dla poszczegolnych wezlow w tablicy to: ")
print (B)


print ("Licze moj wielomian ... ")
x = Symbol('x')  #licze interpolacje lagrange'a z wezlow i wartosci funkcji
wielomian = (interpolacja_lagrange(x,C,D))

print("upraszczam moj wielomian ...")
print (simplify(wielomian))

wielomian2 = (scipy.interpolate.lagrange(C, D))  # porownuje go od wielomianu z biblioteki

print("Funkcja z biblioteki:  ")
print(wielomian2)

#rysuje wykres wielomianu i zapisuje do pliku

p1 = plot(wielomian)
p1.title = "Wykres wielomianu lagrange'a"
p1.show()
# zapis do pliku
p1.save("wykres_wielomianu.png")
