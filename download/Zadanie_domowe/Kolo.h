#include <iostream>
#include <string>

//klasa Ko�o w schemacie interface + implemetacja metod poza cia�em klasy

class kolo
{

public:
	kolo(std::string id);
	kolo();

	int obroty(int Przejechanych_Km);
private:
	std::string _id;
};

