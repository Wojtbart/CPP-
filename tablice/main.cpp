#include <iostream>
using namespace std;
int main ()
{
 int tablica[ 8 ][ 8 ]; // Deklaracja tablicy, która wygl¹da jak szachownica
 for ( int i = 0; i < 8; i++ )
 {
 for ( int j = 0; j < 8; j++ )
 {
 tablica [ i ][ j ] = i * j; // Nadanie wartoœci ka¿demu elementowi
 }
 }

 cout << "Tabliczka mno¿enia:\n";
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
 // Pêtla zatrzyma siê, gdy i == rozmiar. Dlaczego? Bo ostatni element ma wartoœæ rozmiar - 1
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
 cout << "Podaj wartoœæ " << i << ": ";
 cin >> wartosci[ i ];
 }
 cout << sumujTablice ( wartosci, 10 ) << endl;
}
