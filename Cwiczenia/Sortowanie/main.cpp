#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time, obsluga zegara///
#include <iomanip> ///np.Ustawianie szerokosci na ekranie,manipulacja strumieniem inst. setw ///
using namespace std;

const int rozmiar=200; ///liczba elementow tablicy
const int maks=999; ///maksymalna wylosowana wartosc
///----------------------------------------------------------------------------------------------------------------
void Losuj(int t[])
{srand (time (NULL));
    for(int i=0; i<rozmiar; i++) t[i]=rand()%maks;
}
///----------------------------------------------------------------------------------------------------------------
void wypisz (int t[])
{
    for(int i=0; i<rozmiar; i++)
        cout<<setw(4)<<t[i]<<",";
    cout<<endl<<endl;
}
///--------------------------------------------------------------------------------------------------------------------
void Sortuj1(int t[]) ///sortowanie babelkowe///
{for(int i=rozmiar-1; i>0; i--)
   for(int j=0;j<1;j++)
    if(t[j]>t[j+1]) swap (t[j],t[j+1]);

}
///-----------------------------------------------------------------------------------------------------------------
int main()
{ int Tablica [rozmiar];
    cout << "To nie  jest posortowana tablica gosciu!" << endl;

    Losuj(Tablica);
    wypisz(Tablica);
    cout << "To je sortowanie gosciu!" << endl;
    Sortuj1(Tablica);
    wypisz(Tablica);
   return 0;
}
