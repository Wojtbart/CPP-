#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

float srednia(float *TAB, int n )
{
    float suma=0;
    for(int i=0; i<n; i++)
    {
        suma+=*TAB;
        *TAB=999;
        TAB++;
    }
    return suma/n;
}

int main()
{
    float tab[3];
    tab[0]=4.0;
    tab[1]=2.6;
    tab[2]=3.5;
    cout<<"Suma wynosi: "<<srednia(tab,3)<<endl;
    cout<<tab[0]<<endl;
    cout<<tab[1]<<endl;
    cout<<tab[2]<<endl;

    int n;
    clock_t start, stop;
    double czas;
    cout << "Ile liczb w tablicy: ";
    cin>>n;
    int *tablica;
   /* tablica= new int [n];
    for(int i=0; i<n; i++)
    {
        cout<<(int)tablica<<endl;
        tablica++;
    }

    delete[] tablica;
    tablica=NULL;*/


    //-------------------------------------------------------------//

    tablica= new int [n];
    start=clock();
    for(int i=0; i<n; i++)
    {
        tablica[i]=i;
        tablica[i]=tablica[i]+50;
    }

    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Nasz czas bez wskaznika to: "<<czas<<" s"<<endl;
    delete[] tablica;


    int *wskaznik=tablica;
    tablica=new int [n];
    start=clock();
    for(int i=0; i<n; i++)
    {
        *wskaznik=i;
        *wskaznik+=50;
        wskaznik++;
    }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Nasz czas ze wskaznikiem to: "<<czas<<" s"<<endl;
    delete[] tablica;




















    return 0;
}
