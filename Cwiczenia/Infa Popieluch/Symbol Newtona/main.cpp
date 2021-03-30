#include <iostream>
#include <math.h>

using namespace std;

int main()
{ int n, k;
  unsigned long a=1;
  unsigned long b=1;
  unsigned long c=1;

    cout << "Witaj!" << endl;
    cout << "To program obliczajacy symbol Newtona!" << endl;

    cout << "Podaj liczbe n=";
    cin >>n;
    cout << "Podaj liczbe k=";
    cin >>k;

    if(n>=k)
    {
        for(int i=1; i<=n; i++)
            a=i*a;
        for(int i=1; i<=k; i++)
            b=i*b;
        for(int i=1; i<=n-k; i++)
            c=i*c;
        cout<<"Symbol Newtona wynosi: "<<a/(b*c)<<endl;
    }
    else
    {
        cout<<"Podane liczby sa niepoprawne, musi byc spelniony warunek: n>=k!";
    }
    return 0;
}
