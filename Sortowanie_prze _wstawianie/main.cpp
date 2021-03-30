#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int znajdzNajmniejszyPozostalyElement (int tablica[], int rozmiar, int indeks);
void zamien (int tablica[], int pierwszy_indeks, int drugi_indeks);


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


// Niedu�a funkcja pomocnicza wy�wietlaj�ca tablic� przed i po sortowaniu
void wyswietlTablice (int tablica[], int rozmiar)
{
     cout << "{";
     for ( int i = 0; i < rozmiar; i++ )
     {
     // Z wzorcem tym b�dziesz mie� cz�sto do czynienia � s�u�y on
     // do czytelnego formatowania list; kod sprawdza, czy jeste�my
     // ju� poza pierwszym elementem, i je�li tak, do��cza przecinek
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
     int tablica[ 10 ];
     srand( time( NULL ) );

     for ( int i = 0; i < 10; i++ )
     {
         // Liczby b�d� �atwiejsze do odczytania, gdy b�d� ma�e
         tablica[ i ] = rand() % 100;
     }

     cout << "Tablica wyjsciowa: ";
     wyswietlTablice( tablica, 10 );
     cout <<endl;

     sortuj( tablica, 10 );
     cout << "Tablica posortowana: ";
     wyswietlTablice( tablica, 10 );
     cout << endl;
}
