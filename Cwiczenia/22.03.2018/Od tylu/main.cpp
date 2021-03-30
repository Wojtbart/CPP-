#include <iostream>

using namespace std;


string Usun2Spacje(string t)
{
    for(int i=0; i<t.length(); i++)
        if(t[i]==' ')
           while(t[i+1]==' ') t.erase(i,1);

    if(t[0]==' ') t.erase(0,1); /// usuniecie 1 spacji
    if( t[t.length()-1] == ' ') t.erase(t.length()-1,1); /// us. ostatniej spacji

    return t;
}

string OdTylu(string t)
{
    string w="";
    t=Usun2Spacje(t);


}



int main()
{

    string s,s1;
    cout << "Wprowadz zdanie:" << endl;
    getline(cin, s);  /// zamiast cin

    s1=OdTylu(s);

    cout<<s1<<endl;

    return 0;
}
