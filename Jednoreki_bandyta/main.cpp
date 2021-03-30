#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>


using namespace std;



int main()
{
    int x1=0, x2=0, x3=0, licznik=0;
    srand(time(NULL));
    cout << "Oto automat jednoreki bandyta!" << endl;
    cout<<"Automat moze wylosowac liczbe od 1 do 5!"<<endl;
    cout<<"Sa 2 sekundy przerwy miedzy kazdym losowaniem!"<<endl;

        while(1)
        {
            licznik++;
            Sleep(2000);
            x1=rand()%5+1;
            cout<<x1<<'\t';
            Sleep(500);
            x2=rand()%5+1;
            cout<<x2<<'\t';
            Sleep(500);
            x3=rand()%5+1;
            cout<<x3<<endl;
            Sleep(500);
            if(x1==3 && x2==3 && x3==3)
            {
                cout<<"Wylosowales trzy takie same wartosci! Wygrywasz."<<endl;
                cout<<"Ilosc prob to: "<<licznik<<endl;
                break;
            }
             else cout<<"Nie udalo sie! Sprobuj jeszcze raz!"<<endl;

        }


    return 0;
}
