// rememb-o-matic
#include <iostream>
#include <cstddef>
#include <new>

using namespace std;

int main()
{
	//dynamiczna tablica-----------------------
	int i, n;
	int * p;
	cout << "podaj dlugosc: ";
	cin >> i;
	p = new (nothrow) int[i]; //Mo�na wy��czy� zg�aszanie wyj�tku, zamiast tego w przypadku braku pami�ci zostanie zwr�cony pusty wska�nik (nullptr). W tym celu po s�owie kluczowym new trzeba poda� symbol std::nothrow, np.
	//wiecej info: https://pl.wikibooks.org/wiki/C%2B%2B/Zarz%C4%85dzanie_pami%C4%99ci%C4%85

	if (p == NULL)
		cout << "Error...";
	else
	{
		for (n = 0; n < i; n++)
		{
			cout << "podaj liczbe: ";
			cin >> p[n];
		}
		cout << "Wpisales: ";
		for (n = 0; n < i; n++)
			cout << p[n] << ", ";
		delete[] p;
	}
	//dynamiczna tablica------------------------

	const char* m[3] = { "123", "456", "789" };

	for (const char* st : m)
	{
		cout << st << std::endl;
	}


	return 0;
}
