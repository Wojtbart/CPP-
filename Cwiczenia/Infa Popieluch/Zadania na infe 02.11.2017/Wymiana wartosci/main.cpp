#include <iostream>

using namespace std;
void  WymienWartosciami(int &x,int &y )
{
 int c;
  c=x;
  x=y;
  y=c;
}

 int main()
 {int a,b;

    cout << "Podaj wartosc a:";
    cin>>a;
    cout<<"Podaj wartosc b=";
    cin>>b;
    WymienWartosciami(a, b);
    cout<<"Teraz a="<<a<<" oraz b="<<b<<endl;

    return 0;
}
