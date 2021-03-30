#include <iostream>

using namespace std;

 int liczbakrokow=0;

int FibR(int n) ///FibR-funkcja rekurencyjna
{
    liczbakrokow++;
    if(n==0) return 0;
    if(n==1) return 1;
    else return FibR(n-2)+FibR(n-1);
}
int Fib(int n) ///Fib -funkcja rekurencyjna
{
    int f1=0, f2=1, f=1;
if(n==0) return 0;
else
{
   for(int i=2; i<=n; i++)

  { liczbakrokow++;
    f=f1+f2;
    f1=f2;
    f2=f;
  }
  return f;

}

}

int main()
{
    int a;
    cout << "Liczba Fibonacciego!" << endl;
    cout<<"Podaj wyraz ciagu n=";
    cin>>a;

    cout<<"Iteracyjnie: "<<Fib(a)<<endl;
    cout<<"Wykonano "<<liczbakrokow<<" krokow"<<endl;
    cout<<"Rekurencyjnie: "<<FibR(a)<<endl;
    cout<<"Wykonano "<<liczbakrokow<<" krokow"<<endl;


    return 0;
}
