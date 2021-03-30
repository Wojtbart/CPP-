#include <iostream>

using namespace std;

bool Anagram(string t1, string t2)
{   unsigned int  poz;
    if(t1.size()!=t2.size()) return false;
    for(unsigned int i=0; i<t1.size(); i++)
    {
       poz=t2.find(t1[i]);
       if(poz==string::npos) return false;
       else t2.erase(poz,1);

    }
     return true;
}


int main()
{   string wyraz1, wyraz2;
    cout << "Witaj w programie! " << endl;
    cout << "Podaj pierwszy wyraz: ";
    cin>>wyraz1;
    cout<<"Podaj drugi wyraz: ";
    cin>>wyraz2;

    if(Anagram(wyraz1, wyraz2)) cout<<"To jest anagram!"<<endl;
    else cout<<"To nie jest anagram!"<<endl;


    return 0;
}
