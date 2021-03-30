#include <iostream>

using namespace std;

void Palindrom (string x)
{
    int dl=x.size()/2;
    int p=dl*2;
    bool prawda=true;
    for (int i=0; i<dl; i++)
    {
        if (x[i]!=x[p]) prawda=false;
        else p--;
    }
    if (prawda==true) cout << "Palindrom";
    else cout << "NIE Palindrom";
}

int main()
{
    string s;
    cout<<"Podaj wyraz"<<endl;
    cin>>s;
    Palindrom(s);


    return 0;
}
