#include <iostream>

using namespace std;

int main()
{  int a,b;
    cout << "Witaj w programie wyznaczajacym liczby podzielne przez 2 i 3 z danego przedzialu!" <<endl;
    cout<<"Podaj twoja pierwsza liczbe:";
    cin>>a;
    cout<<"Podaj twoja druga liczbe:";
    cin>>b;

    if (a<0)  a=a*(-1);
    if(b<0) b=b*(-1);


    if (a>b)
    { cout<<"Liczby podzielne  przez 2 lub 3 z przedzialu <"<<b<<";"<<a<<"> to:"<<endl;
     for(int i=b; i<=a; i++)
       {
          if((i%3)==0 || (i%2)==0)

          cout<<i<<endl;
       }
     }

    else
    { cout<<"Liczby podzielne  przez 2 lub 3 z przedzialu <"<<a<<";"<<b<<"> to:"<<endl;
    for(int i=a; i<=b; i++)
    {
       if((i%3)==0 || (i%2)==0)

       cout<<i<<endl;

    }

    }
    return 0;
}
