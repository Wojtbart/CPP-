#include <iostream>
#include<math.h>

using namespace std;

int main()
{  double a;
    cout << "Witaj w programie obliczajacym pierwiastek z podanej liczby!" << endl;
    cout<< "Podaj twoja liczbe:";
    cin >>a;
    if(a>=0)
    {
        cout<<"Pierwiastek z twojej liczby to:"<<sqrt(a)<<endl;
    }
    else
    {
        cout<<"Nie ma pierwiastkow z liczb ujemnych!"<<endl;
    }
    return 0;
}
