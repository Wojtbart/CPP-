#include <iostream>

using namespace std;

int silnia(int x)
{
    int w=1;   ///x-parametr "formalny"///
    for(int i=1; i<=x; i++) w=w*i;
    return w;  ///return-koñczy dzia³anie funkcji i zwraca obliczon¹ wartoœæ///
}
  int  n_po_k(int x, int y)
  {
      int w=1;
      w=silnia(x)/(silnia(y)*silnia(x-y));
      return w;
  }

  int WartBezw(int x)
  {

      if(x>=0) return x;
      else return -x;

  }
  int SumaKw(int x, int y)
  {
      int wynik;
      wynik=x*x+y*y;
      return wynik;

  }

void Linia(int LiczbaZnakow)
{ for(int i=1; i<=LiczbaZnakow; i++) cout<<"-";
cout<<endl;

}


void Linia2(void)
{ for(int i=1; i<=40; i++) cout<<"=";
cout<<endl;
}

void Linia3(int LiczbaZnakow, char Znak)
{


for(int i=1; i<=LiczbaZnakow; i++) cout<<Znak;
}

float potega(float x, float y)
{
float wynik=1;
if(y==0) return 1;
else
{for(int i=1; i<=WartBezw(y); i++) wynik=wynik*x;
{
if(y<0) wynik=((1)/(wynik));
}

}
return wynik;
}


double iloraz(int x,int y)
{


if(y==0) return 0;
else return double(x)/y;
}


int main()
{int a, b, c;

    cout << "Witaj!" << endl;
    cout << "Podaj wartosci liczb!"<<endl;
    cout<<"Podaj a= ";
    cin>>a;
    cout<<"Podaj b= ";
    cin>>b;

   Linia3(25,'&');

    cout<<endl;
   cout<<"Wartosc bezwzgledna z 'a' wynosi: "<<WartBezw(a)<<endl;
    Linia2();
   c=SumaKw(a,b);
   cout<<"Suma kwadratow a i b wynosi "<<c<<endl;
   Linia2();
   cout <<"Symbol '|a| po |b|' wynosi "<<n_po_k(WartBezw(a),WartBezw(b))<<endl;
   Linia2();
  cout<<"Iloraz a/b="<<iloraz(a,b)<<endl;
  Linia2();
  cout<<"Potega b do a="<<potega(b,a)<<endl;


    return 0;
}
