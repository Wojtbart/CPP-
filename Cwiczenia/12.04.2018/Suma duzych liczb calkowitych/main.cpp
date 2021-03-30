#include <iostream>
#include <iomanip>
using namespace std;


 string Suma(string a, string b)
 {
     string c=""; ///wynik obliczeñ///
     int dla =a.length(); ///dlugosc-dl
     int dlb =b.length();
     if(dla>dlb)
        for(int i=0; i<(dla-dlb); i++) b="0"+b;
     else
        for(int i=0; i<(dlb-dla); i++) a="0"+a;


 }


int main()
{   string x,y;
    cout << "Podaj liczby calkowite(maks.255 znakow)" << endl;
    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;


    cout<<setw(78)<<x<<endl;
    cout<<"+"<<setw(77)<<y<<endl;
    cout<<setw(78)<<"______________________________________________________________________________";
    cout<<setw(78)<<Suma(x,y);
    return 0;
}
