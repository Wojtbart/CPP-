#include <iostream>

using namespace std;

class Punkt
{
   public:
   Punkt():x(0), y(0){}
   Punkt(double _x, double _y): x(_x), y(_y){}
   double x,y;
};

Punkt operator+(const Punkt& a, const Punkt& b)
{
    return Punkt(a.x+b.x,a.y+b.y);
}

Punkt operator-(const Punkt& a, const Punkt& b)
{
    return Punkt(a.x-b.x,a.y-b.y);
}

bool operator ==(string x, string y)
{
    for(int i=0; (i<x.length() && i<y.length()); i++)
    {
        if(x[i]==y[i])  return true;
        else  return false;
    }
}

bool operator !=(string x, string y)
{
    for(int i=0; (i<x.length() && i<y.length()); i++)
    {
        if(x[i]!=y[i])  return true;
        else  return false;
    }
}

bool operator <(string x, string y)
{
    for(int i=0; (i<x.length() || i<y.length()); i++)
    {
        if(x[i]<y[i])  return true;
        else  return false;
    }
    if(x.length()>=y.length()) return false;
    else return true;
}

bool operator >(string x, string y)
{
    for(int i=0; (i<x.length() || i<y.length()); i++)
    {
        if(x[i]>y[i])  return true;
        else  return false;
    }
    if(x.length()<=y.length()) return false;
    else return true;
}

bool operator <=(string x, string y)
{
    for(int i=0; (i<x.length() || i<y.length()); i++)
    {
        if(x[i]<y[i])  return true;
        else  return false;
    }
    if(x.length()>y.length()) return false;
    else return true;
}

bool operator >=(string x, string y)
{
    for(int i=0; (i<x.length() || i<y.length()); i++)
    {
        if(x[i]>y[i])  return true;
        else  return false;
    }
    if(x.length()<y.length()) return false;
    else return true;
}


int main()
{

    Punkt p1(3,1);
    Punkt p2(4,6);


    Punkt p3;
    p3=p1+p2;
    p3=p1-p2;

    string wyraz1;
    string wyraz2;

    cout<<"Podaj pierwszy wyraz: ";
    cin>>wyraz1;

    cout<<"Podaj drugi wyraz: ";
    cin>>wyraz2;

    if(wyraz1==wyraz2)
    {
        cout<<wyraz1<<" jest rowny "<<wyraz2<<endl;
    }
    if(wyraz1!=wyraz2)
    {
        cout<<wyraz1<<" jest rozny od "<<wyraz2<<endl;
    }
    if(wyraz1<wyraz2)
    {
        cout<<wyraz1<<" jest mniejszy od "<<wyraz2<<endl;
    }
    if(wyraz1<=wyraz2)
    {
        cout<<wyraz1<<" jest mniejszy, badz rowny "<<wyraz2<<endl;
    }
    if(wyraz1>wyraz2)
    {
        cout<<wyraz1<<" jest wiekszy od "<<wyraz2<<endl;
    }
    if(wyraz1>=wyraz2)
    {
        cout<<wyraz1<<" jest wiekszy, badz rowny "<<wyraz2<<endl;
    }
    /*Podpowiedx Sygnatura przeladowania: TypZwracany & operator OPR
    (TypZwracany  &Wejscie, const TypArgumentu &Wejscie)*/
    return 0;
}
