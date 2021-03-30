#include <iostream>

using namespace std;

 float Potega(float podstawa, int potega)
{int wynik=1;
for(int i=0; i<potega; i++)
  wynik=wynik*podstawa;
    return wynik;
}



int main()
{ int a, b;
    cout << "Witaj w programie, ktory liczy potege liczby a^b!" << endl;
    cout << "Podaj podstawe potegi a:";
    cin >>a;
    cout << "Podaj potege b:";
    cin >>b;

    cout<<"Wynikiem danego dzialania jest: "<< Potega(a, b)<<endl;



    return 0;
}
