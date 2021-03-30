#include <iostream>

using namespace std;

int main()
{
   int (a);
   int (b);
   cout << "wprowadz a, b" << endl;
   cin >> a << endl;
   cin >> b;
   if (a>b) cout << "a jest wieksze";
   else
    if (a==b) cout << "rowne";
    else cout << "b jest wieksze";
    return 0;
}
