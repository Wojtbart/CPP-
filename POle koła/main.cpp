#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
const double pi=3.1415;
int main()
{ float r;
  float z;
    cout << "Witaj w programie liczaczym pole kola!" << endl<<endl;
    cout << "Podaj promien kola ,wiekszy od zera:"<<endl;
    cin >>r;
    z=pi*r*r;
    cout <<"Pole kola to: "<<z<<endl;

    system("PAUSE");
    return 0;
}
