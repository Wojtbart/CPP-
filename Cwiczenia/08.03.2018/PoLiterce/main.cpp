#include <iostream>

using namespace std;



int main()
{   string s;
    cout << "Witaj!" << endl;
    cout << "Podaj tekst ktory mam wyswietlic!" << endl;
    cin>>s;
    cout<<s<<endl;
    cout<<"3-cia litera tekstu to: "<<s[2]<<endl;

    cout<<"Dlugosc tekstu: "<<s.length()<<endl;

    cout<<"Fragment tekstu, 4 litery od 3 znaku: "<<s.substr(2,4)<<endl;

    s.erase(2,3);
    cout<<"PO wykasowaniu 3 liter od znaku nr.2 otrzymamy: "<<s<<endl;

    return 0;
}
