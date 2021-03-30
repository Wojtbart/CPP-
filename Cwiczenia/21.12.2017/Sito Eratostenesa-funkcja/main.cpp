#include <iostream>

using namespace std;

void GenerujSito(bool T[], int n)
{
    int j;
    T[0]=false;
    T[1]=false;
    for(int i=2;i<=n;i++) T[i]=true;

    /// generujemy sito

    for(int i=2; i*i<=n; i++)
        if(T[i]==true)
            {
              j=2*i;
              while(j<=n)
              {
                  T[j]=false;
                  j=j+i;
              }
            }
}
int main()
{
    int n;

    cout << "Sito Eratostenesa" << endl;
    cout<<"Do jakiej wartosci szukamy liczb pierwszych:";
    cin>>n;

    bool Pierwsza[n+1];

   GenerujSito(Pierwsza,n);
    ///Wypisujemy liczby pierwsze
    cout<<"Szukane przez nas liczby pierwsze to: "<<endl;
    for(int i=1; i<=n; i++) if(Pierwsza[i]==true) cout<<i<<",";


    return 0;
}
