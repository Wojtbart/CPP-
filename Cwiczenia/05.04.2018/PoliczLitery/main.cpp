#include <iostream>

using namespace std;

 void PoliczLitery(string t)
 { int statystyka[256]={};
    for(int i=0; i<t.length(); i++)
        statystyka[t[i]]++;
    for(int i=0; i<256; i++)
        if(statystyka[i]>0)
        cout<<char(i)<<"  "<<statystyka[i]<<endl;
 }

void PoliczLitery2(string t)
{
    for(int i=t.length()-1; i>0; i--)
        for(int j=0; j<i; j++)
            if(t[j]>t[j+1]) swap (t[j], t[j+1]);

        int i=0;
        int licznik=1;

        t=t+char(255); ///wydluzenie tekstu aby mozna bylo sprawdziæ ostatnie litery///

        while(i<t.length()-1)
        {
            if( t[i]==t[i+1])  licznik ++;
            else
            {
               cout<<t[i]<<" wystepuje "<<licznik<<" razy"<<endl;
               licznik=1;
            }
            i++;

        }


}
int main()
{

    string s;
    cout << "Wprowadz zdanie:" << endl;
    getline(cin, s);  /// zamiast cin
    cout<<"Oto liczba liter w tekscie:"<<endl;
  ///  PoliczLitery(s);///
    PoliczLitery2(s);

    return 0;
}



