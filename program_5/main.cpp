#include <iostream>

using namespace std;

int main()
{
    int x, suma=0;
    int odp;

    cout<<"Witaj w tabliczce mnozenia!"<<endl;

    for(int i=0; i<=10; i++) cout<<"\t"<<i;
    cout<<endl;


    for(int i=0; i<=10; i++)
    { cout<<i;
        for(int j=0; j<=10; j++)
        {
            cout<<"\t"<<i*j;
        }
        cout<<endl;
    }

    cout<<"Witaj w programie"<<endl;
    cout<<"Wyswietlam slowa piosenki"<<endl;
    for(int i=99; i>1; i--)
    {
    cout<<i<<" bottles of beer on the wall, "<<i<<" bottles of beer. Take one down and pass it around - "<<i-1<<" bottles of beer on the wall."<<endl;
    }
    cout<<"1 bottle of beer on the wall, 1 bottle of beer. Take it down and pass it around - no more bottles of beer on the wall."<<endl;





    cout<<"Program oblicza sume liczb!"<<endl;

    while(x!=0)
    {
        cout<<"Podaj twoja liczbe:";
        cin>>x;
        suma+=x;
        cout<<"Suma wynosi: "<<suma<<endl;
    }




    cout<<"MENU"<<endl;
    cout<<"Wybierz odpowiedz od 1 do 4: ";
    cin>>x;
    if(x==1 || x==2 || x==3 || x==4)
    {

        cout<<"Wybrales opcje: "<<x<<endl;
        cout<<"Koniec programu!"<<endl;
    }
    else
    { do
    {
         cout<<"MENU"<<endl;
        cout<<"Wybierz odpowiedz od 1 do 4: ";
        cin>>x;
    } while(x!=1 && x!=2 && x!=3 && x!=4);

    }


    return 0;
}
