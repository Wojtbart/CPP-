#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time///
#include <iomanip>
using namespace std;

const int rozmiar=200; ///liczba elementow tablicy
const int maks=999; ///maksymalna wylosowana wartosc

void losuj(int t[])
{
    srand(time(NULL)); ///Inicjuje generator liczb

             for(int i=0; i<rozmiar; i++)
             {  t[i]= rand() %(maks+1);

             }
}
void wypisz (int t[])
{
    for(int i=0; i<rozmiar; i++)
        cout<<setw(4)<<t[i]<<",";
    cout<<endl<<endl;
}
int maksymalna (int t[])
{
    int maks=t[0];
    for(int i=1; i<rozmiar; i++)
    if(t[i]>maks) maks=t[i];
    return maks;
}
int minimalna (int t[])
{
    int maks=t[0];
    for(int i=1; i<rozmiar; i++)
    if(t[i]<maks) maks=t[i];
    return maks;
}

void MaksMini (int t[])
{
  int maks=t[0];
  int mini=t[0];
    for(int i=1; i<rozmiar; i++)
    if(t[i]>maks) maks=t[i];
    else if(t[i]<mini) mini=t[i];
    cout<<"Wartosc maksymalna wynosi:"<<maks<<endl;
    cout<<"Wartosc mninimalna wynosi:"<<mini<<endl;
}


 void znajdz(int t[], int x)
 {

   bool znaleziono=false;
    int poz;
   for(int i=0; i<rozmiar; i++)
    if(t[i]==x)
    {
        znaleziono=true;
        poz=i;
    }

    if(znaleziono==true) cout<<"Znaleziono na pozycji: "<<poz<<endl;
    else cout<<"Nie znaleziono!"<<endl;
}


void ZnajdzzWartownikiem(int t[], int x)
 {  int i=0;
    t[rozmiar]=x;
    while(x!=t[i]) i++;
    if(i!=rozmiar)cout<<"Wartownik znaleziono na pozycji: "<<i<<"  "<<t[i]<<endl;
    else cout<<" Wartownika Nie znaleziono!"<<endl;
}
int main()
{    cout<<"Siema, znajduje najwiekszy element w zbiorze!"<<endl;
     int tablica[rozmiar]={};
     int n;

     losuj(tablica);
     wypisz (tablica);
     cout<<"Maksymalna wartosc w zbiorze czlowieku to:"<<maksymalna(tablica)<<endl;
     cout<<"Minimalna wartosc w zbiorze czlowieku to:"<<minimalna(tablica)<<endl;

     cout<<"Podaj wartosc jaka mam wyszukac:";
     cin>>n;
     znajdz(tablica, n);

     MaksMini (tablica);
     ZnajdzzWartownikiem (tablica,n);
     return 0;
}
