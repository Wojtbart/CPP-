#include <iostream>
#include<cmath>
 using namespace std;

 double Pierwiastek(double b, double c ) ///c-dokladnosc obliczeniowa, b-liczba z ktorej liczymy pierwiastek///
 {     double a;
       a=b;

    while(abs(a-b/a)>c)
    {
        a=((a+b/a)/2);
    }
    return a;
 }



int main()
{   double x, e=0.001;

     ///zlicza ilosc wykonanych krokow ///
    /// x-liczba z ktorej liczymy pierwiastek, a-wartosc pierwiastka, e-dokladnosc obliczeniowa ///


    cout << "Witaj w programie obliczajacym pierwiastek z podanej liczby!" << endl;
    cout<< "Podaj twoja liczbe dodatnia:";
    cin >>x;

    cout<<"Pierwiastek z twojej liczby "<<x<<" wynosi "<<Pierwiastek(x,e)<<endl;

    return 0;
}
