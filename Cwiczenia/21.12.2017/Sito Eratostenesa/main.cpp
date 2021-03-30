#include <iostream>

using namespace std;

int main()
{   int n;
    cout << "Witaj w programie'Sito Eratostenesa'! " << endl;
    cout<<"Podaj maksymalna wartosc przedzialu, dla ktorego szukamy liczb pierwszych:";
    cin>>n;

    bool Pierwsza[n=1];
    Pierwsza[0]=false;
    Pierwsza[1]=false;
    for(int i=2; i<=n; i++) Pierwsza[i]=true;
    ///generujemy sito
    for(int j=i; j<=n+1; i++)



    return 0;
}
