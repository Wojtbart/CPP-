#include <iostream>

using namespace std;
void WartBezw(int &x) ///przypisuje liczbie jej wartosc bezwzgledna
{
    if(x<0) x=-x;
}
///-----------------------------------------------------------------------------
double Iloraz(double x, double y, bool &ok)
{
    if(y==0)
    {
        ok=false;
        return 0;
    }
    else
    {
        ok =true;
        return x/y;
    }
}
double Pierwiastek(double)
{
    if()
}

///==================================================================================
int main()
{
    int a,b;
    double r;
    bool poprawnie;


  cout<<"Podaj liczbe calkowita a=";
  cin>>a;
  cout<<"Podaj liczbe calkowita b=";
  cin>>b;

  cout<<"a="<<a<<endl;
  WartBezw(a);
  cout<<"|a|="<<a<<endl;


  r=Iloraz(a,b,poprawnie);
  if(poprawnie==true) cout<<"a/b="<<r<<endl;
  else cout<<"Gosciu nie dziel przez zero!!!"<<endl;

  r=Pierwaistek(b,poprawnie);
  if(poprawnie==true) cout<<"PIerwaistek z a="<<r<<endl;
  else cout<<"Gosciu zastanow sie troche!!!"<<endl;

  return 0;
}
