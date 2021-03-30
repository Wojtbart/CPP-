#include <iostream>

using namespace std;

int main()
{

    string a = "On the";
    string b = "of christmas";
    string c = "my true love gave to me";
    string d = "A Partridge in a Pear Tree";
    string e = "Turtle";
    string f = "Doves";
    string g = "French";
    string h = "Birds";
    string i = "Calling";
    string j = "Hens";

    int wybor;
    cout << "Wypiszmy tekst piosenki"<<endl;
    cout << "Napisz od ktorej zwrotki chcesz wypisac piosenke: ";
    cin >> wybor;
    switch(wybor)
    {
        case 1: cout<<a<<" first day "<<b<<" "<<c<<" "<<d<<endl; //Mniej wiêcej taki zamys³
        case 2: cout<<a<<" second day "<<b<<" "<<c<<" "<<d<<endl;
        case 3: cout<<a<<" third day "<<b<<" "<<c<<" "<<d<<endl;
        case 4: cout<<a<<" foourth day "<<b<<" "<<c<<" "<<d<<endl;
        case 5: cout<<a<<" fifth day "<<b<<" "<<c<<" "<<d<<endl;
        case 6: cout<<a<<" sixth day "<<b<<" "<<c<<" "<<d<<endl;
        case 7: cout<<a<<" seventh day "<<b<<" "<<c<<" "<<d<<endl;
        case 8: cout<<a<<" eighth day "<<b<<" "<<c<<" "<<d<<endl;
        case 9: cout<<a<<" ninth day "<<b<<" "<<c<<" "<<d<<endl;
        case 10: cout<<a<<" tenth day "<<b<<" "<<c<<" "<<d<<endl;
        case 11: cout<<a<<" eleventh day "<<b<<" "<<c<<" "<<d<<endl;
        case 12: cout<<a<<" twelfth day "<<b<<" "<<c<<" "<<d<<endl;

    }
    return 0;
}
