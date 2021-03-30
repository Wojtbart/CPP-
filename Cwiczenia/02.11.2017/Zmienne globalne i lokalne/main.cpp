#include <iostream>
#include<math.h>

using namespace std;

int g=1;   ///Zmienna globalna, dostepna w kazdym miejdscu programu
const double p=3.14;
void Funkcja1(void)
{   cout<<"W Funkcji1:"<<endl;
    cout<<"g="<<g<<endl;
}

int a=3;   ///Zmienna dostepna wszêdzie z wyjatkiem Funkcja1

void Funkcja2(void)
{   cout<<"W Funkcji2:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"g="<<g<<endl;
}

void Funkcja3(int p)
{   cout<<"W Funkcji3:"<<endl;
    cout<<"p="<<p<<endl;
    cout<<"Sinus pi="<<sin(p)<<endl;
}
int main()
{   string a="abc";  ///Zmienna 'a' przeslania zmienna a=3 zadeklarowana wczesniej
    int g=7;   ///Zasloniecie zmiennej globalnej
    cout << "Zmienne globalne i lokalne!" << endl;

    Funkcja1();
    Funkcja2();

    cout<<"W main:"<<endl;
    cout<<"a="<<a<<endl;

    Funkcja2();

    int b;
    cout<<"b=";
    cin>>b;
    Funkcja3(b);
    return 0;
}
