#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time, obsluga zegara///
#include <iomanip> ///np.Ustawianie szerokosci na ekranie,manipulacja strumieniem inst. setw ///
#include <conio.h>
using namespace std;

const int rozmiar=200; ///liczba elementow tablicy
const int maks=999; ///maksymalna wylosowana wartosc

long long int licznik;
int ile=100; ///liczba powtorzen operacji sortowania///

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
{
    for(int i=rozmiar-1; i>0; i--)
   for(int j=0;j<1;j++)
    if(t[j]>t[j+1]) swap (t[j],t[j+1]);

}
///-----------------------------------------------------------------------------------------------------------------
void Sortuj2(int t[]) ///sortowanie przez wybor///
{ int PozMin; ///pamieta polozenie minimalnej wartosci///
    for (int i=0; i<rozmiar-1; i++)
    {
        PozMin=i;
        for(int j=i+1; j<rozmiar; j++)

            if(t[j]<t[PozMin]) PozMin=j;

            swap (t[i],t[PozMin]);
    }
}
///------------------------------------------------------------------------------------------------------------------------------
void QuickSort (int T[], int L, int P) ///L-lewy brzeg, P-prawy brzeg
{

     int i=L,j=P,x=T[(L+P)/2];
     do
     {
         while(T[i]<x) i++;
         while(T[j]>x) i++;
         if(i<=j)
         {swap(T[i],T[j]);
         i++;
         j--;}
     }
    while(i<=j);
        if(L<j) QuickSort(T,L,j);
        if(i<P) QuickSort(T,i,P);
}
///------------------------------------------------------------------------------------
void duplikat(int T1[],int T2[]) ///zawartosc T
{
    for(int i=0; i<rozmiar; i++) T2[i]=T1[i];
}
///-------------------------------------------------------------------------------------------------------------------
int main()
{ int Tablica [rozmiar], Tablica1 [rozmiar];
    Losuj(Tablica);
    cout << "Sortowanie babelkowe !" << endl;
    while(getch()!='d');
   for(int i=0; i<ile; i++)
   {
       duplikat(Tablica1, Tablica);
       Sortuj1(Tablica);
   }
   wypisz(Tablica);


   cout << "Sortowanie przez wybor !" << endl;
    while(getch()!='d');
   for(int i=0; i<ile; i++)
   {
       duplikat(Tablica1, Tablica);
       Sortuj2(Tablica);
   }
   wypisz(Tablica);


   cout << "Sortowanie QuickSOrt !" << endl;
    while(getch()!='d');
   for(int i=0; i<ile; i++)
   {
       duplikat(Tablica1, Tablica);
       QuickSort(Tablica,0,rozmiar-1);
   }
   wypisz(Tablica);







   return 0;
}
