#include <iostream>

using namespace std;

int Ciag(int x)
{  if (x==1) return 1;
   else if (x==2) return 0;
   else if (x==3) return -1;
   else return Ciag(x-1)-Ciag(x-2)+Ciag(x-3);

}
int main()
{
    int n;
    cout << "Obliczam dla ciebie n-ta liczbe tego ciagu!" << endl;

    cout<<"Podaj wyraz ciagu n=";
    cin>>n;

    cout<<"Wyraz "<<n<<" ma wartosc: "<<Ciag(n)<<endl;


for(int i=1; i<=100; i++)
   {
       cout<<Ciag(i)<<", ";
   }
    return 0;
}
