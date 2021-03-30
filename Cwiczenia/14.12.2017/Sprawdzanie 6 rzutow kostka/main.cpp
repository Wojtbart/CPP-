#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time///
using namespace std;

int main()
{ int n,w; ///n-ilosc rzutow, w-wynik jednego z rzutow
  int T[6];
             cout<<"Witaj w programie, ktory generuje szesciokrotny rzut kostka!"<<endl;

             srand(time(NULL)); ///Inicjuje generator liczb
             cout<<"Podaj liczbe rzutow n= ";
             cin>>n;
             cout<<"Wylosowane liczby to:"<<endl;

             for(int i=1; i<=n; i++)
             {  w= 1 + rand() %(6-1+1);
               cout<<i<<"."<< w<<endl;
             }

             for(int j = 0; j<n; i++)
            { for(int i=1; i<=n-1; i++)

            {
            T[i]= 1+rand()% (6-1+1);
            /// Sprawdzanie powtorzen
            if(T[i]==j)

            }
            [int T[i]]++;

            }
return 0;
}
