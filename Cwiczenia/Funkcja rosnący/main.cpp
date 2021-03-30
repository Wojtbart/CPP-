#include <iostream>

using namespace std;
const int rozmiar=4; ///liczba elementow tablicy
bool Rosnacy (int t[])
{
    for(int i=1;i<rozmiar;i++)

    if(t[i]<t[i-1]) return true;
    return false;

}
int main()
{int tablica[rozmiar];
  tablica[1]=1;
 tablica[2]=2;
 tablica[3]=3;
 tablica[4]=4;
 tablica[5]=5;

    cout << "Witaj w pgramie sprawdzajacym czy podany ciag jest ciagiem liczbowym!" << endl;
    for(int i=1;i<rozmiar;i++) cout<<tablica[i]<<endl;
    if(Rosnacy(tablica)) cout<<"To jest ciag rosnacy"<<endl;
    else cout<<"To nie jest ciag rosnacy"<<endl;
    return 0;
}
