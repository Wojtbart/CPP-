#include <iostream>
#include <string>
#include <cstdlib>
#include <typeinfo>

enum tydzien
{
    poniedzialek=1,
    wtorek=2,
    sroda=3,
    czwartek=4,
    piatek=5,
    sobota=6,
    niedziela=7

};


const int x=8;

using namespace std;

int main()
{
    system("chcp 1250");
    system("CLS");

    tydzien dzien;
    dzien=czwartek;
    typedef double Typ;

    int a, b, c, f;
    float e;
    char d;
    Typ x, y, z;
    string imie, nazwisko, pelne;

    string one= "SIemano kolano";
    cout<<one<<endl;


   // x++;
   // cout << "Hello world!" << endl;
    cout<<"Podaj¹ x"<<endl;
    cin>>x;
    cout<<"Podaj y"<<endl;
    cin>>y;
    cout<<"ich suma to: "<<x+y<<endl;
    cout << "Wprowadziles: " << x << "\n";
    //komentarz wjednejlinijce

    /*komentarz w 2 linijkach
    ------------------------
    */


    cout<<sizeof(x)<<endl;

    cout<<"Czesc, podaj swoje imie oraz nazwisko"<<endl;
    getline(cin, imie);
    cin>>imie;
    cin>>nazwisko;
    pelne=imie +" "+ nazwisko;
    cout<<"Nazywasz sie : "<<pelne<<endl;

    cout<<imie<<endl;

    z=(x)/(y);
    cout<<z<<endl;

    e=4.5;
    f=static_cast<int>(e);
    cout<<typeid(e).name()<<endl;
    cout<<typeid(f).name()<<endl;
    cout<<"dzien tygodnia ma numer: "<<dzien<<endl;



    return 0;
}
