#include <iostream>

using namespace std;

int main()
{
    bool z;

    string oper;
    int  x, y;
    cout<<"Podaj swoj operator: ";
    getline(cin, oper, '\n');
    cout<<"Podaj twoja liczbe: ";
    cin>>x;
    cout<<"Podaj twoja liczbe: ";
    cin>>y;


    if(oper=="+")
    {
        cout<<"Wynik wynosi: "<<x+y<<endl;
    }
    else if(oper=="-")
    {
        cout<<"Wynik wynosi: "<<x-y<<endl;
    }
    else if(oper=="*")
    {
        cout<<"Wynik wynosi: "<<x*y<<endl;
    }
    else if(oper=="/")
    {
        if(y==0) cout<<"Pamietaj nie dziel przez zero"<<endl;
        else cout<<"Wynik wynosi: "<<x/y<<endl;
    }
        z=(x!=y);
    cout<<z<<endl;

    return 0;
}
