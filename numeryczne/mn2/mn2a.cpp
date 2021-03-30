#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <fstream>

using namespace std;

//funkcja obliczajaca norme
double norma(double tab)
{   double suma=0;
    for(int i=0; i<128; i++)
    {
        suma+=tab*tab;
    }
    double norm=sqrt(suma);
    return norm;

}

int main()
{
    double tab[128][128]={0}; //glowna tablica z danymi, liczby wpisuje ponizej w podwojnej petli

    cout << "Wpisuje liczby do tablicy!" << endl;

    for(int i=0; i<128; i++)
    {
        for(int j=0; j<128; j++)
        {
            if(i==j) tab[i][j]={4};
            else if(j==i+1 || j==i+5 || i==j+1 || i==j+5) tab[i][j]={1};
        }
    }

   /*     cout<<"Oto nasza tablica"<<endl;
    for(int i=0; i<128; i++)
    {
        for(int j=0; j<128; j++)
        {
            cout<<tab[i][j]<<"";
        }
        cout<<endl;
    }*/

    //wektor prawej strony, wsztystkiw wartosci to 1
    double e[128];
    for(int i=0; i<128; i++)
    {
        e[i]=1;
    }
    //wektor x z rozwiazaniami, ustawiam wszystkie na 0
    double x[128];
    for(int i=0; i<128; i++)
    {
        x[i]={0};
    }

    int N=25; //max numer iteracji
    int k=0; //zaczynam od iteracji nr 0

    double y[128]={0};//wektor pomocniczy, tu umieszcze rozwiazania

    while (k<=N)
    {
        for (int i = 0; i < 128; i++)
        {
           y[i] = (e[i] / tab[i][i]);//dziele prawa strone przez wartosci lezaca na diagonali glownej tablicy
            for (int j = 0; j < 128; j++)
            {
                if (i == j) continue;//gdy indeks j jest rowny i

                y[i] = y[i] - ((tab[i][j] / tab[i][i]) * x[j]);//wartosc y to wartosc w glownej tablicy/wartosc na diagonali8 wartosc x
                x[i] = y[i];//przypisuje do wektora x wektor y
            }

            cout<<"x"<<i+1<<"="<<setprecision(7)<<y[i]<<endl;
        }
         cout << "\n";
         k++;
    }
    //W pliku bede zapisywal wartsci normy
    fstream plik;
    plik.open( "plik.txt", ios::in | ios::out );
    if( plik.good() == true )
    {
       cout << "Uzyskano dostep do pliku!" << endl;

    } else cout << "Dostep do pliku zostal zabroniony!" <<endl;

    for(int i=1;i<128; i++)
    {
       cout<<i<<")"<<norma(x[i]-x[i-1])<<endl;
       plik<<norma(x[i]-x[i-1])<<endl;
    }

     plik.close();
    return 0;
}
