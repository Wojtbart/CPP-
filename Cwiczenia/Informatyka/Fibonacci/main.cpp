#include <iostream>

using namespace std;

unsigned long long Fib(int n)
{
    if(n <= 1) return n;
    else return Fib(n - 2) + Fib(n - 1);
}

int main()
{
    int n;
    cout<<"Witaj w programie, ktory zwraca n-ta liczbe ciagu Fibonacciego!"<<endl;
    cout<<"Podaj numer liczby ktora liczbe mam zwrocic: ";
    cin>>n;


    cout <<"Wynik tej liczby to :" << Fib(n) <<endl;

    return 0;
}

