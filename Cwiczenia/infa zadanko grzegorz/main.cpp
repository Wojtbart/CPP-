#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "wprowadz liczby a, b:" <<endl;
    cin >> (a, b);
    if (a>b) cout << "a jest wieksze";
    else cout << "b jest wieksze";
    return 0;
}
