#include <iostream>

using namespace std;



int fibR(int n)
{

    if(n<=2) return 1;
    else return fibR(n-2)+fibR(n-1);
}

int Fib(int n )
{
  int f1=1, f2=1, f=1;
  for(int i=3; i<=n; i++)
 {  f=f1+f2;
    f2=f1;
    f1=f;
 }
 return f;
}

int main()
{
    int a;
    cout << "Liczba Fibonacciego!" << endl;

    cout<<"Podaj wyraz ciagu n=";
    cin>>a;

    cout<<"Iteracynie: "<<Fib(a)<<endl;
    cout<<"Rekurencyjnie: "<<fibR(a)<<endl;


    return 0;
}
