#include <iostream>
#include <string>
#include "GreadBook.h"
using namespace std;
/*
//klasa Ko³o w schemacie interface + implemetacja metod poza cia³em klasy
class kolo
{
public:
	kolo(string id);
	kolo();

	int obroty(int Przejechanych_Km);

private:
	string _id;
};


kolo::kolo() //Implementacja konstruktora bezparametrowego
{
	_id = "NONE";
}

kolo::kolo(string id) //Implementacja konstruktora z parametrem id
{
	_id = id;
}

int kolo::obroty(int Przejechanych_Km) //metoda licz¹ca iloœæ obrotów ko³a na iloœæ przejachanych kilometrów
 {
	return Przejechanych_Km * 25;
}

*/
/* //Klasa samochod w schmacie bez interface, wszytkie metody implementowane w ciele klasy
class samochod
{
public:
	samochod(string marka) //uruchomienie kontrukotra bezparametrowego
	 {
		samochod();
		_marka = marka;

	}

	samochod()  //Implementacja konstruktora bezparametrowego
	 {
		_marka = "brak";
		kolo01 = kolo("1");
		kolo02 = kolo("2");
		kolo03 = kolo("3");
		kolo04 = kolo("4");
	}

	int Jedz(int litryBenzyny)
	{
		int przejechane = litryBenzyny * 100 / 8;

		cout << "kolo 01 obroty:" << kolo01.obroty(przejechane) << endl;
		cout << "kolo 02 obroty:" << kolo02.obroty(przejechane) << endl;
		cout << "kolo 03 obroty:" << kolo03.obroty(przejechane) << endl;
		cout << "kolo 04 obroty:"<< kolo04.obroty(przejechane) << endl;
		return przejechane;
	}

	string GetMarka()
    {
		return _marka;
	}


private:
	kolo kolo01;
	kolo kolo02;
	kolo kolo03;
	kolo kolo04;
	string _marka;
};

*/

int main()
{

	samochod s01;       // = samochod("polonez");
	//samochod s01("polonez");

	int przejechal =s01.Jedz(200);
	cout << "auto marki: " << s01.GetMarka() << " przejechalo " << przejechal << " km" << endl;

	int a=1;
	cin>>a;

}

