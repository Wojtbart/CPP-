#include <iostream>

using namespace std;

void ImieINazwisko1(string *imie, string *nazwisko)
{
    cout<<"Podaj swoje imie: ";
    cin>>*imie;
    if(nazwisko==NULL)
    {
    cout<<"Podaj swoje nazwisko: ";
    cin>>*nazwisko;
    }
    cout<<"Nazywasz sie: "<<*imie<<" "<<*nazwisko<<endl;
}
void ImieINazwisko2(string &imie, string &nazwisko)
{
    cout<<"Podaj swoje imie: ";
    cin>>imie;
    cout<<"Podaj swoje nazwisko: ";
    cin>>nazwisko;
    cout<<"Nazywasz sie: "<<imie<<" "<<nazwisko<<endl;
}

int DwaWyniki(int *suma, int *iloczyn)
{
    int x=*suma;
    int y=*iloczyn;
    cout<<"Podaj x: ";
    cin>>x;
    cout<<"Podaj y: ";
    cin>>y;
    *suma=x+y;
    *iloczyn=x*y;
    return *suma;
}


int main()
{
    int a, b, *c, *d;

    string imie, nazwisko;   //referencja
    ImieINazwisko2(imie, nazwisko);

    string *wsk1=&imie, *wsk2=&nazwisko;   //wskaznik
    ImieINazwisko1(wsk1, wsk2);

    DwaWyniki(&a,&b);
    cout<<a<<endl<<b<<endl;

    if(c<d)
    {
        cout<<c<<endl<<d<<endl;

    }

    return 0;
}



