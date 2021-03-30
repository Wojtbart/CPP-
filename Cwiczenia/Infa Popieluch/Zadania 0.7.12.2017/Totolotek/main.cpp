#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int main()
{ int tablica[6];
    int x;

    srand(time(NULL));

    cout << "Witaj w Toto-lotku!" << endl;
    cout<<"Wylosowane liczby to:"<<endl;
    for( int i = 0; i < 6; i++ )
    {
        do
        {
            x = 1+ rand() % 49  ;
        }
        while(( tablica[ 0 ] == x ) ||( tablica[ 1 ] == x ) ||( tablica[ 2 ] == x ) ||( tablica[ 3 ] == x ) ||( tablica[ 4 ] == x ) ||( tablica[ 5 ] == x ) );

        tablica[ i ] = x;

        cout << tablica[ i ] << " ";
    }

    return 0;
}
