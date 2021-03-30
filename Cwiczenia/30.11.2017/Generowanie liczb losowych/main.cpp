#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time///
using namespace std;

int main()
{
    cout << "Witaj w generatorze liczb losowych!" << endl;
    srand(time(NULL)); ///Inicjuje generator liczb
    cout<<rand()<<endl; ///Losuje liczbe calkowita z <0;RAND_MAX>///
    cout<<"RAND_MAX="<<RAND_MAX<<endl;
    ///----------------------------------------------------------------
    cout<<"calkowita liczba losowa z przedzialu <0;q> np <0;6>"<<endl;
    /// rand() % (q+1)
             cout<<rand()%(6+1)<<endl;
    return 0;
}
