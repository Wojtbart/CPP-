import numpy as np

def wartosc_wlasna(A,y) : #funkcja liczaca mi wartosc wlasna
   Ay= np.dot(A,y)
   yTy=np.dot(np.transpose(y), y)
   return np.dot(np.transpose(Ay),y) / yTy


def metoda_potegowa1(A,x):  #funkcja liczaca mi wektory wlasne

    tmp1=0#tworze pare zmiennych beda mi potrzebne
    tmp2=0
    tmp3=0
    tmp4=0
    tmp5=0
    tmp6=0
    while True:
        #vectorX = np.dot(A, y)
        Ax = np.dot(A,x) #mnoze macierz i wektor jedynek
       # y_nowy = Ay / np.linalg.norm(Ay) # Ay / ||Ay||
        #ey_nowy=wartosc_wlasna(A,y_nowy)
        tmp1=wartosc_wlasna(A,x) #licze poszczegolne wartosci wlasne
        tmp2=wartosc_wlasna(A,Ax)


        if np.abs(tmp1-tmp2) < eps:# jezeli roznica wartosci wlasnych jest mniejsza od przyblizenia to wykonuj
            x=Ax/np.linalg.norm(Ax)# Ax/||Ax||
            tmp3=wartosc_wlasna(A,x)# moja wartosc wlasna
            break
        x=Ax/np.linalg.norm(Ax)

    vec2 = x # do vec2 zapisuje wektor jedynek z poczatku(jest on zmieniony)
    #print vec2
    while True:
        #robie to samo dla drugiej wartosci wlasnej poza jednym szczegolem (reortogonalizacja)
        Ax = np.dot(A,vec2)

        Ax = np.subtract(Ax, np.dot(x, np.dot(np.transpose(x), Ax)))  # reortogonalizacja

        tmp4 = wartosc_wlasna(A, vec2)
        tmp5 = wartosc_wlasna(A, Ax)
        #print abs(tmp1-tmp2)
        #print vec2
        if np.abs(tmp4 - tmp5) < eps:
            vec2 = Ax/ np.linalg.norm(Ax)
            tmp6 = wartosc_wlasna(A, vec2)
            break
        vec2 = Ax / np.linalg.norm(Ax)


    print ("1 wartosc wlasna: {}".format(tmp3))
    print (" 1 wektor wlasny: {}".format(x))
    print ("2 wartosc wlasna: {}".format(tmp6))
    print (" 2 wektor wlasny: {}".format(vec2))
    return


eps = 1e-20

A =[[19. / 12., 13. / 12., 5. / 6., 5. / 6., 13. / 12., -17. / 12.],
          [13. / 12., 13. / 12., 5. / 6., 5. / 6., -11. / 12., 13. / 12.],
          [5. / 6., 5. / 6., 5. / 6., -1. / 6., 5. / 6., 5. / 6.],
          [5. / 6., 5. / 6., -1. / 6., 5. / 6., 5. / 6., 5. / 6.],
          [13. / 12., -11. / 12., 5. / 6., 5. / 6., 13. / 12., 13. / 12.],
          [-17. / 12., 13. / 12., 5. / 6., 5. / 6., 13. / 12., 19. / 12.]]

x = np.ones( (6) ) #wybieram wektor jedynek


test=metoda_potegowa1(A,x)
print test


