#include <iostream>
#include <cmath>
using namespace std;
///----------------------------------------------------------------------------------------------------------------------
double OdwrotnoscLiczby(int x)
{
    if(x!=0) return 1.0/(x);
    else return 0;

}
///----------------------------------------------------------------------------------------------------------------------
void Choinka(int a)
{
    for(int i=0; i<a; i++)
    {
        for(int j=1; j<=a-i-1; j++) cout<<" ";
        for(int j=1; j<=2*i+1; j++) cout<<"X";
        cout<<endl;

    }
}
///----------------------------------------------------------------------------------------------------------------------
void PorownanieWart(int x, int y)
{
    for(int i=1; i<=x; i++) cout<<"X";
    cout<<endl;
    for(int j=1; j<=y; j++) cout<<"X";
    cout<<endl;

}

///-------------------------------------------------------------------------------------------------------------------------

string DzienTygodnia(int x)
{
    if(x==1) return "Poniedzialek";
    else if(x==2) return "Wtorek";
         else if(x==3) return "Sroda";
              else if(x==4) return "Czwartek";
                   else if(x==5) return "Piatek";
                        else if(x==6) return "Sobota";
                             else if(x==7) return "Niedziela";
                                  else return "";
}
///===================================================================================================================================

int main()
{

int a,b,c;
double r;


  cout<<"Podaj liczbe calkowita a=";
  cin>>a;
  cout<<"Podaj liczbe calkowita b=";
  cin>>b;



//C------------------------------------------------------


 r=OdwrotnoscLiczby(a);
 cout<<" 1/a = " <<OdwrotnoscLiczby(a)<<endl;

 /// Uwaga! Dla a=0 funkcja ma zwrocic wartosc 0
 cout<<OdwrotnoscLiczby('A')<<endl;


//D------------------------------------------------------



 cout<<" Procedura rysuje choinke o podanej wysokosci"<<endl;
 cout<<" Oto choinka o wysokosci a:"<<endl;




 // np. dla a=4 na ekranie
 // pojawi sie obraz:
 //    x
 //   xxx
 //  xxxxx
 // xxxxxxx

 Choinka(a);



//E------------------------------------------------------



 cout<<" Porownanie wartosci liczb a i b!"<<endl;
 cout<<" Poziome linie maja dlugosc odpowiadajaca wartosci liczby!"<<endl;


 PorownanieWart(a,b);



//F------------------------------------------------------



 cout<<" Funkcja zwraca nazwe dnia tygodnia o podanym numerze:"<<endl;

 cout<< "Dzien tygodnia o numerze "<<a<<" nazywa sie: "<<DzienTygodnia(a)<<endl;


    return 0;
}

