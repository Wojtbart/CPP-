#include <iostream>

using namespace std;
 void Linia(int a)
 {
     for(int i=1; i<=a; i++) cout<<"X";
     cout<<endl;
 }
 void Linia1(int b)
 {
     for(int i=1; i<=b; i++) cout<<"X";
     cout<<endl;
 }
int main()
{ int a,b;
     cout<<" Porownanie wartosci liczb a i b!"<<endl;
     cout<<" Poziome linie maja dlugosc odpowiadajaca wartosci liczby!"<<endl;
     cout<<" Podaj dlugosc pierwszej linijki: ";
     cin>>a;
     cout<<" Podaj dlugosc drugiej linijki: ";
     cin>>b;

     Linia(a);
     Linia1(b);






 // np. dla a=4 i b=6 na ekranie po wydaniu polecenia PorownanieWart(|a|,|b|)
 // pojawi sie obraz:
 // xxxx
 // xxxxxx
    return 0;
}
