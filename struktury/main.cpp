#include <iostream>

using namespace std;

struct Podpis
{
    int wiek;
    string imie;
    string numer_tel;
    string adres;
};
/*struct StatekKosmiczny
{
    int wspolrzedneX;
    int wspolrzedneY;
    int a,b;
    int plansza[1024][768];
    int pozycjaX;
    int POzycjaY;

    StatekRUSZ();
    StatekZniszcz();

};
int StatekKosmiczny::StatekRUSZ(int x, int y)
{
    x++;
    y++;
}
void StatekKosmiczny::StatekZniszcz(int x, int y)
{
   if()
}

*/


int main()
{
    int a=35,b=25;
    int c,d;
    int plansza[c][d];

  /*  Podpis podpis;
    cout << "Witam!" << endl;

    cout << "Podaj imie: " << endl;
    cin>>podpis.imie;
    cout << "Podaj wiek: " << endl;
    cin>>podpis.wiek;
    cout << "Podaj numer tel: " << endl;
    cin>>podpis.numer_tel;
    cout << "Podaj adres: " << endl;
    cin>>podpis.adres;

    cout<<"Twoje imie to "<<podpis.imie<<endl;
    cout<<"Twoj wiek to "<<podpis.wiek<<endl;
    cout<<"Twoj ad  if(Xwing.wspolrzedneX <= a &&  Xwing.wspolrzedneY<= b)
    {
        StatekRusz();
    }
    else
    {
        StatekZniszcz();
    }   int plansza[a][b];res to "<<podpis.adres<<endl;
    cout<<"Twoj numer telefonu to "<<podpis.numer_tel<<endl;*/

 /*   StatekKosmiczny Xwing;
    cout<<"Podaj pozycje statku X,Y:";
    cin>>Xwing.plansza[d][e];
    Xwing.plansza[d][e]='#';
*/
   plansza[c][d]=' ';
    for(int i=0; i<a;i++)
        {
        for(int j=0; j<b; j++)
        {
            cout<<plansza[i][j];
        }
        cout<<"\n"<<endl;
    }

    return 0;
}
