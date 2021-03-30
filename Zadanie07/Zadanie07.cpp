#include <iostream>
#include <string>

using namespace std;

class Przedmiot {
public:
	string NazwaPrz;
	virtual void WypiszStat() = 0;
};

class Tarcza : virtual public Przedmiot {
	Tarcza(string nazwa, int bonus) {
		NazwaPrz = nazwa;
		BonusDoWytrczym = bonus;
	};
public:
	int BonusDoWytrczym;

};

class LaskaZwykla : virtual public Przedmiot {
public:
	LaskaZwykla(string nazwa = "", int bonus = 0) : BonusDoMocyMag(bonus) {
		NazwaPrz = nazwa;
	}
	int BonusDoMocyMag;
	void WypiszStat() {
		cout << "Nazwa " << NazwaPrz << endl;
		cout << "Bonus do mocy magicznej " << BonusDoMocyMag << endl;
	};
};

class MieczZwykly : virtual public Przedmiot {
public:
	MieczZwykly(string nazwa, int bonus) : BonusDoSil(bonus) {
		NazwaPrz = nazwa;
	}
	int BonusDoSil;
	void WypiszStat() {
		cout << "Nazwa " << NazwaPrz << endl;
		cout << "Bonus do sily " << BonusDoSil << endl;
	};
};

class Laska : virtual public LaskaZwykla {
public:
	Laska(string nazwa = "", int bonusMoc = 0) : LaskaZwykla(nazwa, bonusMoc) {
	}
};

class Miecz : virtual public LaskaZwykla, virtual public MieczZwykly {
public:
	Miecz(string nazwa = "", int bonusMoc = 0, int bonusSil = 0) : LaskaZwykla(nazwa, bonusMoc), MieczZwykly(nazwa, bonusSil) {
	}
	void WypiszStat() {
		cout << "Nazwa " << NazwaPrz << endl;
		cout << "Bonus do mocy magicznej " << BonusDoMocyMag << endl;
		cout << "Bonus do sily " << BonusDoSil << endl;
	};
};

class Postac {
protected:
	string NazwaPo;
	Przedmiot* ObjWLewRece;
	Przedmiot* ObjWPrawRece;
	Przedmiot* NaNogach;
	Przedmiot* NaTorsie;
	Przedmiot* NaGlowie;
public:
	int PoziomZycia;
	int PunktyZycia;

	void DodajPrzedmiot(int gdzie, Przedmiot* przedmiot) {

		switch (gdzie)
		{
		case 0:
			ObjWLewRece = przedmiot;
			break;
		case 1:
			ObjWPrawRece = przedmiot;
			break;
		case 2:
			NaNogach = przedmiot;
			break;
		case 3:
			NaTorsie = przedmiot;
			break;
		case 4:
			NaGlowie = przedmiot;
			break;
		}
	};

	void UstalNazwe(string nazwa) {
		NazwaPo = nazwa;
	};

	virtual void WypiszStat() = 0;
	virtual void WypiszPrzedm() = 0;

};

class Mag : virtual public Postac {
public:
	Mag(int zycie = 0, int moc = 0) : MocMagiczna(moc) {
		PunktyZycia = zycie;
	}
	int MocMagiczna;
	void DodajMocy() {
		MocMagiczna++;
	};

	void UstalPrzed(Przedmiot* objWLewRece,
		Przedmiot* objWPrawRece,
		Przedmiot* naNogach,
		Przedmiot* naTorsie,
		Przedmiot* naGlowie) {
		if (typeid(*objWLewRece).name() == typeid(Tarcza).name() && typeid(*objWPrawRece).name() == typeid(Tarcza).name()) {
			cout << "Magowi tego nie wolno zalozyc" << endl;
			return;
		}
		ObjWLewRece = objWLewRece;
		ObjWPrawRece = objWPrawRece;
		NaNogach = naNogach;
		NaTorsie = naTorsie;
		NaGlowie = naGlowie;
	};

	void WypiszStat() {
		cout << "Pkt zycia " << PunktyZycia << endl;
		cout << "Moc " << MocMagiczna << endl;
	};

	void WypiszPrzedm() {
		cout << "Przedmiot W Lewej Rece ";
		if (ObjWLewRece != NULL) {
			cout << ObjWLewRece->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl;
		}
		cout << "Przedmiot W Prawej Rece ";
		if (ObjWPrawRece != NULL) {
			cout << ObjWPrawRece->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl;
		}
		cout << "Przedmiot Na Nogach ";
		if (NaNogach != NULL) {
			cout << NaNogach->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl;
		}
		cout << "Przedmiot Na Torsie ";
		if (NaTorsie != NULL) {
			cout << NaTorsie->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl;
		}
		cout << "Przedmiot Na Glowie ";
		if (NaGlowie != NULL) {
			cout << NaGlowie->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl;
		}
		cout << endl;
	};
};

class Wojownik : virtual public Postac {
public:
	Wojownik(int zycie, int sila, int wytrzym) : Sila(sila), Wytrzymalosc(wytrzym) {
		PunktyZycia = zycie;
	};
	int Sila;
	int Wytrzymalosc;
	void DodajSily() {
		Sila++;
	};
	void DodajWytrzym() {
		Wytrzymalosc++;
	};

	void UstalPrzed(Przedmiot* objWLewRece,
		Przedmiot* objWPrawRece,
		Przedmiot* naNogach,
		Przedmiot* naTorsie,
		Przedmiot* naGlowie) {

		if (typeid(*objWLewRece).name() == typeid(Laska).name() && typeid(*objWPrawRece).name() == typeid(Laska).name()) {
			cout << "Magowi tego nie wolno zalozyc" << endl;
			return;
		}

		ObjWLewRece = objWLewRece;
		ObjWPrawRece = objWPrawRece;
		NaNogach = naNogach;
		NaTorsie = naTorsie;
		NaGlowie = naGlowie;
	};

	void WypiszStat() {
		cout << "Pkt zycia " << PunktyZycia << endl;
		cout << "Sila " << Sila << endl;
		cout << "Wytrzymalosc " << Wytrzymalosc << endl;
	};

	void WypiszPrzedm() {
		cout << "Przedmiot W Lewej Rece ";
		if (ObjWLewRece != NULL) {
			cout << ObjWLewRece->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl;
		}
		cout << "Przedmiot W Prawej Rece ";
		if (ObjWPrawRece != NULL) {
			cout << ObjWPrawRece->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl;
		}
		cout << "Przedmiot Na Nogach ";
		if (NaNogach != NULL) {
			cout << NaNogach->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl;
		}
		cout << "Przedmiot Na Torsie ";
		if (NaTorsie != NULL) {
			cout << NaTorsie->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl;
		}
		cout << "Przedmiot Na Glowie ";
		if (NaGlowie != NULL) {
			cout << NaGlowie->NazwaPrz << endl;
		}
		else
		{
			cout << "brak." << endl << endl;
		}
		if (ObjWPrawRece != NULL || ObjWLewRece != NULL)
			if (NaGlowie == NULL && NaTorsie == NULL && NaNogach == NULL && (
				(ObjWPrawRece == NULL && (typeid(*ObjWLewRece).name() == typeid(MieczZwykly).name()))
				||
				((typeid(*ObjWPrawRece).name() == typeid(MieczZwykly).name()) && ObjWLewRece == NULL)
				)
				) {
				cout << "Postaæ ów niesie te¿ miecz wrêczony mu w tajemniczych oko­licznoœciach. Bardzo tajemniczych okolicznoœciach. A¿ dziw zatem, ¿e jest w tym mieczu coœ nieoczekiwanego: nie jest magiczny. Nie ma imienia. Kiedy siê nim macha, cz³owieka nie wype³nia poczu­cie mocy, tylko wyrastaj¹ mu b¹ble na d³oniach. Mo¿na by uwie­rzyæ, ¿e miecz ten by³ u¿ywany tak czêsto, a¿ zatraci³ inne swe ce­chy i sta³ siê kwintesencj¹ miecza: d³ugim kawa³kiem metalu z bar­dzo ostrymi krawêdziami. I nie ma wypisanego na klindze przezna­czenia. Jest w³aœciwie unikatem." << endl;
			}
	};
};

int main()
{
	Mag mag(50, 10);
	mag.WypiszStat();
	mag.WypiszPrzedm();
	mag.UstalPrzed(new LaskaZwykla("Laska1", 2), new LaskaZwykla("Laska2", 3), new LaskaZwykla("Cos", 3), new Laska("Cos", 3), new LaskaZwykla("Cos", 3));
	mag.WypiszPrzedm();

	Wojownik woj(100, 54, 14);
	woj.WypiszStat();
	woj.WypiszPrzedm();
	woj.DodajPrzedmiot(1, new MieczZwykly("Zabijacz swiatuf", 50));
	woj.WypiszPrzedm();

	return 0;
}