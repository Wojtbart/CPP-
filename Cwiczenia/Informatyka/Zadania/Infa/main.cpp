#include <iostream>
#include <cmath>
using namespace std;

  WartoscBezwzgledna(double x)
 {
if(x<0) return -x;
return x;
}
  Suma2(int x,int y)
 {
return x*x+y*y;

 }
   double OdwrotnoscLiczby(double  x)
  {
      if(x!=0) return 1/(x);
      else return 0;

  }



int main()
{

int y,x,z;
double r;


  cout<<"Podaj liczbe calkowita x=";
  cin>>x;
  cout<<"Podaj liczbe calkowita y=";
  cin>>y;

 cout<<"|x|="<< WartoscBezwzgledna(x) <<endl;
cout <<" Suma kwadratow liczb x i y wynosi "<<Suma2(x,y)<<endl;
cout<<" 1/a = " <<OdwrotnoscLiczby(x)<<endl;


    return 0;
}
