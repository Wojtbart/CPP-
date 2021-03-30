#include <iostream>

using namespace std;

int *zwiekszTablice (int* w_wartosci, int *rozmiar);

void drukujTablice (int* w_wartosci, int rozmiar, int zajete_pola);

int main ()
{
 int nastepny_element = 0;
 int rozmiar = 10;
 int *w_wartosci = new int[ rozmiar ];
 int wart;

 cout << "Podaj liczbe: ";
 cin >> wart;

 while ( wart > 0 )
 {
 if ( rozmiar == nastepny_element + 1 )
 {
 // Wszystko, co musimy teraz zrobi�, to zaimplementowa�
 // funkcj� zwiekszTablice. Zauwa�, �e rozmiar musimy
 // przekaza� jako wska�nik, poniewa� w ka�dej chwili
 // powinni�my zna� na bie��co wielko�� rosn�cej tablicy!
 w_wartosci = zwiekszTablice( w_wartosci, & rozmiar );
 }
 w_wartosci[ nastepny_element ] = wart;
 nastepny_element++;
 cout << "Oto biezace parametry tablicy: " << endl;
 drukujTablice( w_wartosci, rozmiar, nastepny_element );
 cout << "Podaj liczbe (0 - wyjscie z programu): ";
 cin >> wart;
 }

 delete [] w_wartosci;

}


void drukujTablice (int *w_wartosci, int rozmiar, int zajete_pola)
{
 cout << "Calkowity rozmiar tablicy: " << rozmiar << endl;
 cout << "Liczba zajetych pol tablicy: " << zajete_pola<< endl;
 cout << "Wartosci w tablicy: " << endl;
 for ( int i = 0; i < zajete_pola; ++i )
 {
 cout << "w_wartosci[" << i << "] = " << w_wartosci[ i ] << endl;
 }
}

int *zwiekszTablice (int* w_wartosci, int *rozmiar)
{
 *rozmiar *= 2;
 int *w_nowe_wartosci = new int[ *rozmiar ];
 for ( int i = 0; i < *rozmiar; ++i )
 {
 w_nowe_wartosci[ i ] = w_wartosci[ i ];
 }
 delete [] w_wartosci;
 return w_nowe_wartosci;
}

