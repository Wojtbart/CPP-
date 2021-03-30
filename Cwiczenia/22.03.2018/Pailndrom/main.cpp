#include <iostream>

using namespace std;

  bool Palindrom(string s)
  {

  for(int i=0; i<=(s.length()/2); i++)
  {
  if(s[i]!=s[s.length()-i-1])  return false;
  else return true;
  }
}





int main()
{   string t;
    cout << "Sprawdzam czy tekst jest palindromem!" << endl;
    cout<<"Podaj tekst:";
    cin>>t;

    if(Palindrom(t)) cout<<"To jest palindrom"<<endl;
    else cout<<"To nie jest palindrom"<<endl;

    return 0;
}
