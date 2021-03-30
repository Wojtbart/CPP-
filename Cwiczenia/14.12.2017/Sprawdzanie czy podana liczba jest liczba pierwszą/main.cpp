#include<iostream>

using namespace std;

bool czy_pierwsza(int a)
{
  if(a<2)
    return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹

  for(int i=2;i*i<=a;i++)
    if(a%i==0)
      return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
  return true;
}

int main()
{
  int a;
  cout<<"Witaj w programie sprawdzajacym czy podana liczba jest liczba pierwsza!"<<endl;
  cout<<"Podaj twoja liczbe: ";
  cin>>a;

  if(czy_pierwsza(a)) //lub czy_pierwsza(n)==1
    cout<<"Liczba "<<a<<" jest liczba pierwsza!"<<endl;
  else
    cout<<"Liczba "<<a<<" nie jest liczba pierwsza!"<<endl;


  return 0;
}
