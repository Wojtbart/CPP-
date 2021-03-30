#include <iostream>

using namespace std;

int main()
{
    int x;
    int *w=&x;
    *w=5;
    cout << "Pokaz wartosc x: " <<*w<< endl;
    cout << "Pokaz adres x: " <<w<< endl;
    cout<<x<<endl;;
    cin>>x; //lub *w
    cout<<*w<<endl;
    *w=10;
    cout<<x<<endl;;

    int *wsk=NULL;
    if(wsk!=NULL)
    {
        *wsk=2;
    }
    return 0;
}
