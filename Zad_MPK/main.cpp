#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <windows.h> //do sleepa

using namespace std;

//-----------------------------------------
class Trasa
{
    public:
    vector<int> przystanki;

    void DodajPrzystanek(int numer)
    {
        przystanki.push_back(numer);
    };
};
//-----------------------------------------
class Przystanek
{
    public:
    int nrPrzystanku;
    string nazwa_przystanku;
    string NazwaPrzystanku()
    {
      return Przystanek::nazwa_przystanku;
    }
};
//-----------------------------------------
class Autobusowy : public Przystanek
{
    public:
    Autobusowy(string nazwa, int numer)  ///konstruktor
    {
        Przystanek::nazwa_przystanku=nazwa;
        Przystanek::nrPrzystanku=numer;
    };
};
//-----------------------------------------
class Tramwajowy : public Przystanek
{
    public:
    Tramwajowy(string nazwa, int numer)  ///konstruktor
    {
        Przystanek::nazwa_przystanku=nazwa;
        Przystanek::nrPrzystanku=numer;
    };
};
//-----------------------------------------
class Pojazd : public Trasa
{
    public:
    int IloscPasazerow=0;
    int KtoryPrzystanek=0;
    void Zjazd_do_zajezdni()
    {
        if(IloscPasazerow!=0)
        {
            cout<<"Prosze wysiasc, bo zjezdzam!"<<endl;
            cout<<"Pojazd zakonczyl trase!"<<endl;
            IloscPasazerow=0;
            KtoryPrzystanek=0;
        }
    }

    Przyjazd_na_przystanek();

   void Jedz()
    {

        cout<<"Jedziemy dalej!"<<endl;
        Trasa::przystanki[KtoryPrzystanek];
        KtoryPrzystanek++;

    }

};
//-----------------------------------------
class Autobus : public Pojazd
{
    public:

    int MAXCapacBus=100;
    int  Przyjazd_na_przystanek()
    {
        int dodaj, odejmij;
        srand(time(NULL));
        dodaj=rand()%MAXCapacBus;
        odejmij=rand()%MAXCapacBus;

        if((IloscPasazerow+dodaj)<MAXCapacBus) IloscPasazerow+=dodaj;
        if((IloscPasazerow-odejmij)>0) IloscPasazerow-=odejmij;
        cout<<endl<<"W autobusie znajduje sie "<<IloscPasazerow<<" osob"<<endl;
        return 0;

    }
};
//-----------------------------------------
class Tramwaj : public Pojazd
{
    public:

    int MAXCapacTrain=200;
    int  Przyjazd_na_przystanek()
    {
        int dodaj, odejmij;
        srand(time(NULL));
        dodaj=rand()%MAXCapacTrain;
        odejmij=rand()%MAXCapacTrain;

        if((IloscPasazerow+dodaj)<MAXCapacTrain) IloscPasazerow+=dodaj;
        if((IloscPasazerow-odejmij)>0) IloscPasazerow-=odejmij;
        cout<<endl<<"W tramwaju znajduje sie "<<IloscPasazerow<<" osob"<<endl;
        return 0;
    }
};
//-----------------------------------------

int main()
{
    int pom=0;
    cout << "Witaj" << endl;
    cout << "Oto szkielet mini projektu MPK!" << endl;
    cout << "Zaczynamy jazde!" << endl;

    Przystanek przystaneczki[10];
    przystaneczki[0]=Autobusowy("Ruczaj", 0);
    przystaneczki[1]=Autobusowy("Norymberska", 1);
    przystaneczki[2]=Autobusowy("Lipinskiego", 2);
    przystaneczki[3]=Autobusowy("Kobierzynska", 3);
    przystaneczki[4]=Autobusowy("Kapelanka", 4);
    przystaneczki[5]=Tramwajowy("Centrum Kongresowe Ice", 5);
    przystaneczki[6]=Tramwajowy("Pilotow", 6);
    przystaneczki[7]=Tramwajowy("Narzymskiego", 7);
    przystaneczki[8]=Tramwajowy("Rondo Mogilskie", 8);
    przystaneczki[9]=Tramwajowy("Brodowicza", 9);

    Autobus Setra;
    Tramwaj Moderus_Beta;
    Setra.DodajPrzystanek(1);
    Setra.DodajPrzystanek(2);
    Setra.DodajPrzystanek(5);
    Setra.DodajPrzystanek(7);
    Setra.DodajPrzystanek(8);
    Setra.DodajPrzystanek(9);



    for(int i=0; i<6; i++)
    {
    Setra.Jedz();
	cout<<endl<<"Jestem wlasnie na przystanku: "<<przystaneczki[(i)].NazwaPrzystanku() << endl;
	cout<<endl<<"Nastepny przystanek to: " <<przystaneczki[(i + 1)].NazwaPrzystanku() << endl;
	Setra.Przyjazd_na_przystanek();
	Sleep(5000);
    }
    Setra.Zjazd_do_zajezdni();


	Moderus_Beta.DodajPrzystanek(0);
    Moderus_Beta.DodajPrzystanek(2);
    Moderus_Beta.DodajPrzystanek(3);
    Moderus_Beta.DodajPrzystanek(6);
    Moderus_Beta.DodajPrzystanek(8);
    Moderus_Beta.DodajPrzystanek(2);

    cout<<endl<<endl<<"Zaczynamy jazde tramwajem!"<<endl;

  for(int i=0; i<6; i++)
   {

     Moderus_Beta.Jedz();
	cout<<endl<<"Jestem wlasnie na przystanku: "<<przystaneczki[i].NazwaPrzystanku() << endl;
	cout<<endl<<"Nastepny przystanek to: " << przystaneczki[(i+ 1)].NazwaPrzystanku() << endl;
	Moderus_Beta.Przyjazd_na_przystanek();
	Sleep(5000);
   }
	Moderus_Beta.Zjazd_do_zajezdni();

	cout<<endl<<"KONIEC"<<endl;




    return 0;

}
