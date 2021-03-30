#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time///
using namespace std;
const int LiczbaRzut=6; ///liczba rzutow kostka
int main()
{
             cout<<"Witaj w programie, ktory generuje szesciokrotny rzut kostka!"<<endl;
             int T[LiczbaRzut],  LiczbaPowt[7]={};

             srand(time(NULL)); ///Inicjuje generator liczb

             cout<<"Wylosowane liczby to:"<<endl;

             for(int i=0; i<LiczbaRzut; i++)
             {  T[i]= 1 + rand() %(6-1+1);
               cout<< T[i]<<", ";

             }
             cout<<"\b\b "<<endl;
             for(int i=0; i<LiczbaRzut; i++)
                LiczbaPowt[T[i]]=LiczbaPowt[T[i]]+1;
              cout<<endl;
           cout<<"Nastepujace liczby powtorzyly sie: "<<endl;
             for(int i=1; i<=6; i++)
            {
                cout<<i<<"."<<"powtorzone "<<LiczbaPowt[i]<<" razy"<<endl;
            }





return 0;
}
