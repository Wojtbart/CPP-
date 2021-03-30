#include <iostream>

using namespace std;

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

int main()
{
    string oper;
    double a, b;
    cout << "Witaj w kalkulatorze!" << endl;
        cout<<"Podaj swoj operator: ";
        getline(cin, oper, '\n');
        cout<<"Podaj twoja liczbe: ";
        cin>>a;
        cout<<"Podaj twoja liczbe: ";
        cin>>b;

        if(oper=="+") cout<<"Wynik wynosi: "<<dodaj(a,b)<<endl;
        else if(oper=="-") cout<<"Wynik wynosi: "<<odejmij(a,b)<<endl;
        else if(oper=="*") cout<<"Wynik wynosi: "<<pomnoz(a,b)<<endl;
        else if(oper=="/" && b!=0) cout<<"Wynik wynosi: "<<podziel(a,b)<<endl;
        else if (oper=="/" && b==0)  cout<<"Nie mozna dzielic przez zero!"<<endl;

    return 0;
}
