#include <iostream>

using namespace std;

typedef int elementtype, position;

const int maxlength=10;

struct List
{
	elementtype elements[maxlength];
	int last;           ///indeks ostatniego elementu listy
};

position END(List l)
{
    return l.last+1;
}

position First(List l)
{
    for(int i=0; i<maxlength; i++)
    {
        if(l.elements[i]==NULL)
        {
                continue;
        }
        return END(l);
        else  return l.elements[0];

    }
}

position Next(position p,List l)
{
    if(p==l.last)
        return END(l);
    if(p<END(l))
        return p+1;
    else cout<<"Operacja nieobs³ugiwana!"<<endl;
}


position Previous(position p,List l)
{

}



position Locate(elementtype x, List l)
{ //zwraca pozycje x w l, gdy nie ma x w l zwraca end(l)

}

elementtype Retrieve(position p, List l)
{
}

bool Insert(int x, position p, List &l)
{
     }

bool Delete(position p, List &l)
{

}
int main()
{
    List l;
        l.last = -1;
        Insert(100, First(l), l);
        print(l);

        for (int i = 0; i<3; i++)
                Insert(i, First(l), l);
        print(l);

        Insert(20, Previous(END(l), l), l);
        print(l);
        Delete(Locate(20, l), l);
        print(l);

        getchar();
}
