#include <iostream>
#include <cstdlib> ///Biblioteka, ktora zawiera generator liczb losowych ///
#include <ctime> /// Zawiera funkcje time///
using namespace std;

int main()
{ int w, w1;  /// w-wynik jednego z rzutow
        cout<<"Witaj w programie, ktory generuje dwukrotny rzut kostka!"<<endl;
        srand(time(NULL)); ///Inicjuje generator liczb
        cout<<"Wylosowane liczby to:"<<endl;
 do
{       w= 1 + rand() %(6-1+1);
        w1= 1 + rand() %(6-1+1);

}while (w==w1);
 cout<<w<<","<<w1<<endl;

return 0;
}
