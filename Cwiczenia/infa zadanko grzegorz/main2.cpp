#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "wprowadz a, b, c";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a>b) ;
        if (a>c) cout << a;
         else cout << c;
        else
            if (c>a) cout << c;
        else
             cout << b;
    return 0;
}
