#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int znajdzNajmniejszyPozostalyElement (int tablica[], int rozmiar, int indeks);
void zamien (int tablica[], int pierwszy_indeks, int drugi_indeks);

bool CzyPosortowana(int tablica[], int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        if(tablica[i]>tablica[i+1]) return false;
    }
    return true;
}

void sortuj (int tablica[], int rozmiar)
{
     for ( int i = 0; i < rozmiar; i++ )
     {
     int indeks = znajdzNajmniejszyPozostalyElement( tablica, rozmiar, i );
     zamien( tablica, i, indeks );
     }
}


int znajdzNajmniejszyPozostalyElement (int tablica[], int rozmiar, int indeks)
{
     int indeks_najmniejszej_wartosci = indeks;

     for (int i = indeks + 1; i < rozmiar; i++)
     {
         if ( tablica[ i ] < tablica[ indeks_najmniejszej_wartosci ] )
         {
            indeks_najmniejszej_wartosci = i;
         }
     }
     return indeks_najmniejszej_wartosci;
}


void zamien (int tablica[], int pierwszy_indeks, int drugi_indeks)
{
     int tymczas = tablica[ pierwszy_indeks ];
     tablica[ pierwszy_indeks ] = tablica[ drugi_indeks ];
     tablica[ drugi_indeks ] = tymczas;
}


// Niedu¿a funkcja pomocnicza wyœwietlaj¹ca tablicê przed i po sortowaniu
void wyswietlTablice (int tablica[], int rozmiar)
{
     cout << "{";
     for ( int i = 0; i < rozmiar; i++ )
     {
     // Z wzorcem tym bêdziesz mieæ czêsto do czynienia — s³u¿y on
     // do czytelnego formatowania list; kod sprawdza, czy jesteœmy
     // ju¿ poza pierwszym elementem, i jeœli tak, do³¹cza przecinek
     if ( i != 0 )
     {
     cout << ", ";
     }
     cout << tablica[ i ];
     }
     cout << "}";
}


int main ()
{
     int n;
     cout<<"Podaj rozmiar tablicy: ";
     cin>>n;
     int tablica[ n ];
     srand( time( NULL ) );

     for ( int i = 0; i < n; i++ )
     {
         // Liczby bêd¹ ³atwiejsze do odczytania, gdy bêd¹ ma³e
         tablica[ i ] = rand() % 100;
     }

     cout << "Tablica wyjsciowa: ";
     wyswietlTablice( tablica, n );
     cout <<endl;
     if(CzyPosortowana(tablica, n)==1) cout<<"Tablica jest posortowana!"<<endl;
     else  sortuj( tablica, n );
     cout << "Tablica posortowana: ";
     wyswietlTablice( tablica, n );
     cout << endl;

}
