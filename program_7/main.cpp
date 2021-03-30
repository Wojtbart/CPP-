#include <iostream>
using namespace std;
void zmienArgument (int x)
{
 x = x + 5;
}
int main()
{
 int y = 4;
 zmienArgument( y ); // y nie zostanie zmienione przez wywo³anie funkcji
 cout << y; // i nadal ma wartoœæ 4
}
