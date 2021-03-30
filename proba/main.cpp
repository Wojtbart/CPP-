/*#include <iostream>
using namespace std;
void graj ()
{}
void wczytaj ()
{}
void multiplayer ()
{}
int main ()
{
 int wybor;
 cout << "1. Graj\n";
 cout << "2. Wczytaj stan gry\n";
 cout << "3. Tryb multiplayer\n";
 cout << "4. Koniec\n";
 cout << "Wybierz: ";
 cin >> wybor;
 switch ( wybor )
 {
 case 1: // Zwróæ uwagê na dwukropek po instrukcjach case — nie ma tu œrednika!
 graj();
 break;
 case 2:
 wczytaj();
 break;
 case 3:
 multiplayer();
 break;
 case 4:
 cout << "Dziêkujê za grê!\n";
 break;
 default: // Zwróæ uwagê na dwukropek po default — nie ma tu œrednika!
 cout << "Niepoprawny wybór. Wyjœcie z programu.\n";
 break;
 }
}*/
/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
        string od1do20[20] =
        { "", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec", "dziesiec", "jedenascie", "dwanascie",
        "trzynascie", "czternascie", "pietnascie", "szesnascie", "siedemnascie", "osiemnascie", "dziewietnascie" };
        string dziesiatki[10] = { " ", "dziesiec", "dwadziescia", "trzydziesci", "czterdziesci", "piecdziesiat", "szescdziesiat", "siedemdziesiat", "osiemdziesiat", "dziewiecdziesiat" };
        string setki[10] = { " ", "sto", "dwiescie", "trzysta", "czterysta", "piecset", "szescset", "siedemset", "osiemset", "dziewiecset" };

        int liczba, iJednosci, iDziesiatki, iSetki;
        string slownie;

        cout << "Podaj liczbe a ja napisze ci ja slownie: ";
        cin >> liczba;

        if (liczba == 0)
        {
                cout << "Nasza liczba slownie to: " << " zero " << endl;
                return 0;
        }

        iJednosci = liczba % 10;
        liczba -= iJednosci;
        iDziesiatki = liczba % 100;
        liczba -= iDziesiatki;
        iDziesiatki /= 10;
        iSetki = liczba % 1000;
        iSetki /= 100;

        slownie = od1do20[iJednosci];
        if (iDziesiatki == 1)
        {
                slownie = od1do20[iJednosci + 10];
        }
        else if (iDziesiatki >= 2) {
                slownie.insert(0, " ");
                slownie.insert(0, dziesiatki[iDziesiatki]);
        }
        if (iSetki != 0)
        {
                slownie.insert(0, " ");
                slownie.insert(0, setki[iSetki]);
        }

        cout << "Nasza liczba slownie to: " << slownie << endl;

        return 0;
}*/
#include <iostream>
#include <cstdio>
int main()
{
    std::cout << "sizeof(bool) = " << sizeof( bool ) << std::endl;
    std::cout << "sizeof(char) = " << sizeof( char ) << std::endl;
    std::cout << "sizeof(unsigned char) = " << sizeof( unsigned char ) << std::endl;
    std::cout << "sizeof(wchar_t) = " << sizeof( wchar_t ) << std::endl;
    std::cout << "sizeof(short) = " << sizeof( short ) << std::endl;
    std::cout << "sizeof(unsigned short) = " << sizeof( unsigned short ) << std::endl;
    std::cout << "sizeof(int) = " << sizeof( int ) << std::endl;
    std::cout << "sizeof(unsigned int) = " << sizeof( unsigned int ) << std::endl;
    std::cout << "sizeof(long) = " << sizeof( long ) << std::endl;
    std::cout << "sizeof(unsigned long) = " << sizeof( unsigned long ) << std::endl;
    std::cout << "sizeof(long long) = " << sizeof( long long ) << std::endl;
    std::cout << "sizeof(float) = " << sizeof( float ) << std::endl;
    std::cout << "sizeof(double) = " << sizeof( double ) << std::endl;
    std::cout << "sizeof(long double) = " << sizeof( long double ) << std::endl;
    return 0;
}
