#include <iostream>

using namespace std;
bool CzyPodzielna(int liczba, int dzielnik)
{
    return (liczba%dzielnik==0);
}

bool CzyPierwsza(int liczba)
{
    for(int i=2; i*i<liczba; i++)
    {
       if(CzyPodzielna(liczba, i))
        return false;
    }
    return true;
}
int main()
{
    cout << "Program wypisujacy liczby pierwsze od 1 do 100!" << endl;

    for(int i=2; i<100; i++)
    {
        if(CzyPierwsza(i))
            cout<<i<<endl;
    }
    return 0;
}
