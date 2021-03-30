#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip> ///Do precyzyjnoœci pomiaru (setprecision)

using namespace std;

float wyznacz_pi(double n)
{
    ///n-liczba losowanych punktów
    ///a-liczba punktów zawartych w kole o promieniu 1 na pocz¹tku równa 0

    ///Inicjujemy generator liczb looswych
    srand(time(NULL));

    ///zmienne do zapisania wspó³rzêdnych losowanych punktów
    float x,y;

    int a=0;

    for(int i=1; i<=n; i++)
    {
        ///losujemy 2 liczby pseudolosowe z przedzia³u od (0 , 1)
        x=rand()/float(RAND_MAX);
        y=rand()/float(RAND_MAX);

        ///sprawdzamy czy szukany punkt le¿y w kole, jesli tak to zwiekszamy zmienna a
        if(x*x+y*y<=1) a++;
    }
    ///Przyblizona wartoœc liczby PI
    float P=4*a/n;

    return P;

}

int main()
{
        cout<<"Wyznaczanie liczby PI!"<<endl;
        ///Ustawiam precyzje pomiaru do 5 miejsc po przecinku

       cout<<"1.PI : "<<setprecision(5)<<wyznacz_pi(10)<<endl;
       cout<<"2.PI : "<<setprecision(5)<<wyznacz_pi(100)<<endl;
       cout<<"3.PI : "<<setprecision(5)<<wyznacz_pi(1000)<<endl;
       cout<<"4.PI : "<<setprecision(5)<<wyznacz_pi(100000)<<endl;

       cout<<"Koniec!"<<endl;

    return 0;
}

