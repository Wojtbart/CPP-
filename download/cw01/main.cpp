#include <iostream>
#include <string>
#include "GreadBook.h"
using namespace std;


int main()
{
	GreadBook book;
	string name = "michal";
	int i=0;
	book.DisplayMsg(name, i);

	cout << "i="<< i;
	int a=1;
	cin>>a;

}


