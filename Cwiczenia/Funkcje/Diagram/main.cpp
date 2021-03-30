#include <iostream>

using namespace std;

void Diagram(int x)
{
    if (x>=0)
    {
        for(int i=34; i>0; i--) cout<<" "; cout<<"|";
        for(int i=x; i>0; i--) cout<<"X";
    }
    if (x<0)
    {
        for(int i=34+x; i>0; i--) cout<<" ";
        for(int i=x*(-1); i>0; i--) cout<<"X";
        cout<<"|";
    }
}



int main()
{
    int a;

    cout << "Diagram!" << endl;
    cout << "Ten  diagram pokazuje wartosc liczby dodatniej lub ujemnej!"<<endl;

    cout << "Podaj a:";
    cin >> a;

    cout<<endl;
    Diagram(a);
    cout<<endl;



    return 0;
}
