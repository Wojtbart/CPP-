#include <iostream>

using namespace std;

string haslo;

void jeszczeraz1()
{

    cout << "Podaj haslo jeszcze raz: ";
    getline(cin, haslo, '\n' );
}
void jeszczeraz2()
{

    cout << "Podaj haslo jeszcze raz: ";
    getline(cin, haslo, '\n' );
}
void jeszczeraz3()
{

    cout << "Podaj haslo jeszcze raz: ";
    getline(cin, haslo, '\n' );
}


void sprawdz_haslo1()
{
    while (1)
    {
    if( haslo=="iveco")
    {
        cout<<"Przyznano dostep!"<<endl;
        break;
    }
    else if(haslo!="iveco")
    {
         cout<<"Odmowa dostepu!"<<endl;
         jeszczeraz1();
    }
    }
}
void sprawdz_haslo2()
{
    while (1)
    {
    if( haslo=="eurocargo")
    {
        cout<<"Przyznano dostep!"<<endl;
        break;
    }
    else if( haslo!="eurocargo")
    {
         cout<<"Odmowa dostepu!"<<endl;
        jeszczeraz2();
    }
    }
}
void sprawdz_haslo3()
{
    while (1)
    {
    if( haslo=="straz")
    {
        cout<<"Przyznano dostep!"<<endl;
        break;
    }
    else if( haslo!="straz")
    {
         cout<<"Odmowa dostepu!"<<endl;
         jeszczeraz3();
    }
    }
}

int main()
{
    cout<<"Weryfikacja hasel!"<<endl;

    cout<<"Witaj uzytkownik 1!"<<endl;
    cout << "Podaj haslo:";
    getline(cin, haslo, '\n' );
    sprawdz_haslo1();

    cout<<"Witaj uzytkownik 2!"<<endl;
    cout << "Podaj haslo:";
    getline(cin, haslo, '\n' );
    sprawdz_haslo2();

     cout<<"Witaj uzytkownik 3!"<<endl;
    cout << "Podaj haslo:";
    getline(cin, haslo, '\n' );
    sprawdz_haslo3();

    cout<<"Koniec sprawdzania hasel!"<<endl;
    return 0;
}
