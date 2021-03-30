/*#include <iostream>
#include <string>
#include "Samochod.h"
using namespace std;

samochod::samochod(string marka) //uruchomienie kontrukotra bezparametrowego
{
		samochod();
		_marka = marka;

}
samochod::samochod()  //Implementacja konstruktora bezparametrowego
{
		_marka = "brak";
		kolo01 = kolo("1");
		kolo02 = kolo("2");
		kolo03 = kolo("3");
		kolo04 = kolo("4");
}
int samochod::Jedz(int litryBenzyny)
{
		int przejechane = litryBenzyny * 100 / 8;

		cout << "kolo 01 obroty:" << kolo01.obroty(przejechane) << endl;
		cout << "kolo 02 obroty:" << kolo02.obroty(przejechane) << endl;
		cout << "kolo 03 obroty:" << kolo03.obroty(przejechane) << endl;
		cout << "kolo 04 obroty:"<< kolo04.obroty(przejechane) << endl;
		return przejechane;
}
string samochod::GetMarka()
{
        cout<<"Podaj nazwe samochodu: ";
        cin>>_marka;
		return _marka;
}
*/
