#include <iostream>

using namespace std;

string Usun2Spacje(string  t)
{
    for(int i=0;i<t.length();i++)
        if (t[i]==' ')
            while(t[i+1]=' ') t.erase(i,1);
    if(t[0]=' ') t.erase(0,1); ///usuniecie pierwszej spacji
    if(t[t.length()-1]==' ') t.erase(t.length()-1,1); ///usuniecie ostatniej spacji
            return t;
}

int main()
{
    string s,s1;
 cout<< "podaj zdanie"<<endl;
 getline(cin, s);

 s1=Usun2Spacje(s);
    cout <<s1<<" ";
    return 0;
}

