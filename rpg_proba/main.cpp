#include <iostream>
#include <string>

using namespace std;
///--------------------------------------------------------------
class Przedmiot
{
public:

	string nazwaPRZEDMIOT;
	virtual void WypiszSTAT() = 0;
};
///--------------------------------------------------------------
class Postac
{
protected:
	string NazwaPOSTACI;
	int wybor;
	Przedmiot* Obiekt_left_hand;
	Przedmiot* Obiekt_right_hand;
	Przedmiot* Obiekt_legs;
	Przedmiot* Obiekt_tors;
	Przedmiot* Obiekt_head;

public:
	int PoziomZycia;
	int PunktyZycia;

	void DodajPrzedmiot(int wybor, Przedmiot* przedmiocik)
	{
		cout << "Dodawanie przedmiotu" << endl;
		cout << "1.Lewa reka" << endl;
		cout << "2.Prawa reka" << endl;
		cout << "3.Nogi" << endl;
		cout << "4.Tors" << endl;
		cout << "5.Glowa" << endl;
		cout << "-----------------------------------" << endl;
		cout << "Gdzie chcesz dodac nowy przedmiot: " << endl;
		cin >> wybor;

		switch (wybor)
		{
		case 1:
			Obiekt_left_hand = przedmiocik;
			break;
		case 2:
			Obiekt_right_hand = przedmiocik;
			break;
		case 3:
			Obiekt_legs = przedmiocik;
			break;
		case 4:
			Obiekt_tors = przedmiocik;
			break;
		case 5:
			Obiekt_head = przedmiocik;
			break;
		}

	};
	void UstalNazwe(string nazwa)
	{
		NazwaPOSTACI = nazwa;
	};
	virtual void WypiszSTAT() = 0;
	virtual void PokazPrzedmiot() = 0;

};
///--------------------------------------------------------------
class Mag : virtual public Postac
{
public:
	Mag(int PasekZycia = 0, int MaxZycie = 100, int Moc = 0)
	{
		PasekZycia = PoziomZycia;
		MaxZycie = PunktyZycia;
		Moc = MocMagiczna;
	}
protected:
	int MocMagiczna;

public:
	void DodajMocy()
	{
		MocMagiczna += 15;
	};
	void WypiszSTAT() {
		cout << "Moje zdrowie to " << PunktyZycia << endl;
		cout << "Moc magiczna to " << MocMagiczna << endl;
	};
	void PokazPrzedmiot()
	{
		cout << "Przedmiot, lezacy w lewej rece" << endl;
		if (Obiekt_left_hand != NULL) cout << Obiekt_left_hand->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;

		cout << "Przedmiot, lezacy w prawej rece" << endl;
		if (Obiekt_right_hand != NULL) cout << Obiekt_right_hand->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;

		cout << "Przedmiot, lezacy na nogach" << endl;
		if (Obiekt_legs != NULL) cout << Obiekt_legs->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;

		cout << "Przedmiot, lezacy na torsie" << endl;
		if (Obiekt_tors != 0) cout << Obiekt_tors->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;

		cout << "Przedmiot, lezacy na glowie" << endl;
		if (Obiekt_head != 0) cout << Obiekt_head->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;
	}
};
///--------------------------------------------------------------
class Wojownik : virtual public Postac
{
public:
	Wojownik(int PasekZycia = 0, int MaxZycie = 100, int SILA = 0, int WYTRZYMALOSC = 0)
	{
		PasekZycia = PoziomZycia;
		MaxZycie = PunktyZycia;
		WYTRZYMALOSC = Wytrzymalosc;
	}
protected:
	int Sila;
	int Wytrzymalosc;

public:
	void DodajSily()
	{
		Sila += 20;
	};
	void DodajWytrzymalosci()
	{
		Wytrzymalosc += 10;
	};

	void WypiszSTAT() {
		cout << "Moje zdrowie to " << PunktyZycia << endl;
		cout << "Moja sila to " << Sila << endl;
		cout << "Moja wytrzymalosc to " << Wytrzymalosc << endl;
	};
	void PokazPrzedmiot()
	{
		cout << "Przedmiot, lezacy w lewej rece" << endl;
		if (Obiekt_left_hand != 0) cout << Obiekt_left_hand->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;

		cout << "Przedmiot, lezacy w prawej rece" << endl;
		if (Obiekt_right_hand != 0) cout << Obiekt_right_hand->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;

		cout << "Przedmiot, lezacy na nogach" << endl;
		if (Obiekt_legs != 0) cout << Obiekt_legs->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;

		cout << "Przedmiot, lezacy na torsie" << endl;
		if (Obiekt_tors != 0) cout << Obiekt_tors->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;

		cout << "Przedmiot, lezacy na glowie" << endl;
		if (Obiekt_head != 0) cout << Obiekt_head->nazwaPRZEDMIOT << endl;
		else cout << "Przedmiotu nie znaleziono" << endl;
	}
};
///--------------------------------------------------------------
class Tarcza : virtual public Przedmiot
{

public:
	int BonusWYTRZ;

	Tarcza(string Nazwa, int Bonus)
	{
		nazwaPRZEDMIOT = Nazwa;
		BonusWYTRZ = Bonus;
	};
	void WypiszSTAT()
	{
		cout << "Nazwa tarczy to : " << nazwaPRZEDMIOT << endl;
		cout << "Bonus do wytrzymalosci : " << BonusWYTRZ << endl;
	}
};
///--------------------------------------------------------------
class MieczMagiczny : virtual public Przedmiot
{
public:
	int BonusMOC;

	MieczMagiczny(string Nazwa, int Bonus)
	{
		nazwaPRZEDMIOT = Nazwa;
		BonusMOC = Bonus;
	}
	void WypiszSTAT()
	{
		cout << "Nazwa miecza magicznego to : " << nazwaPRZEDMIOT << endl;
		cout << "Bonus do mocy : " << BonusMOC << endl;
	}
};
///--------------------------------------------------------------
class MieczZwykly : virtual public Przedmiot
{

public:
	int BonusSILA;

	MieczZwykly(string Nazwa, int BonusS)
	{
		nazwaPRZEDMIOT = Nazwa;
		BonusSILA = BonusS;
	}
	void WypiszSTAT()
	{
		cout << "Nazwa miecza zwyklego to : " << nazwaPRZEDMIOT << endl;
		cout << "Bonus do sily : " << BonusSILA << endl;
	}
};
///--------------------------------------------------------------
class Laska : public Mag, public Przedmiot
{

public:
	int BonusMOC;

	Laska(string Nazwa, int BonusM)
	{
		nazwaPRZEDMIOT = Nazwa;
		BonusMOC = BonusM;
	}
	void WypiszSTAT()
	{
		cout << "Nazwa laski to : " << nazwaPRZEDMIOT << endl;
		cout << "Bonus do mocy : " << BonusMOC << endl;
	}
};
///--------------------------------------------------------------
class Miecz : virtual public MieczZwykly, virtual public Laska
{
public:
	int BonusSILA;
	int BonusMOC;

	Miecz(string Nazwa, int BonusS, int BonusM) : MieczZwykly(Nazwa, BonusS), Laska(Nazwa, BonusM)
	{
		BonusS = BonusSILA;
		BonusM = BonusMOC;
	}
	void WypiszSTAT()
	{
		cout << "Bonus do sily : " << BonusSILA << endl;
		cout << "Bonus do mocy : " << BonusMOC << endl;
	}

};
///--------------------------------------------------------------
int main()
{
	int x;
	x = 0;
	Mag magik(80, 100, 50);
	magik.UstalNazwe("Górski");
	magik.DodajPrzedmiot(x, new Laska("Beka", 80));
	magik.DodajPrzedmiot(x, new MieczMagiczny("xd", 10));
	magik.WypiszSTAT();
	magik.PokazPrzedmiot();

	Wojownik wojek(60, 100, 40, 10);
	wojek.UstalNazwe("Mnich");
	wojek.DodajPrzedmiot(x, new Tarcza("Git", 15));
	wojek.DodajPrzedmiot(x, new MieczZwykly("Aha", 18));
	wojek.WypiszSTAT();
	wojek.PokazPrzedmiot();

	return 0;
}
