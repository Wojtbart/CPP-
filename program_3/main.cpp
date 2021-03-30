#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout<<"Podaj wiek pierwszej osoby: ";
    cin>>x;
    cout<<"Podaj wiek drugiej osoby: ";
    cin>>y;
    if(x>y) cout<<"Pierwsza osoba jest starsza od drugiej!"<<endl;
    else if(x==y) cout<<"Osoby sa w takim samym wieku!"<<endl;
    else if(x>100 && y>100) cout<<"Obie osoby maj¹ wiêcej ni¿ 100 lat!"<<endl;
    else  cout<<"Druga osoba jest starzsa od pierwszej!"<<endl;
    return 0;
}
