#include <iostream>

using namespace std;

bool Pierwsza(int x)
{

    int LiczbaDzielnikow=0;
  for(int i=1;i<=x;i++)
    if(x%i==0) LiczbaDzielnikow=LiczbaDzielnikow+1; ///gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
     if( LiczbaDzielnikow==2) return true;
     else return false;
}
///-----------------------------------------------------------------Pierwsza
bool Pierwsza1(int x)
{
    int LiczbaDzielnikow=0;
  for(int i=1;i<=x/2;i++)
    if(x%i==0) LiczbaDzielnikow=LiczbaDzielnikow+1; ///gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
     if( LiczbaDzielnikow==1) return true;
     else return false;
}
///-----------------------------------------------------------------Pierwsza1
bool Pierwsza2(int x)
{
    if(x==1) return false;
     for(int i=2; i*i<=x; i++)
    if(x%i==0) return false;
     return true;
}
///----------------------------------------------------------------Pierwsza2
int main()
{
  int n;
  cout<<"Witaj w programie sprawdzajacym czy podana liczba jest liczba pierwsza!"<<endl;
  cout<<"Podaj twoja liczbe: ";
  cin>>n;

  if(Pierwsza2(n)==true) //lub czy_pierwsza(n)==1
    cout<<"Liczba "<<n<<" jest liczba pierwsza!"<<endl;
  else
    cout<<"Liczba "<<n<<" nie jest liczba pierwsza!"<<endl;


  return 0;
}
