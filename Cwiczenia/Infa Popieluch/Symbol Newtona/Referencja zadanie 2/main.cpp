#include <iostream>

using namespace std;

int Ciag(int x)
{  if (x==0) return 0;
   else return (6*x)+Ciag(x-1);
}
int main()
{
    int n;
    cout << "Obliczam dla ciebie n-ta liczbe tego ciagu!" << endl;

    cout<<"Podaj wyraz ciagu n=";
    cin>>n;

    cout<<"Wyraz "<<n<<" ma wartosc: "<<Ciag(n)<<endl;



    return 0;
}
