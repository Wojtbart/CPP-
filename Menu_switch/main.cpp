#include <iostream>
#include <string>

using namespace std;

double a, b, x, y;

int name()
{
    string imie;
    cout << "Podaj swoje imie: ";
    cin>>imie;
    cout<<"Twoje imie to : "<<imie<<endl;
}
int surname()
{
    string nazwisko;
    cout << "Podaj swoje nazwisko: ";
    cin>>nazwisko;
    cout<<"Twoje nazwisko to : "<<nazwisko<<endl;
}
int age()
{
    int wiek;
    cout << "Podaj swoj wiek: ";
    cin >> wiek;
    cout<<"Twoj wiek to: "<<wiek<<endl;
}
double dodaj(double x, double y)
{
    return x+y;
}
double odejmij(double x, double y)
{
    return x-y;
}
double pomnoz(double x, double y)
{
    return x*y;
}
double podziel(double x, double y)
{
    if(y!=0) return x/y;
}
int kalkulator()
{
    string oper;
    cout << "Witaj w kalkulatorze!" << endl;
    cout<<"Podaj swoj operator: ";
    cin>>oper;
    cout<<"Podaj twoja liczbe: ";
    cin>>a;
    cout<<"Podaj twoja liczbe: ";
    cin>>b;
    if(oper=="+") cout<<"Wynik wynosi: "<<dodaj(a,b)<<endl;
    else if(oper=="-") cout<<"Wynik wynosi: "<<odejmij(a,b)<<endl;
    else if(oper=="*") cout<<"Wynik wynosi: "<<pomnoz(a,b)<<endl;
    else if(oper=="/" && b!=0) cout<<"Wynik wynosi: "<<podziel(a,b)<<endl;
    else if (oper=="/" && b==0)  cout<<"Nie mozna dzielic przez zero!"<<endl;
}
void piosenka()
{
    cout<<"Wyswietlam slowa piosenki"<<endl;
    for(int i=99; i>1; i--)
    {
    cout<<i<<" bottles of beer on the wall, "<<i<<" bottles of beer. Take one down and pass it around - "<<i-1<<" bottles of beer on the wall."<<endl;
    }
    cout<<"1 bottle of beer on the wall, 1 bottle of beer. Take it down and pass it around - no more bottles of beer on the wall."<<endl;
}

int main()
{
    int wybor;

    cout << "MENU - wybierz interesujaca Cie opcje!" << endl;
    cout << "1. Wyswietli imie" << endl;
    cout << "2. Wyswietli nazwisko" << endl;
    cout << "3. Wyswietli wiek" << endl;
    cout << "4. Kalkulator" << endl;
    cout << "5. Drukowanie piosenki 99 Bottles of beer" << endl;
    cout<<"Twoj wybor to: ";
    cin>>wybor;

switch(wybor)
{   case 1:
        name();
        break;
    case 2:
        surname();
        break;
    case 3:
        age();
        break;
    case 4:
        kalkulator();
        break;
    case 5:
        piosenka();
        break;
    default:
        cout<<"Wybrales niepoprawna opcje!"<<endl;
        break;
}
    cout<<"Koniec programu!"<<endl;
    return 0;
}
