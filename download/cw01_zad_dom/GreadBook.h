#include <iostream>
#include <string>

class GreadBook
{
public:
	void DisplayMsg(std::string s, int i);
};


class kolo
{
private:
	std::string _id;
public:
	kolo(std::string id);
	kolo();

	int obroty(int Przejechanych_Km);
};


class samochod
{
public:
    samochod(std::string marka);
    samochod();
    int Jedz(int litryBenzyny);
    std::string GetMarka();

private:
    kolo kolo01;
	kolo kolo02;
	kolo kolo03;
	kolo kolo04;
	std::string _marka;

};
