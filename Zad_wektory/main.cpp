#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Witaj!" << endl;
    cout<<"Podaj wielkosc wektora: ";
    int n;
    vector<int> Vec;
    cin>>n;

    if(n>0) //gdy wpisano dodatnia ilosc elementow
    {
        cout<<"Wpisz kolejne "<<n<<" liczb:"<<endl;

        for(int i=0; i<n; ++i )
        {
            int element;
            cout<<i+1<<".";
            cin >> element;

            if ( find(Vec.begin(), Vec.end(), element) != Vec.end() )
            cout<<"Taki element juz istnieje i nie zostanie dodany!"<<endl;

            else Vec.push_back(element);
        }
    }
    else
    {
        cout<<"Podales zla liczbe elementow!"<<endl;
        exit(1); //wyjscie z programu
    }

    cout<<endl<<"Zaczynamy sorotwanie!"<<endl;

    cout << "Przed sortowaniem: ";

    for( int i = 0; i < Vec.size(); ++i )
    {
        cout << Vec[i] << " ";
    }
    cout << endl;

   sort( Vec.begin(), Vec.end() );

    cout << "Po sortowaniu(rosnaco): ";
    for( int i = 0; i < Vec.size(); ++i )
    {
        cout << Vec[i] << " ";
    }
    cout <<endl<<"Koniec!"<<endl;


    return 0;
}
