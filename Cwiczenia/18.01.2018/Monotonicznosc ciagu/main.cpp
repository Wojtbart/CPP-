#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time, obsluga zegara///
#include <iomanip> ///np.Ustawianie szerokosci na ekranie,manipulacja strumieniem inst. setw ///
using namespace std;

const int rozmiar=200; ///liczba elementow tablicy
const int maks=999; ///maksymalna wylosowana wartosc
///----------------------------------------------------------------
void wypisz (int t[])
{
    for(int i=0; i<rozmiar; i++)
        cout<<setw(4)<<t[i]<<",";
    cout<<endl<<endl;
}
///-------------------------------------------------------------------------------------
void LosujRosnacy(int t[]) /// przeanalizuj proc Losuj
{
    int p1=0, p2=maks, ilosc=rozmiar;
    srand (time (NULL));
    for(int i=0; i<rozmiar; i++)
    {
        t[i]=p1+rand()%((p2-p1+1)/ilosc);
        p1=t[i]+1;
        ilosc--;
    }
   /// t[127]=890;
}
///-------------------------------------------------------------------------------------
void CzyRosnacy(int t[])
{ bool jestrosnacy=true;
    int poz=0;
 for(int i=1;i<rozmiar;i++)
 if(t[i]<=t[i-1])
 {
     jestrosnacy=false;
     poz=i;}
     if(jestrosnacy==true) cout<<"To jest ciag rosnacy"<<endl;
    else cout<<"To nie jest ciag rosnacy, blad na pozycji: "<<poz<<endl;
}
///--------------------------------------------------------------------
void LosujMalejacy(int t[]) /// przeanalizuj proc Losuj
{
    int p1=0, p2=maks, ilosc=rozmiar;
    srand (time (NULL));
    for(int i=0; i<rozmiar; i++)
    {
        t[i]=p1-rand()%((p2-p1+1)/ilosc);
        p1=t[i]-1;
        ilosc--;
    }
   /// t[127]=890;
}
///--------------------------------------------------------------------------
void CzyMalejacy(int t[])
{ bool jestmalejacy=true;
    int poz=0;
 for(int i=1;i<rozmiar;i++)
 if(t[i]>=t[i-1])
 {
     jestmalejacy=false;
     poz=i;}
     if(jestmalejacy==true) cout<<"To jest ciag malejacy"<<endl;
    else cout<<"To nie jest ciag malejacy, blad na pozycji: "<<poz<<endl;
}
///-------------------------------------------------------------------------------------
int main()
{   int Tablica[rozmiar];

    cout << "Witaj!" << endl;
    cout << "Sprawdzam monotonicznosc ciagu!" << endl;

    LosujRosnacy(Tablica);
    wypisz(Tablica);
    CzyRosnacy(Tablica);
    cout<<endl;

    LosujMalejacy(Tablica);
    wypisz(Tablica);
    CzyMalejacy(Tablica);

    return 0;
}
