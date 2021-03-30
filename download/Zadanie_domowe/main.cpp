#include <iostream>
#include <string>
#include "GreadBook.h"
#include "Kolo.h"
#include "Samochod.h"
using namespace std;


int main()
{

	samochod s01;       // = samochod("polonez");
	//samochod s01("polonez");
	samochod s02;       // = samochod("syrenka");
	//samochod s01("syrenka");

	int przejechal_1 =s01.Jedz(200);
	cout << "auto marki: " << s01.GetMarka() << " przejechalo " << przejechal_1 << " km" << endl;
	cout<<endl;
	int przejechal_2 =s02.Jedz(100);
	cout << "auto marki: " << s02.GetMarka() << " przejechalo " << przejechal_2 << " km" << endl;


	return 0;

}

