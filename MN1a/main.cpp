#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ///przepisuje bezposrednio do programu moja tablice
    double macierz[7][7]={{4,1,0,0,0,0,0},
                          {1,4,1,0,0,0,0},
                          {0,1,4,1,0,0,0},
                          {0,0,1,4,1,0,0},
                          {0,0,0,1,4,1,0},
                          {0,0,0,0,1,4,1},
                          {0,0,0,0,0,1,4}};

    ///wektor prawej strony
    float prawa_strona[7]={1,2,3,4,5,6,7};

    cout<<"Program do obliczenia ukladow rownan!"<<endl;

    for(int i=0; i<7; i++)
    {
        for(int j=0; j<7; j++)
        {
            cout<<macierz[i][j]<<"\t";
        }
        cout<<endl;
    }



cout<<endl;

    for(int i=0; i<7; i++) ///macierz trojkatna gorna
    {
        for(int j=i+1; j<7; j++)
        {

                double c=macierz[j][i]/macierz[i][i];

                for(int k=i; k<=7; k++)
                {
                   if(i==k)  macierz[j][k]=0;
                   else macierz[j][k]=macierz[j][k] - c*macierz[i][k];
                }

        }
    }


     for(int i=0; i<7; i++)
    {
        for(int j=0; j<7; j++)
        {
            cout<<setprecision(6)<<macierz[i][j]<<"\t";
        }
        cout<<endl;
    }


   ///  backsubstitution


    for(int i=6; i>=0; --i)
    {

        for(int j=i+1; j<7; j++)
        {
            if(i!=j) prawa_strona[i]=prawa_strona[i]-macierz[i][j]*prawa_strona[j];
        }
            prawa_strona[i]=prawa_strona[i]/macierz[i][i];
    }



    cout<<endl<<"Rozwiazaniem jest:"<<endl;
    for(int i=0; i<7; i++)
    {
        cout<<"x"<<i+1<<"="<<setprecision(6)<<prawa_strona[i]<<endl;
    }



    return 0;
}
