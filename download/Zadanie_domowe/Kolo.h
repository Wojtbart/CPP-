#include <iostream>
#include <string>

//klasa Ko³o w schemacie interface + implemetacja metod poza cia³em klasy

class kolo
{

public:
	kolo(std::string id);
	kolo();

	int obroty(int Przejechanych_Km);
private:
	std::string _id;
};

