#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<" Procedura rysuje choinke o podanej wysokosci"<<endl;
    cout<<" Oto choinka o wysokosci a:";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j < a - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
            cout<<endl;
    }
    return 0;
}
