#include <iostream>

using namespace std;


template<class T>
void wypisz(const T* poczatek, const T* zaKoncem, char separator=' ')
{
    int i, dlugosc;
    dlugosc=(sizeof(zaKoncem)/sizeof(*zaKoncem))+1;
    for(int i=0; i<dlugosc; i++)
    {
        cout<<poczatek[i]<<separator;
    }

}

template<class T>
const T mini(const T* poczatek, const T* zaKoncem)
{
    int i=0, dlugosc, minimum;
    dlugosc=(sizeof(zaKoncem)/sizeof(*zaKoncem))+1;
    minimum=poczatek[i];//najmniejszy jest pierwszy element
    for(int i=0; i<dlugosc; i++)
    {
        if(minimum<poczatek[i]) minimum=minimum;
        else minimum=poczatek[i];
    }
    return minimum;
}

int main()
{
    int tablica[5];
    tablica[0]=4; tablica[1]=2; tablica[2]=8; tablica[3]=6; tablica[4]=1;
    cout << "Hello world!" << endl;
    for(int i=0; i<5; i++)
    {
         wypisz(&tablica[i],&tablica[i+1], ' ');
    }
    cout<<endl;
    wypisz(tablica,tablica, '|');
    cout<<endl;
    cout<<"Minimalna wartosc z 2 pierwszych elementow to: "<<mini(tablica,tablica)<<endl;
    return 0;
}
