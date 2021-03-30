#include <iostream>
#include <string>

using namespace std;

int main()
{
    string haslo, login;
    int x;


    cout<<"Witaj uzytkownik 1!"<<endl;
    cout << "Podaj login:";
    getline(cin, login, '\n' );
    cout << "Podaj haslo:";
    getline(cin, haslo, '\n' );

    if(login=="kupa123" && haslo=="123456")
        cout<<"Przyznano dostep!"<<endl;
    else if(login!="kupa123" && haslo!="123456")
    {
         cout<<"Odmowa dostepu!"<<endl;
         cout<<"Sprobuj jeszcze raz!"<<endl;
         cout << "Podaj login:";
         getline(cin, login, '\n' );
         cout << "Podaj haslo:";
         getline(cin, haslo, '\n' );
         if(login=="kupa123" && haslo=="123456")
         cout<<"Przyznano dostep!"<<endl;
         else cout<<"Odmowa dostepu!"<<endl;
    }



    cout<<"Witaj uzytkownik 2!"<<endl;
    cout << "Podaj login:";
    getline(cin, login, '\n' );
    cout << "Podaj haslo:";
    getline(cin, haslo, '\n' );

    if(login=="kupa" && haslo=="123")
        cout<<"Przyznano dostep!"<<endl;
    else if(login!="kupa" && haslo!="123")
    {
         cout<<"Odmowa dostepu!"<<endl;
         cout<<"Sprobuj jeszcze raz!"<<endl;
         cout << "Podaj login:";
         getline(cin, login, '\n' );
         cout << "Podaj haslo:";
         getline(cin, haslo, '\n' );
         if(login=="kupa" && haslo=="123")
         cout<<"Przyznano dostep!"<<endl;
         else cout<<"Odmowa dostepu!"<<endl;
    }
    return 0;
}
