#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   int x, y, licznik=0, maks=100, mini=1;

    srand(time(NULL));
    x=rand()%((maks-mini+1)+ mini);

    cout << "Zgadnij jaka to liczba od 1 do 100!" << endl;

    while(1)
    {
        licznik++;
        cout << "Podaj swoja liczbe:" << endl;
        cin>>y;
        if(y>x) cout<<"Podales za duza liczbe!"<<endl;
        else if(y==x)
        {   cout<<"Udalo ci sie! WYGRANA"<<endl;
            break;
        }
        else cout<<"Podales za mala liczbe!"<<endl;
    }

    cout<<"Ilosc prob to : "<<licznik<<endl;
    cout<<"Szukana liczba to: "<<x<<endl;



      //Program rozwiazuje zagadke jaka to liczba
    for(int i=0; i<x; i++)
    {
    if(x==(maks/2)) cout<<"Nasza szukana liczba jest: "<<x<<endl;
    else if(x>(maks/2))
      {
        mini=maks/2;
        x=(mini+maks)/2;
      }
    else if(x<(maks/2))
    {
        maks=maks/2;
        x=(mini+maks)/2;

    }
    }

    return 0;
}
