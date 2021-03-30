#include <iostream>

using namespace std;


void prostewstawianie(int a[], int n)
{
    int j,x;
    int licznik=0;

for (int i=2;i<=n;i++)
{

    x=a[i];
    a[0]=x;
    j=i-1;

    while (x<a[j])
    {
        a[j+1]=a[j];
        j=j-1;  //przesuwamy w prawo, robimy miejsce na
                //nasz element
         licznik++;
        // cout<<licznik<<endl;
    }

    licznik++;
    a[j+1]=x;

}
cout<<"Licznik instrukcji: "<<licznik<<endl;
}

int main()
{
    int tab1[11]={0,10,9,8,7,6,5,4,3,2,1};
    int tab2[11]={0,6,7,8,9,10,1,2,3,4,5};
    int tab3[11]={0,1,2,3,4,5,6,7,8,9,10};


    cout<<"------------------------Sortowanie-----------------------"<<endl;


    cout<<"Elementy przed sortowaniem przypadku pesymistycznego: "<<endl;
    for(int i=1; i<11; i++)
    {
        cout<<tab1[i]<<" ";
    }
    cout<<endl;
    prostewstawianie(tab1,10);
     cout<<"Elementy po sortowaniu przypadku pesymistycznego: "<<endl;
    for(int i=1; i<11; i++)
    {
        cout<<tab1[i]<<" ";
    }





    cout<<endl<<endl;
    cout<<"Elementy przed sortowaniem przypadku średniego:"<<endl;
    for(int i=1; i<11; i++)
    {
        cout<<tab2[i]<<" ";
    }
    cout<<endl;
    prostewstawianie(tab2,10);
     cout<<"Elementy po sortowaniu przypadku średniego: "<<endl;
    for(int i=1; i<11; i++)
    {
        cout<<tab2[i]<<" ";
    }

    cout<<endl<<endl;





    cout<<"Elementy przed sortowaniem przypadku optymistycznego: "<<endl;
    for(int i=1; i<11; i++)
    {
        cout<<tab3[i]<<" ";
    }
    cout<<endl;
    prostewstawianie(tab3,10);
     cout<<"Elementy po sortowaniu przypadku optymistycznego: "<<endl;
    for(int i=1; i<11; i++)
    {
        cout<<tab3[i]<<" ";
    }
    cout<<endl;





    return 0;
}
