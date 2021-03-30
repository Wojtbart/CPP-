#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time///
using namespace std;
const int LiczbaRzut=6; ///liczba rzutow kostka
int main()
{

             cout<<"Witaj w programie, ktory generuje szesciokrotny rzut kostka!"<<endl;
             int T[LiczbaRzut], LiczbaPowt=0,  F[6];

             srand(time(NULL)); ///Inicjuje generator liczb

             cout<<"Wylosowane liczby to:"<<endl;

             for(int i=0; i<LiczbaRzut; i++)
             {  T[i]= 1 + rand() %(6-1+1);
               cout<< T[i]<<",";

             }
              cout<<endl;
           cout<<"Nastepujace liczby powtorzyly sie: "<<endl;
             for(int j=1; j<=6; j++)
            {
                for(int i=0; i<LiczbaRzut; i++)
                    {
                       if(T[i]==j) LiczbaPowt=LiczbaPowt+1;
                    }
                    cout<<j<<"."<<LiczbaPowt<<"razy"<<endl;
                    LiczbaPowt=0;
            }





return 0;
}
