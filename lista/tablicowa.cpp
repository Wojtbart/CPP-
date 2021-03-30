#include <iostream>
#include <stdio.h>

using namespace std;

typedef int elementtype, position;
const int maxlength=10;
const int MIN= -10000000;///wartoœc która na pewno nie wystapi

struct List
{
	elementtype elements[maxlength];
	int last;           //indeks ostatniego elementu listy
};

///END zrobione
position END(List l)
{
    return l.last+1;
}

///First zrobione
position First(List l)
{
    if(l.elements==NULL) return END(l);
   // return l.elements[];, zwracam pozycje
    return 0;
}

///NEXT zrobione
position Next(position p,List l)
{
    if(p<END(l)) return p+1;
    else
    {
        cout<<"Operacja nieokreslona"<<endl;
        return -1;
    }
}


///Previous zrobione
position Previous(position p,List l)
{
    if( (p<First(l)) || (p>END(l)) )
    {
        cout<<"Operacja nieokreslona"<<endl;
        return -1;
    }
    else return p-1;

}

///Locate zrobione
position Locate(elementtype x, List l)
{ //zwraca pozycje x w l, gdy nie ma x w l zwraca end(l)

    for(int i=0; i<END(l); i++)
    {
        if(l.elements[i]==x) return i;

    }
    if(x<0 || x>END(l)) return END(l);
}

///Retrieve zrobione
elementtype Retrieve(position p, List l)///odnajduje element(wartosc) w liscie
{
    if(p>=0 || p<=END(l))
    {
        return l.elements[p];
    }
    else return MIN;
}

bool Insert(int x, position p, List &l)
{
    if(p<0 || p>END(l)) return false;
    if(p==END(l))
    {
        l.elements[p]=x;
        l.last++;
        return true;
    }

    if(p>=0 || p<END(l))
    {
        for(position i=END(l); i>p; i--)
        {
            l.elements[i]=l.elements[i-1];

        }
        l.elements[p]=x;
        l.last++;
        return true;
    }
}


///Delete zrobione
bool Delete(position p, List &l)
{
    while(p<END(l)-1)
    {
        l.elements[p]=l.elements[p+1];
        p++;
        //return true;
    }

    l.last--;
    return false;
}

void print(List l)
{
	position i=First(l);

	while (i!=END(l))
	{
	    //cout<<"Oto nasza lista:";
		printf ("%d  ", Retrieve(i,l));
		i=Next(i,l);
	}
	printf("\n");

}
int main()
{
    List l;
    l.last=-1;

    cout<<"Oto nasze zmiany w liscie!"<<endl;

    Insert(100,First(l),l);
    print (l);

    for (int i=0; i<3;i++)
    Insert(i,First(l),l);
    print (l);

  ///  cout<<Next(2,l)<<endl; zwraca 2+1=3
   /// cout<<Retrieve(1,l)<<endl; zwraca wartoœc w p pozycji w tablicy

    Insert (20,Previous(END(l),l) ,l);
    print(l);

   /// cout<<Locate(20,l)<<endl; na której pozycji jest 20
    Delete( Locate(20,l),l);
    print(l);

    cout<<"Udalo sie!"<<endl;

    return 0;
}
