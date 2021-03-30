#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int zakres_rand(int minimum, int maksimum)
{
    return rand()%( maksimum - minimum + 1 ) + minimum;
}

int main()
{ int x;
    cout << "Program symulujacy rzut moneta!" << endl;
        srand(time(NULL));
        x=zakres_rand(1,2);
        cout<<x<<endl;
        if(x==1) cout<<"Wylosowales orla!"<<endl;
        if(x==2) cout<<"Wylosowales reszke!"<<endl;





    return 0;
}
