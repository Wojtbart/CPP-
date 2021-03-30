#include <iostream>
#include <math.h>


using namespace std;

class Tablice
{
    private:
    int Tab[10];

    public:
    void wczytaj()
    {
        cout<<"Podaj twoje liczby do tablicy!"<<endl;;
        for(int i=0; i<10; i++)
        {
            cin>>Tab[i];
        }
    }

  int Suma()
  {
    int suma=0;
      for(int i=0; i<10; i++)
      {
           suma+=Tab[i];
      }
    return suma;
  }

  double Srednia()
  {
    double srednia=0;
    srednia=Suma()/10.0;
    return srednia;
  }

  double Wariancja()
  {
      double wariancja=0;
      for(int i=0; i<10; i++)
      {
          wariancja=(pow(i-Srednia(),2.0))/10;
          return pow(wariancja,2.0);
      }
  }
int LiczNWD(int m, int n) //Algorytm Euklidesa z dzieleniem modulo
{
    if(m==0) return n;
    if(n==0) return m;
    else if(n>0)
    {
        while(n>=m)
        {
            int r=n%m;
            n=m;
            m=r;
            return m;
        }
        while(n<m)
        {
            int r=m%n;
            m=n;
            n=r;
            return n;
        }
    }
}
int NWD_Dla_Wielu()
{
    int wynik1=Tab[0];
    for(int i=1;i<10;i++)
    {
        wynik1=LiczNWD(Tab[i],wynik1);
    }
    return wynik1;
}
int LiczNWW(int a, int b)
{
    int pomoc=0;
    a=a/(LiczNWD(a,b));
    pomoc=a*b;
    return pomoc;
}
double NWW_Dla_Wielu()
{
    double wynik2=Tab[0];
    for(int i=1; i<10; i++)
    {
        wynik2=(LiczNWW(Tab[i],wynik2));
    }
    return wynik2;
}
};

int main()
{
    Tablice Pierwszy;
    Pierwszy.wczytaj();
    cout << "Witaj w programie!" << endl;
    cout<<"Suma wynosi: "<<Pierwszy.Suma()<<endl;
    cout<<"Srednia wynosi: "<<Pierwszy.Srednia()<<endl;
    cout<<"Wariancja wynosi w przyblizeniu: "<<Pierwszy.Wariancja()<<endl;
    cout<<"NWD tych wszystkich liczb wynosi "<<Pierwszy.NWD_Dla_Wielu()<<endl;
    cout<<"NWW tych wszystkich liczb wynosi "<<Pierwszy.NWW_Dla_Wielu()<<endl;

    return 0;
}
