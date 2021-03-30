#include <iostream>
using namespace std;
int main ()
{
 int tablica[ 8 ][ 8 ]; // Deklaracja tablicy, kt�ra wygl�da jak szachownica
 for ( int i = 0; i < 8; i++ )
 {
 for ( int j = 0; j < 8; j++ )
 {
 tablica [ i ][ j ] = i * j; // Nadanie warto�ci ka�demu elementowi
 }
 }

 cout << "Tabliczka mno�enia:\n";
 for ( int i = 0; i < 8; i++ )
 {
 for ( int j = 0; j < 8; j++ )
 {
 cout << "[ "<< i <<" ][ "<< j <<" ] = ";
 cout << tablica [ i ][ j ] <<" ";
 cout << "\n";

 }
 }
 return 0;
}


#include <iostream>
using namespace std;
int sumujTablice (int wartosci[], int rozmiar)
{
 int suma = 0;
 // P�tla zatrzyma si�, gdy i == rozmiar. Dlaczego? Bo ostatni element ma warto�� rozmiar - 1
 for ( int i = 0; i < rozmiar; i++ )
 {
 suma += wartosci[ i ];
 }
 return suma;
}
int main ()
{
 int wartosci[ 10 ];
 for ( int i = 0; i < 10; i++ )
 {
 cout << "Podaj warto�� " << i << ": ";
 cin >> wartosci[ i ];
 }
 cout << sumujTablice ( wartosci, 10 ) << endl;
}
