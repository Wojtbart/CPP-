import numpy as np
import scipy.interpolate
import matplotlib.pylab as mp

macierz = np.array(
    [0.062500, 0.187500, 0.312500, 0.437500, 0.562500, 0.687500, 0.812500, 0.937500])  # wezly interpolacji

Fx = np.array(
    [0.687959, 0.073443, -0.517558, -1.077264, -1.600455, -2.080815, -2.507266, -2.860307])  # wartosc funkcji w wezlach

print macierz
print Fx

wielomian = (scipy.interpolate.lagrange(macierz, Fx))  # zmienna, ktorej uzywam do zapisania w niej mojego wielomianu,
# ktory obliczylem z funkcji lagrangea(uzylem biblioteki scipy.interpolate)

print("Szukana funkcja to : ")
print(wielomian)

# tworze tablice  i tam zapisze swoje wspolczynniki funkcji
z = []

for item in wielomian:
    z.append(item)

print(z)
# wypisuje wspolczynniki wielomianu z dokladnoscia do 4 miejsc dziesietnych(od wspolczynnika przy najwiekszej potedze
# do wspolczynnika przy najmniejszej potedze
print("Kolejne dokladne wartosci wspolczynnikow wielomainu interpolacyjnego to:")

for i in range(len(z)):
    print("a{} = {}".format((i + 1), "%0.4f" % z[i]))

# x=np.linspace(-1,1,num=1000)#
# Fxxx=[]
# for i in range(len(x)):
#  Fxxx.append(( -0.0062*x[i]**7 +0.0228*x[i]**6+  0.9664*x[i]**5 - 1.9743*x[i]**4 + 1.9892*x[i]**3 + 0.0024*x[i]**2 -5.0003*x[i] +1))

# tworze 2 tablice i tam bede zapisywal moje wartosci od x i fx
a = []
b = []
x = macierz
# ide od -1 do 1 z krokiem 0,001
for x in np.arange(-1, 1, 0.001):
    y = wielomian(x)
    a.append(x)
    b.append(y)
# najpierw rysuje punkty, a potem rysuje wykres wielomianu
mp.plot(macierz, Fx, 'bo')
mp.plot(a, b, 'r')

mp.legend(['punkty', 'wykres'])
mp.title('Wykres wielomianu')

mp.axvline()
mp.axhline()
mp.grid(True)
mp.savefig('wykres.png', dpi=80)
mp.show()
