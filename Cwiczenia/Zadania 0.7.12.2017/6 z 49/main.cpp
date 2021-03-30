#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int main()
{   int const n=6; ///ilosc liczb losowanych
    int T[n];
    bool dublet;

    srand(time(NULL));

    cout << "Witaj w Toto-lotku skurczybyku!" << endl;
    cout<<"Dzisiaj zostaniesz milionerem!"<<endl;


    for( int i = 0; i < n; i++ )
    {
        do
        {
       T[i]= 1+rand()% (49-1+1);
       /// Sprawdzanie powtorzen
       dublet=false;
       for(int j=0; j<i; j++) if(T[i]==T[j]) dublet=true;
        }
        while(dublet==true);

    }
    cout<<"Wyniki losowanka to: "<<endl;
    for( int i = 0; i < n; i++ )
    {
       cout<<i+1<<"."<<T[i]<<endl;

    }
    return 0;
}
