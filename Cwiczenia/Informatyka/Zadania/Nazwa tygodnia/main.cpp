#include <iostream>

using namespace std;
   string  Dzien(int a)
{   if(a==1)        return "Poniedzialek";
    else if(a==2)   return "Wtorek";
    else if(a==3)   return "Sroda";
    else if(a==4)   return "Czwartek";
    else if(a==5)   return "Piatek";
    else if(a==6)   return"Sobota";
    else if(a==7)   return "Niedziela";
    else            return " Nie ma takiego dnia!";
}

int main()
{ int a;
    cout <<"Podaj liczbe, a ja wyswietle ci dzien tygodnia:";
    cin>>a;
    cout<< "Dzien tygodnia o numerze "<<a<<" nazywa sie: "<< Dzien(a)<<endl;
    return 0;

    }
