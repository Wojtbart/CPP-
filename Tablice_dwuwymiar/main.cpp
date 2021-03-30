#include <iostream>
#include <string>

using namespace std;


char wybor;
char X;
char O;


enum pole
{
    PUSTE=0,
    KOLKO=1,
    KRZYZYK=2
};

char plansza[3][3]=
{
    {PUSTE, PUSTE, PUSTE},
    {PUSTE, PUSTE, PUSTE},
    {PUSTE, PUSTE, PUSTE}
};

void rysuj()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << " | ";
            cout << plansza[i][j];
        }
        cout << " | " << endl;
        cout << "===============";
        cout << endl;
    }
    cout << endl;
}
void KtoWygral()
{

}

/*void RuchX()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)

        if(wybor=='1')       cout<<plansza[0][0]='X';
        else if(wybor=='2')  cout<<plansza[0][1]=X;
        else if(wybor=='2')  cout<<plansza[0][1]=X;
        else if(wybor=='3')  cout<<plansza[0][2]=X;
        else if(wybor=='4')  cout<<plansza[1][0]=X;
        else if(wybor=='5')  cout<<plansza[1][1]=X;
        else if(wybor=='6')  cout<<plansza[1][2]=X;
        else if(wybor=='7')  cout<<plansza[2][0]=X;
        else if(wybor=='8')  cout<<plansza[2][1]=X;
        else if(wybor=='9')  cout<<plansza[2][2]=X;

    }
}
void RuchO()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)

        if(wybor=='1')       cout<<plansza[0][0]=O;
        else if(wybor=='2')  cout<<plansza[0][1]=O;
        else if(wybor=='2')  cout<<plansza[0][1]=O;
        else if(wybor=='3')  cout<<plansza[0][2]=O;
        else if(wybor=='4')  cout<<plansza[1][0]=O;
        else if(wybor=='5')  cout<<plansza[1][1]=O;
        else if(wybor=='6')  cout<<plansza[1][2]=O;
        else if(wybor=='7')  cout<<plansza[2][0]=O;
        else if(wybor=='8')  cout<<plansza[2][1]=O;
        else if(wybor=='9')  cout<<plansza[2][2]=O;
    }
}*/


int main()
{
    pole X;
    pole O;


    cout << "TIC TAC TOE v1.0" << endl;
    cout << "Gracz 1 to X!" << endl;
    cout << "Gracz 2 to O!" << endl;
    cout  << endl;
    //while(wybor<'10')
    {

    }

    rysuj();


    return 0;
}





