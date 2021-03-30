#include <iostream>

using namespace std;

int *tmp; //tablica pomocnicza, potrzebna przy scalaniu

void bitmerge(int tab[],int l, int s, int p)
{
    int i = l, j = s + 1;

  //kopiujemy lew¹ i praw¹ czêœæ tablicy do tablicy pomocniczej
  for(int i = l;i<=p; i++)
    tmp[i] = tab[i];
    //scalenie dwóch podtablic pomocniczych i zapisanie ich
  //we w³asciwej tablicy
  for(int k=l;k<=p;k++)
  if(i<=s)
    if(j <= p)
         if(tmp[j]<tmp[i])
             tab[k] = tmp[j++];
         else
             tab[k] = tmp[i++];
    else
        tab[k] = tmp[i++];
  else
      tab[k] = tmp[j++];
}

void mergesort (int tab[],int l, int r)
{
    int m;
    if (l<r)
     { m = (l+r) / 2 ;
        mergesort (tab,l, m) ; //dzielenie
        mergesort (tab,m+1, r) ;
        bitmerge (tab,l, m, r); //scalanie
     }
}
int main()
{
    int *tab,n; //liczba elementów tablicy
    cout<<"Ile elementow ma miec tablica: ";
	cin>>n;
	tab = new int[n]; //przydzielenie pamiêci na tablicê liczb
    tmp = new int[n]; //przydzielenie pamiêci na tablicê pomocnicz¹

	//wczytanie elementów tablicy
	for(int i=0;i<n;i++)
		cin>>tab[i];

    cout<<"Przed sorotwaniem"<<endl;
    for(int i=0;i<n;i++)
		cout<<tab[i]<<" ";

	//sortowanie wczytanej tablicy
	mergesort(tab,0,n-1);


    cout<<endl<<"Po sortowaniu"<<endl; //wypisanie wyników
	for(int i=0;i<n;i++)
		cout<<tab[i]<<" ";


    return 0;
}
