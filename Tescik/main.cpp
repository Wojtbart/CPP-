#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Podaj ilosc wyrazow ciagu ";
    cin>>n;
    for (int i=0; i<n; i=i+2)
    {
        for (int j=i+1; j<2; j++)
        {
            cout<<"*";
        }
        cout<<"&&";
        for (int j=i+1; j<2; j++)
        {
            cout<<"*";
        }
        cout<<"^^";
    }
    return 0;
}
