#include <iostream>

using namespace std;

int silnia(int x)
{
    int w=1;   ///x-parametr "formalny"///
    for(int i=1; i<=x; i++) w=w*i;
    return w;  ///return-konczy dzialanie funkcji i zwraca obliczona wartosc///
}


int silniaR(int x) /// funkcja rekurencyjna
 {
     if(x==0) return 1;
     else return x*silniaR(x-1);
 }

  int  n_po_k(int x, int y)
  {
      int w=1;
      w=silnia(x)/(silnia(y)*silnia(x-y));
      return w;
  }

int main()
{int n, k;

   /// cout << "Witaj!" << endl;
    cout << "Obliczam dla Ciebie n po k!"<<endl;
    ///
    cout<<"Podaj n= ";
    cin>>n;
    cout<<"Podaj k= ";
    cin>>k;


   ///     cout<<"Symbol Newtona wynosi: "<<n_po_k(n,k)<<endl; ///

 cout<<"n!="<<silniaR(n)<<endl;

    return 0;
}
