#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{ double tab[128][128]={0};
    cout << "Wpisuje liczby do tablicy!" << endl;


   /* for(int i=0; i<128; i++)
    {
        for(int j=0; j<128; j++)
        {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    for(int i=0; i<128; i++)
    {
        for(int j=0; j<128; j++)
        {
            if(i==j) tab[i][j]={4};
            else if(j==i+1) tab[i][j]={1};
            else if(j==i+5) tab[i][j]={1};
            else if(i==j+1) tab[i][j]={1};
            else if(i==j+5) tab[i][j]={1};

        }
    }
    for(int i=0; i<128; i++)
    {
        for(int j=0; j<128; j++)
        {
            cout<<tab[i][j]<<"";
        }
        cout<<endl;
    }

    double e[128];
    for(int i=0; i<128; i++)
    {

        e[i]=1;
       // cout<<e[i];
    }
   // cout<<e<<endl;

   int q=0; ///./numer iteracj i
   double wartosci[128]={0};

   float x[128], y[128];
cout<<"Wpisz numer iteracji: ";
   cin>>q;
   while (q > 0)
    {
        for (int i = 0; i < 128; i++)
        {
            y[i] = (e[i] / tab[i][i]);
            for (int j = 0; j < 128; j++)
            {
                if (j == i)
                    continue;
                y[i] = y[i] - ((tab[i][j] / tab[i][i]) * x[j]);
                x[i] = y[i];
            }
            cout<<"x"<<i + 1 << "="<<y[i]<<" ";
           cout<<endl;
        }
        cout << "\n";
        q--;
    }
    return 0;
}
