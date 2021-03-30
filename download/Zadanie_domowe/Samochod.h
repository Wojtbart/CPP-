#include <iostream>
#include <string>

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
