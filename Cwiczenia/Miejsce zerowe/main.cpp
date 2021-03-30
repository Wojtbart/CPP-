#include <iostream>
#include  <cmath>
using namespace std;

double F(double x)
 {
     return x*x-5*x+6;
 }

 double MiejsceZerowe(double p,double q, double E)
 {  int licznik=0;
      double s;
  while((q-p)>E)
  {
      s=(q+p)/2;
      if(F(p)*F(s)<=0) q=s;
      else p=s;
      licznik++;
  }
  cout<<"Wykonano "<<licznik<<" krokow!"<<endl;
  return (q+p)/2;
 }
int main()
{   double p=2.5, q=5;///dziedzina funkcji
    double E=0.00001;
    ///M_PI -> liczba pi
    ///M_E -> liczba e
    cout << "Siema eniu dobry murzyn z africa!" << endl;
    cout<< "Znajduje miejsce zerowe funkcji"<<endl;

    cout<<"Funkcja ma miejsce zerowe w punkcie x0="<<MiejsceZerowe(p,q,E)<<" +/- "<<E<<endl;
    return 0;
}
