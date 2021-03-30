#include <iostream>
#include <string>
#include "GreadBook.h"
using namespace std;


void GreadBook::DisplayMsg(string s, int i)
{

		cout << "Czesc: " << s <<"."<<endl;
		cout << "J¹kanie: " <<endl;
		while(i<10){
		cout << "J¹k.... "<<i <<endl;
		i++;
		}
		cout << "Metoda DisplayMsg mówi czeœæ"<<endl;

}
