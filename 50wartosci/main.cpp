#include <iostream>

using namespace std;

int main()
{   int tab[15], suma=0;
    double srednia=0;
    cout << "Wczytuje liczby do tablicy!" << endl;
    for(int i=0; i<15; i++)
    {
        cout<<i+1<<".";
        cin>>tab[i];
        suma+=tab[i];

    }
    srednia=suma/15;
    int mini=tab[0], maks=tab[15];
    for(int i=0; i<15; i++)
    {
        if(mini>tab[i]) mini=tab[i];
        if(maks<tab[i]) maks=tab[i];

    }
    cout<<"Najmniejsza wartoscia jest: "<<mini<<endl;
    cout<<"Najwieksza wartoscia jest: "<<maks<<endl;
    cout<<"Srednia wynosi: "<<srednia<<endl;
    cout<<"Wartosci po kolei to:"<<endl;;

    for(int i=0; i<15; i++)
    {
        cout<<i+1<<"."<<tab[i]<<endl;
    }
    cout<<"Koniec"<<endl;
    return 0;
}
