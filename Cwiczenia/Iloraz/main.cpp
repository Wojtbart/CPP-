#include <iostream>

using namespace std;

 float Iloraz(float a, float b)
{
if(b!=0) return a/b;
else return 0;
}



int main()
{ int a, b;
    cout << "Witaj w programie, ktory zwraca wartosc rzeczywista argumentow a i b!" << endl;
    cout << "Podaj argument a:";
    cin >>a;
    cout << "Podaj argument b:";
    cin >>b;

    cout<<"Ilorazem danego dzialania jest: "<< Iloraz(a, b)<<endl;



    return 0;
}
