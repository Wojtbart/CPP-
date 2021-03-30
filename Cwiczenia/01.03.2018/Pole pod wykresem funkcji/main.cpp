#include <iostream>
#include <cmath>
using namespace std;

double F(double x)
{
    return sin(x);
}


int main()
{  int n=1000; ///liczba trapezow na, ktore dzielimy pole powierzchni///
    double a=0, b= M_PI ; ///Dziedzina funkcji///
    double w= (b-a) /n;
    double P=0; ///Pole powierzchni///
    double x=a; ///Ustawiamy sie na poczatku przedzialu///

    cout << "Obliczam pole pod wykresem funkcji!" << endl;

    for (int i=0; i<n; i++)
    {
        P=P + w * (F(x)+F(x+w))/2;
        x=x+w;
     }

     cout<<"Pole powierzchni wynosi: "<<P<<endl;
    return 0;
}
