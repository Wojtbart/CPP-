#include <iostream>


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
{ int n;

    cout << "Witaj w programie, ktory w przedziale od <1;n>  wypisuje liczby pierwsze!" << endl;
    cout<<"Podaj twoja liczbe n:";
    cin>>n;

    cout<<"Liczby pierwsze z przedzialu <1;"<<n<<"> to:"<<endl;
    for( int x=1; x<=n; x++)
    {if(czy_pierwsza(x)==true)
     cout<<x<<endl;
    }


    return 0;
}
