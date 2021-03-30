#include <iostream>

using namespace std;

void Usun2Spacje(string &t)
{
    for (int i=0;i<t.size();i++)
        if (t[i]==' ')
            while (i<t.size()-1 && t[i+1]==' ') t.erase(i+1,1);
    if(t[0]==' ') t.erase(0,1);
    if(t[t.size()-1]==' ') t.erase(t.size()-1,1);
}


string OdTylu (string t)
{
    string w="";
    t=" "+t;
    int x=t.size()-1;
    int z=x-1;

    for (int i=x;i>=0;i--)
    {
        if(t[i]==' ')
            {
                w=w+" "+t.substr(i+1,x-i);
                i--;
                x=i;
            }
    }
    w.erase(0,1);
    return w;
}

int main()
{
     string s;
     cout<<"Podaj zdanie"<<endl;
     getline(cin,s);
     Usun2Spacje(s);
     cout<<s<<endl;
     cout<<OdTylu(s)<<endl;
    return 0;
}
