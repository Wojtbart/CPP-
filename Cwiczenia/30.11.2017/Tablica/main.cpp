#include <iostream>

using namespace std;

int main()
{
    cout << "Tablice!" << endl;

    int T[5];

    T[0]=7;

    cout<<"Podaj wartosc elementu do wpisania w tablicy pod nr 1:";
    cin>>T[1];

    cout<<"T[0]="<<T[0]<<endl;
    cout<<"T[1]="<<T[1]<<endl;

    cout<<"Ponownie wprowadzam dane do wszytkich komorek w tablicy"<<endl;
    for(int i=0; i<=4; i++)
    {
        cout<<"T["<<i<<"]= ";
        cin>>T[i];
    }
    cout<<"Wyswietlanie danych z tablicy"<<endl;
    for(int i=0; i<=4; i++)
    {
        cout<<"T["<<i<<"]="<<T[i]<<endl;

    }
    return 0;
}
