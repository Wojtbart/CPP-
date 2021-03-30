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

string odtylu(string t)
{
    string w="";
    t=Usun2Spacje(t);
    t=t+' ';
    while(t!="")
    {
        int x=t.find(' ');
        w=t.substr(0,x+1)+w;
        t.erase(0,x+1);
    }
w.erase(w.length(),1);
return w;
}


int main()
{
    string s,s1;
 cout<< "podaj zdanie"<<endl;
 getline(cin,s);

s1=odtylu(s);
cout<<s1<<endl;
    return 0;
}
