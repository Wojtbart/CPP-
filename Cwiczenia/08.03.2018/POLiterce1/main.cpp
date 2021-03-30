#include <iostream>

using namespace std;

void PoLiterce(string a)
{
    for(int i=0 ; i<a.length() ; i++)
        cout<<a[i]<<endl;
}
void PoNLiterek(string a)
{
    for(int i=1 ; i<=a.length() ; i++)
        cout<<a.substr(0,i)<<endl;
}

int main()
{
    string s;
    cout << "Witaj!" << endl;
    cout << "Podaj tekst ktory mam wyswietlic po jednej literze  w jednej linijce!" << endl;
    cin>>s;
    PoLiterce(s);
    cout<<endl;
    PoNLiterek(s);
    return 0;
}
