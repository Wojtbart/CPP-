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
}
