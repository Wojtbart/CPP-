#include <iostream>
#include <cstdlib>   ///zawiera generator liczb losowych
#include <ctime>

using namespace std;

int main()
{
    ///int n;
    cout << "Liczby losowe" << endl;

    srand (time(NULL)); ///inicjuje gen. liczb losowych

    cout<<rand()<<endl;

    cout<<rand()<<endl;

    cout<<"RAND_MAX="<<RAND_MAX<<endl<<endl;  //32767

    ///---------------------------------------------------------------------------------

    cout<<"Calkowita liczba losowa z przedzialu <0, q> np <0, 6>"<<endl;
    ///  rand() % (q+1)
    cout<< rand()%(6+1)<<endl<<endl;

    ///---------------------------------------------------------------------------------

    cout<<"Calkowita liczba losowa z przedzialu <p, q> np <2, 5>"<<endl;
    /// p+rand()%(q-p+1)
    cout<<2+rand()%(5-2+1)<<endl<<endl;

    ///---------------------------------------------------------------------------------

    cout<<"Liczba rzeczywista z przedzialu <0, 1>"<<endl;
    /// (double) rand()/RAND_MAX
    cout<<(double)rand()/(RAND_MAX)<<endl<<endl;

    ///---------------------------------------------------------------------------------

    cout<<"Liczba rzeczywista z przedzialu <p, q> np. <1.5, 4.5>"<<endl;
    /// p + (double) rand()/RAND_MAX*(q-p)
    cout<<1.5+(double) rand()/RAND_MAX *(4.5-1.5)<<endl<<endl;

    ///---------------------------------------------------------------------------------

    cout<<"Liczba rzeczywista z przedzialu <p, q) np. <1.5, 4.5)"<<endl;
    /// p + (double) rand()/(RAND_MAX+1)*(q-p)
    cout<<1.5+(double) rand()/(RAND_MAX+1) *(4.5-1.5)<<endl<<endl;

    ///---------------------------------------------------------------------------------

    cout<<"Liczba rzeczywista z przedzialu (p, q> np. (1.5, 4.5>"<<endl;
    /// p + ((double) rand()+1)/(RAND_MAX)*(q-p)
    cout<<1.5+((double) rand()+1)/(RAND_MAX) *(4.5-1.5)<<endl<<endl;

    return 0;
}
