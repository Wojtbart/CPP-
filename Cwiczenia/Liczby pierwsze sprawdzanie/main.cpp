#include <iostream>


using namespace std;

bool czy_pierwsza(int a)
{
  if(a<1)
    return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsza

  for(int i=2;i*i<=a;i++)
    if(a%i==0)
      return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
  return true;
}
int main()
{ int n;

    cout << "Witaj w programie, ktory w przedziale od <1;n>  wypisuje liczby pierwsze!" << endl;
    cout<<"Podaj twoja liczbe n:";
    cin>>n;

    cout<<"Liczby pierwsze z przedzialu <1;"<<n<<"> to:"<<endl;
    for( int i=1; i<=n; i++)
    {
      if(czy_pierwsza(i)==true)
      cout<<i<<endl;
    }


    return 0;
}
