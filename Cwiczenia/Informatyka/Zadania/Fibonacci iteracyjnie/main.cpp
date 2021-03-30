#include <iostream>

using namespace std;

 int Fib(int n )
{
int f1=1, f2=1, f=1;
for(int i=3; i<=n; i++)
 {f=f1+f2;
    f2=f1;
    f1=f;

 }
 return f;
}
int main()
{ int n;
    cout << "Program zwraca n-ta liczba ciagu Fibonacciego!" << endl;
    cout<<"Podaj wartosc n:";
    cin>>n;
    cout<<"Liczba ciagu Fibonacciego :"<<Fib(n)<<endl;

    return 0;
}
