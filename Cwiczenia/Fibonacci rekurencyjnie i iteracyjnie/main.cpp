#include <iostream>

using namespace std;

 int liczbakrokow=0;

int FibR(int n)
{
    liczbakrokow++;
    if(n<=1) return 1;
    else return FibR(n-2)+FibR(n-1);
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
    cout<<"Rekurencyjnie: "<<FibR(a)<<endl;
    cout<<"Wykonano "<<liczbakrokow<<" krokow"<<endl;


    return 0;
}
