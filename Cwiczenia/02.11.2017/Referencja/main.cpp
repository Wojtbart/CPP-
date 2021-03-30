#include <iostream>

using namespace std;
///=================================================================================
void WartBezw(int &x) ///przypisuje liczbie jej wartosc bezwzgledna
{
    if(x<0) x=-x;
}
///=================================================================================
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
///==================================================================================

void Diagram(int x)
{
    if(x>=0)
    {
     for(int i=1; i<=39; i++ ) cout<<" "; cout<<"|";
     for(int i=1; i<=x; i++ ) cout<<"X";
     cout<<endl;
    }
    else
    {
       for(int i=1; i<=39+x; i++) cout<<" ";
       for(int i=1; i<=-x; i++) cout<<"X"; cout<<"|";
       cout<<endl;
    }
}

///===================================================================================
void  WymienWartosciami(int &x,int &y)
{
  int c;
  c=x;
  x=y;
  y=c; ///swap(x,y)
}
///===================================================================================
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



    cout<<"a="<<a<<"b="<<b<<endl;
    WymienWartosciami(a, b);
    cout<<"Teraz a="<<a<<" oraz b="<<b<<endl;



    cout << "Diagram!" << endl;
    cout << "Ten  diagram pokazuje wartosc liczby dodatniej lub ujemnej!"<<endl;
    cout<<endl;
    Diagram(a);
    cout<<endl;


  return 0;
}
