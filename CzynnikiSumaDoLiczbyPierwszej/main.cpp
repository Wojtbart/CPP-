#include <iostream>
#include <cmath>

using namespace std;
bool CzyPierwsza(int n)
{
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0) return false;
        }
        return true;
}
int main()
{
    cout << "Witaj w programie, ktory wypisuje liczby od 1 do 1000 ktorych czynniki sumuja sie do liczby pierwszej!" << endl;
    for(int j=1; j<=1000; j++)
    {
        int x=j, i=2, suma=0, pomoc1=0;
        if(x==1)
        {
            cout<<j<<"\t";
            continue;
        }
        while(i<=x)
        {
            while(x%i==0)
            {
                x/=i;
                pomoc1=pomoc1+i;
            }
            i++;
        }
        suma=pomoc1;

        if(CzyPierwsza(suma)==true) cout<<j<<"\t";

    }
    return 0;
}
