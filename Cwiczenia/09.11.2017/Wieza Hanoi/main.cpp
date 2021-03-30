#include <iostream>

using namespace std;
int i=0;
void Przekladaj (int x, char st, char doc, char pom)
{ if(x>0)
{
    Przekladaj(x-1, st, pom, doc);
    i++;
    cout<<i<<") Ze slupka"<<st<<" na slupek "<<doc<<endl;
    Przekladaj (x-1, pom, doc, st);
}

}

int main()
{ int n; ///liczba krazkow
  char a,b,c; ///oznaczenia szpicow

    cout << "Siema mordo!" << endl;
    cout << "Wieza Hanoi!" << endl;

    cout << "Ile krazkow cwelu? :" << endl;
    cin>>n;

    cout << "Slupek startowy mordziaty:" << endl;
    cin >>a;
    cout << "Slupek docelowy mistrzu:" << endl;
    cin >>b;
    cout << "Slupek pomocniczy szympansie:" << endl;
    cin >>c;

    Przekladaj(n,a,b,c);
    ///n-liczba krokow
    ///a - szp. startowy
    ///b - szp. docelowy
    ///c - szp. pomocniczy
    return 0;
}
