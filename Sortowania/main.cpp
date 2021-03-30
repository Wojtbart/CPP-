#include <iostream>
#include <windows.h>

using namespace std;

int wybor, n;

void BubbleSort(int tab[], int n)
{
    do
    {
        for(int i=0; i<n-1; i++)
        {
            if(tab[i]>tab[i+1]) swap(tab[i],tab[i+1]);
        }
        n--;
    }
    while(n>1);
}
void InsertionSort(int tab[], int n)
{
    int pomoc, j;
    for(int i=1; i<n; i++)
    {
        pomoc=tab[i];
        j=i-1;
        while(j>=0 && tab[j]>pomoc)
        {
            tab[j+1]=tab[j];
            j--;

        }
        tab[j+1]=pomoc;
    }
}
void SelectionSort(int tab[], int n) //Szukanie z najmniejszym elementem
{
    int mini_index; //indeks z najmniejsza wartoscia
    for(int i=0; i<n-1; i++)
    {
        mini_index=i; //ustawiamy indeks na poczatku
        for(int j=i+1; j<n; j++) //wyszukiwanie najmniejszeego elementu w tablicy nieposortowanej
        {
            if(tab[j]<tab[mini_index])
            {
                mini_index=j;
            }
        }
        swap(tab[i],tab[mini_index]); //zamiana tego elementu
    }
}

void QuickSort(int tab[], int lewy, int prawy)
{
    int srodek=((tab[prawy]+tab[lewy])/2);
    int i, j, x;
    i=lewy;
    j=prawy;
    do
    {
        while(tab[i]<srodek) i++;
        while(tab[j]>srodek) j--;
        if(i<=j)
        {
            x=tab[i];
            tab[i]=tab[j];
            tab[j]=x;
            i++; j--;
        }
    } while(i<=j);
    if(j>lewy) QuickSort(tab, lewy, j);
    if(i<prawy) QuickSort(tab, i, prawy);
}



int main()
{
    cout << "SORTOWANIE v1.0" << endl;
    cout <<"Ile liczb chcesz posortowac: ";
    cin>>n;
    int Tab[n];
    cout << "Podaj twoje liczby do sortowania!"<<endl;;
    for(int i=0; i<n; i++)
    {
        cout<<"Podaj wartosc "<<i+1<<": ";
        cin>>Tab[i];
    }
    cout<<"OKEJ! Wybieramy teraz metode sortowania!"<<endl;
    Sleep(2000);
    cout<<"--------------------------------"<<endl;
    cout<<"1.Sortowanie babelkowe"<<endl;
    cout<<"2.Sortowanie przez wstawianie"<<endl;
    cout<<"3.Sortowanie przez wybieranie"<<endl;
    cout<<"4.Sortowanie szybkie"<<endl;
    cout<<"5.Sortowanie "<<endl;
    cout<<endl;
    cout<<"Wybierz teraz swoja metode: ";
    cin>>wybor;
    switch(wybor)
    {
    case 1:
        {
        cout<<"SORTOWANIE BABELKOWE"<<endl;
        BubbleSort(Tab, n);
        cout<<"Wypisujemy posortowane liczby:"<<endl;
        for (int i=0; i<n; i++)
        {
        cout<<Tab[i]<<" ";// wypisanie posortowanych liczb
        }
          break;
        }
        case 2:
        {
        cout<<"SORTOWANIE PRZEZ WSTAWIANIE"<<endl;
        InsertionSort(Tab, n);
        cout<<"Wypisujemy posortowane liczby:"<<endl;
        for (int i=0; i<n; i++)
        {
        cout<<Tab[i]<<" ";// wypisanie posortowanych liczb
        }
          break;
        }
        case 3:
            {
            cout<<"SORTOWANIE PRZEZ WYBIERANIE"<<endl;
            SelectionSort(Tab, n);
            cout<<"Wypisujemy posortowane liczby:"<<endl;
            for (int i=0; i<n; i++)
            {
            cout<<Tab[i]<<" ";// wypisanie posortowanych liczb
            }
          break;
        }
        case 4:
            {
            cout<<"SORTOWANIE SZYBKIE"<<endl;
            QuickSort(Tab, 0, n-1);
            cout<<"Wypisujemy posortowane liczby:"<<endl;
            for (int i=0; i<n; i++)
            {
            cout<<Tab[i]<<" ";// wypisanie posortowanych liczb
            }
          break;
        }
        case 5:
        default: cout<<"Nie ma takiego numeru!"<<endl;
            break;
    }
    return 0;
}
