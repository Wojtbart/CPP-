#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time///
using namespace std;

int main()
{ int w; ///n-ilosc rzutow, w-wynik jednego z rzutow
             cout<<"Witaj w programie, ktory generuje szesciokrotny rzut kostka!"<<endl;
             cout<<"Podaj liczbe rzutow n=";
             cin>>n;
             srand(time(NULL)); ///Inicjuje generator liczb
             cout<<"Wylosowane liczby to:"<<endl;

             for(int i=1; i<=n; i++)
             {  w= 1 + rand() %(6-1+1);
               cout<<i<<"."<< w<<endl;
             }
return 0;
}
