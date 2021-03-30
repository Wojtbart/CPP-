#include <iostream>
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
    double tab[128][128]={0};//glowna tablica z danymi, liczby wpisuje ponizej w podwojnej petli
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

    ///macierz r0
  //  double r0[128];

//    norma(128,tab);

    int k=0; // zaczynam od iteracjinumer 0
    int n=25;// max ilosc iteracji
    int N=128; //wielkosc tablicy


    double r[128]={0};//pomocnicza
    double p[128]={0};//pomocnicza
    double x[128]={0};//do rozwiazan


    for(int i=0;i<N;i++)
		p[i] = r[i] = e[i];//porownuje wszystkie tablice zeby mia³y sk³adowe rowne 1

    while ( k < n)
   {
        double rtr = 0.0;
        double ptAp = 0.0;

        for(int i=0;i<N;i++)
            rtr += r[i]*r[i];//dodaje sk³adowe r*r

            for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                    ptAp += tab[i][j]*p[i]*p[j];//poszczegolne wartosci z glownej tablicy *wartosci z tablicy p
            }



        double alpha = rtr / ptAp ;//ustawiam alfa
         double rn[128]={0};//pomocnicza
            for(int i=0;i<N;i++)
            {
                x[i] += alpha * p[i];
                rn[i] = r[i];// do rn wk³ada r
                for(int j=0;j<N;j++)
                    rn[i] -= alpha*tab[i][j]*p[j];// wyliczam rn
            }
            double rntrn = 0.0;

            for(int i=0;i<N;i++)
                rntrn += rn[i]*rn[i];
            //if(rntrn < EPS) break;

            double beta = rntrn / rtr;//ustawiam beta
            for(int i=0;i<N;i++)
            {
                p[i] = beta*p[i] + rn[i];//wyliczma p
                r[i] = rn[i];//do r wk³adam rn
            }
           // cout<<k<<endl;
            k++;
    }
        cout<<endl;
        for(int i=0;i<128;i++)
		cout <<"x"<<i+1<<"="<<x[i] <<endl;


    cout<<endl;
     for(int i=1;i<128; i++)
    {
       cout<<i<<")"<<norma(x[i]-x[i-1])<<"\t";
    }
    //W pliku bede zapisywal wartsci normy
    fstream plik;
    plik.open( "plik2.txt", ios::in | ios::out );
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
