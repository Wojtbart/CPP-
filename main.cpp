#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class Figura
{
    public:
        virtual void pole()=0;
};

class Trojkat : public Figura
{
    float a,h;
    public:
    Trojkat(float d, float e)
    {
        a=d;
        h=e;
    }
    virtual void pole()
    {
        cout<< "Podaj bok trojkata: ";
        cin>>a;
        cout<< "Podaj wysokosc trojkata: ";
        cin>>h;
        cout<<"Pole trojkata wynosi: "<<(a*h)/2<<endl;;
    }
};
class Kwadrat : public Figura
{
    float a;

    public:
    Kwadrat(float x)
    {
        a=x;
    }
    public:
    virtual void pole()
    {
        cout<< "Podaj bok kwadratu: ";
        cin>>a;
        cout<<"Pole kwadratu wynosi: "<<a*a<<endl;
    };

};
class Kolo : public Figura
{
    float r;

    public:
    Kolo(float x)
    {
        r=x;
    }
    virtual void pole()
    {
        cout<< "Podaj promien kola: ";
        cin>>r;
        cout<<"Pole kola wynosi: "<<(3.14)*r*r<<endl;
    }
};
class Generator_Figur
{ protected:
    float x,y;
    public:
        vector<Figura*> vec;
    void dodajTrojkat()
    {
        Trojkat troj(x, y);
        Figura * x= &troj;
        vec.push_back(x);
    }
    void dodajKwadrat()
    {
        Kwadrat kw1(x);
        Figura * x=&kw1;
        vec.push_back(x);
    }
    void dodajKolo()
    {
        Kolo ko1(x);
        Figura* x=&ko1;
        vec.push_back(x);
    }
    Figura*PobierzFigure_o_Indeksie(int i)
    {
        return vec[i];
    }
};

int main()
{
    int a,b;
    char wybor;
    Generator_Figur vec;
    cout << "Witaj !"<<endl;
 while(true)
{

    cout <<endl<< "Jaka figure chcesz utworzyc?" << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Trojkat" << endl;
    cout << "3. Kolo" << endl;
    cout << "Aby zakonczyc wcisnij q" << endl;
    cout << "Wybor: ";
    cin >> wybor;

    switch(wybor)
    {
        case '1':
        {
            vec.dodajKwadrat();
            vec.PobierzFigure_o_Indeksie(1);
            Kwadrat kw1(a);
            kw1.pole();
        }
        break;

        case '2':
        {
            vec.dodajTrojkat();
            vec.PobierzFigure_o_Indeksie(2);
            Trojkat troj(a,b);
            troj.pole();
        }
        break;

        case '3':
        {
            vec.dodajKolo();
            vec.PobierzFigure_o_Indeksie(3);
            Kolo ko1(a);
            ko1.pole();
        }
        break;

        default:
            {
                if(wybor=='q')
                {
                    cout<<"Koncze program!"<<endl;
                    exit(0);
                }
                cout<< "Nie ma takiej liczby mordo!"<<endl;
            }
        break;
    }
}
    return 0;
}
