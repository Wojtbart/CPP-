#include <iostream>

using namespace std;
void Funkcja (int n) /// przekazywanie parametru przez wartoœæ
{
    n=n+2;
    cout<<"Wewnatrz funkcji: "<<n<<endl;
}
void Funkcja2 (int &n) /// przekazywanie parametru przez referencje
{
    n=n+2;
    cout<<"Wewnatrz funkcji 2: "<<n<<endl;
}
bool Iloraz (int x,int y, double &w)
{
    bool ok=true;
    if(y!=0) w=double(double(x)/y);
    else ok=false;
    return ok;
}
int main()
{  int a,b;
double r;
    cout << "Podaj wartosc a:";
    cin>>a;
    cout<<"Podaj wartosc b=";
    cin>>b;

    cout<<"--------przekazywanie paramteru przez wartosc----------------------------------"<<endl;
    cout<<"W programie glownym a="<<a<<endl;
    Funkcja(a);
    cout<<"W programie glownym po procedurze FUNKCJA a="<<a<<endl;
    Funkcja(5); ///tak te¿ mo¿na wywo³aæ funkcje

    cout<<"--------przekazywanie paramteru przez referencje----------------------------------"<<endl;
    cout<<"W programie glownym a="<<a<<endl;
    Funkcja2(a);
    cout<<"W programie glownym po procedurze FUNKCJA a="<<a<<endl;
   /// Funkcja2(5); ///tak nie mo¿na wywo³aæ funkcji
  if(Iloraz(a,b,r)) cout<<"a/b="<<r<<endl;
  else cout<<"Pamietaj Andzelo nie dziel przez zero"<<endl;
    return 0;
}
