#include <iostream>
using namespace std;
void zmienArgument (int x)
{
 x = x + 5;
}
int main()
{
 int y = 4;
 zmienArgument( y ); // y nie zostanie zmienione przez wywo�anie funkcji
 cout << y; // i nadal ma warto�� 4
}
