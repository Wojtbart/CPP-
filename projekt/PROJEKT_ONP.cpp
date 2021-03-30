#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cmath>

using namespace std;

const int ROZMIAR = 100;  // definiuje rozmiar stosu

typedef int elementtype;
typedef int position;

class Stos
{
protected:
    int S[ROZMIAR];
    position Top;//szczyt stosu
public:
    Stos();
    void Push(elementtype x);
    void Pop();
    bool Empty();
    elementtype TopElem();
    void Makenull();
};

Stos::Stos()
{
    Top = -1;
}

void Stos::Makenull()
{
    Top = -1;
}

void Stos::Push(elementtype x)
{
    if (Top < ROZMIAR - 1)
    {
        Top++;
        S[Top] = x;
    }
}// PUSH

void Stos::Pop()
{
    if (Top >= 0) Top--;
}//POP

bool Stos::Empty()
{
    return (Top == -1);
}//Empty

elementtype Stos::TopElem()
{
    if (Top >= 0) return S[Top];
}


 void ONP(string wyrazenie)
 {
     Stos stosik=Stos();

     int i=0;
     double arg1, arg2;         // argumenty operacji
     string finalny = "";
     double  wynik;
	 arg1 = wynik = arg2 = 0.0;

     while (i < wyrazenie.length())
     {
            while (isspace(wyrazenie[i])) ///sprawdza czy znak jest spacja
            {
                i++;
            }

            if (isdigit(wyrazenie[i])) ///sprawdza czy znak jest cyfra
            {
                while (isdigit(wyrazenie[i]))
                {
                    finalny += wyrazenie[i];
                    i++;
                }
                ///konwertuje stringa na double
               stosik.Push(atof(finalny.c_str()));///c_str konwertujw ciag znakow na taki ktory moze byc zapisany w tablicyoi
               finalny = "";
            }
            ///podajemy operator
           else {
           if (wyrazenie[i] == '~'){
                arg1 = stosik.TopElem();
                stosik.Pop();
                arg2=stosik.TopElem();
                stosik.Pop();
                wynik=(-arg1);
            }

            if (wyrazenie[i] == '+'){
                arg1 = stosik.TopElem();
                stosik.Pop();
                arg2 = stosik.TopElem();
                stosik.Pop();
                wynik = (arg1 + arg2);
            }
            if (wyrazenie[i] == '-'){
                arg1 = stosik.TopElem();
                stosik.Pop();
                arg2 = stosik.TopElem();
                stosik.Pop();
                wynik = (arg2 - arg1);
            }
            if (wyrazenie[i] == '*'){
                arg1 = stosik.TopElem();
                stosik.Pop();
                arg2 = stosik.TopElem();
                stosik.Pop();
                wynik = (arg1 * arg2);
            }
            if (wyrazenie[i] == '/'){
                arg1 = stosik.TopElem();
                stosik.Pop();
                arg2 = stosik.TopElem();
                stosik.Pop();
                wynik = (arg2 / arg1);
            }
            if (wyrazenie[i] == '^'){
                arg1 = stosik.TopElem();
                stosik.Pop();
                arg2 = stosik.TopElem();
                stosik.Pop();
                wynik = (pow(arg2,arg1));
            }

            i++;
            ///wloz wynik na stos
            stosik.Push(wynik);
            }
        }
        cout <<"Wynik naszego wyrazenia: "<<stosik.TopElem() << endl<<endl; // wypisujemy wynik ze szczytu stosu
}
int priorOperator(char c)
{
    if (c == '-' || c == '+')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^' || c=='~')
        return 3;
    return 0;
}
void konwertujDoONP(string wyrazenie)
 {
     Stos stosik=Stos();
     wyrazenie='('+wyrazenie+')';
     string wyjscie;


    for (int i=0; i<wyrazenie.length(); i++)
    {
        ///sprawdzamy czy jest znakiem
        if(isdigit(wyrazenie[i])) wyjscie+=wyrazenie[i];
        else if(wyrazenie[i]=='(') stosik.Push(wyrazenie[i]);
        else if(wyrazenie[i] ==')')
        {
            while(!stosik.Empty() && stosik.TopElem()!='(')
            {
                wyjscie+=stosik.TopElem();
                stosik.Pop();
            }
            stosik.Pop();
        }
        else
        {
            if(  !isdigit(stosik.TopElem()) )
            {
                while(priorOperator(wyrazenie[i])<=priorOperator(stosik.TopElem()))
                {
                    wyjscie+=stosik.TopElem();
                    stosik.Pop();
                }
                stosik.Push(wyrazenie[i]);
            }
        }
    }
    cout<<"Wyjscie: "<<wyjscie<<endl<<endl;
}
int main()
{

  cout<<"Projekt ONP!!!!!!!"<<endl;
  cout<<"--------------------------------"<<endl;
  cout<<"1.Obliczanie wartosci wyrazenia w ONP"<<endl;
  cout<<"2.Konwersja wyrazenia notacji tradycyjnej do ONP"<<endl;
  cout<<"Aby wyjsc z programu wpisz q!!!"<<endl;

  char wybor;
  while (true)
  {
      cout<<"Wybierz czynnosc: ";
      cin>>wybor;

      if(wybor=='q') break;

      string wyrazenie=" ";
      string finalny="";

      switch (wybor)
      {
      case '1':
          cout<<"Wpisz tutaj swoje wyrazenie: "<<endl;

          while(wyrazenie[wyrazenie.length()-1]!='=')
          {
              cin>>wyrazenie;
              finalny+=wyrazenie+ " ";
          }
          ONP(finalny);

          break;
      case '2':
          cout<<"Wpisz tutaj swoje wyrazenie: "<<endl;

          while(wyrazenie[wyrazenie.length()-1]!='=')
          {
              cin>>wyrazenie;
              finalny+=wyrazenie;
          }
          finalny=finalny.erase(finalny.length()-1,1);///usuwam =
          konwertujDoONP(finalny);
          break;
      default:
        cout<<"Podano niewlasciwa opcje"<<endl;
        break;
      }
  }
  cout<<"Nastapilo wyjscie z  programu!!"<<endl;
  return 0;
}
