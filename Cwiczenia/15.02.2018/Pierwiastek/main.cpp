#include <iostream>
#include<cmath>

using namespace std;

int main()
{   double x, e=0.001, a;
    int licznik=0; ///zlicza ilosc wykonanych krokow ///
    /// x-liczba z ktorej liczymy pierwiastek, a-wartosc pierwiastka, e-dokladnosc obliczeniowa ///
    cout << "Witaj w programie obliczajacym pierwiastek z podanej liczby!" << endl;
    cout<< "Podaj twoja liczbe dodatnia:";
    cin >>x;
    a=x;

    while(abs(a-x/a)>e)
    {
        a=((a+x/a)/2);
        licznik++;
    }
    cout<<"Pierwiastek z twojej liczby "<<x<<" wynosi "<<a<<endl;
    cout<<"Obliczenia wykonano "<<licznik<<" razy! "<<endl;
    return 0;
}
