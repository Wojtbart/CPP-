#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time///
using namespace std;

int main()
{ int w, a=0; /// w-wynik jednego z rzutow
  int T[6];
             cout<<"Witaj w programie, ktory generuje szesciokrotny rzut kostka!"<<endl;

             srand(time(NULL)); ///Inicjuje generator liczb

             cout<<"Wylosowane liczby to:"<<endl;

             for(int i=1; i<=6; i++)
             {  w= 1 + rand() %(6-1+1);
               cout<<i<<"."<< w<<endl;
             }

             cout<<"Wyniki powtorzyly sie:"<<endl;

    for(int j=1; j<=6; j++)
    {
        for(int i=0; i<=6-1; i++)
         {
        if(T[i]==j) a=a+1;
         }
        cout<<j<<") "<<a<<endl;
        a=0;
    }
    return 0;
}




