#include <iostream>

using namespace std;

int wybor;
int Pole1=0, Pole2=0, Pole3=0, Pole4=0, Pole5=0, Pole6=0, Pole7=0, Pole8=0, Pole9=0;
enum PolePlanszy
{
    PolePuste=0,
    PoleX=1,
    PoleO=2
};

bool WyborX(int wybor)
{
    cout<<"Wybierz pole, gdzie chcesz wprowadzic X: ";
    cin>>wybor;

    switch(wybor)
    {
        case 1:
            {
                if(Pole1==PolePuste)
                {
                    cout<<"Stawiasz tutaj X!"<<endl;
                    Pole1=PoleX;
                    return true;
                }
                else if(Pole1==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole1==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 2:
           {
                if(Pole2==PolePuste)
                {
                    cout<<"Stawiasz tutaj X!"<<endl;
                    Pole2=PoleX;
                    return true;
                }
                else if(Pole2==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole2==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 3:
            {
                if(Pole3==PolePuste)
                {
                    cout<<"Stawiasz tutaj X!"<<endl;
                    Pole3=PoleX;
                    return true;
                }
                else if(Pole3==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole3==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 4:
            {
                if(Pole4==PolePuste)
                {
                    cout<<"Stawiasz tutaj X!"<<endl;
                    Pole4=PoleX;
                    return true;
                }
                else if(Pole4==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole4==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 5:
            {
                if(Pole5==PolePuste)
                {
                    cout<<"Stawiasz tutaj X!"<<endl;
                    Pole5=PoleX;
                    return true;
                }
                else if(Pole5==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole5==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 6:
            {
                if(Pole6==PolePuste)
                {
                    cout<<"Stawiasz tutaj X!"<<endl;
                    Pole6=PoleX;
                    return true;
                }
                else if(Pole6==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole6==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 7:
            {
                if(Pole7==PolePuste)
                {
                    cout<<"Stawiasz tutaj X!"<<endl;
                    Pole7=PoleX;
                    return true;
                }
                else if(Pole7==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole7==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 8:
            {
                if(Pole8==PolePuste)
                {
                    cout<<"Stawiasz tutaj X!"<<endl;
                    Pole8=PoleX;
                    return true;
                }
                else if(Pole8==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole8==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 9:
            {
                if(Pole9==PolePuste)
                {
                    cout<<"Stawiasz tutaj X!"<<endl;
                    Pole9=PoleX;
                    return true;
                }
                else if(Pole9==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole9==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        default:
            {
                cout<<"Podales zla liczbe!"<<endl;
                return false;
            }
    }

}



bool WyborO(int wybor)
{
    cout<<"Wybierz pole, gdzie chcesz wprowadzic O: ";
    cin>>wybor;

    switch(wybor)
    {
        case 1:
            {
                if(Pole1==PolePuste)
                {
                    cout<<"Stawiasz tutaj O!"<<endl;
                    Pole1=PoleO;
                    return true;
                }
                else if(Pole1==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole1==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 2:
           {
                if(Pole2==PolePuste)
                {
                    cout<<"Stawiasz tutaj O!"<<endl;
                    Pole2=PoleO;
                    return true;
                }
                else if(Pole2==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole2==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 3:
            {
                if(Pole3==PolePuste)
                {
                    cout<<"Stawiasz tutaj O!"<<endl;
                    Pole3=PoleO;
                    return true;
                }
                else if(Pole3==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole3==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 4:
            {
                if(Pole4==PolePuste)
                {
                    cout<<"Stawiasz tutaj O!"<<endl;
                    Pole4=PoleO;
                    return true;
                }
                else if(Pole4==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole4==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 5:
            {
                if(Pole5==PolePuste)
                {
                    cout<<"Stawiasz tutaj O!"<<endl;
                    Pole5=PoleO;
                    return true;
                }
                else if(Pole5==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole5==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 6:
           {
                if(Pole6==PolePuste)
                {
                    cout<<"Stawiasz tutaj O!"<<endl;
                    Pole6=PoleO;
                    return true;
                }
                else if(Pole6==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole6==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 7:
            {
                if(Pole7==PolePuste)
                {
                    cout<<"Stawiasz tutaj O!"<<endl;
                    Pole7=PoleO;
                    return true;
                }
                else if(Pole7==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole7==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 8:
            {
                if(Pole8==PolePuste)
                {
                    cout<<"Stawiasz tutaj O!"<<endl;
                    Pole8=PoleO;
                    return true;
                }
                else if(Pole8==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole8==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
        case 9:
            {
                if(Pole9==PolePuste)
                {
                    cout<<"Stawiasz tutaj O!"<<endl;
                    Pole9=PoleO;
                    return true;
                }
                else if(Pole9==PoleX)
                {
                    cout<<"Tutaj jest ju¿ postawiony X. Wybierz inne pole!"<<endl;
                    return false;
                }
                else if(Pole9==PoleO)
                {
                    cout<<"Tutaj jest ju¿ postawione O. Wybierz inne pole!"<<endl;
                    return false;
                }
                break;
            }
            default:
                {
                    cout<<"Podales zla liczbe!"<<endl;
                    return false;
                }
            break;
    }

}



int main()
{

    cout << "Witaj w programie Kolko i krzyzyk!" << endl;
    cout << "Gre rozpoczyna X!" << endl;

    WyborX(wybor);
    cout<<endl;

    while(!WyborO(wybor));
    cout<<endl;

    while(!WyborX(wybor));
    cout<<endl;

    while(!WyborO(wybor));
    cout<<endl;

     while(!WyborX(wybor));
    cout<<endl;

    while(!WyborO(wybor));
    cout<<endl;

    while(!WyborX(wybor));
    cout<<endl;

    while(!WyborO(wybor));
    cout<<endl;

    while(!WyborX(wybor));
    cout<<endl;

    if((PoleX==Pole1 && PoleX==Pole2 && PoleX==Pole3)) cout<<"Gracz X wygra³!"<<endl;
    else if((PoleX==Pole4 && PoleX==Pole5 && PoleX==Pole6) ) cout<<"Gracz X wygra³!"<<endl;
    else if((PoleX==Pole7 && PoleX==Pole8 && PoleX==Pole9) ) cout<<"Gracz X wygra³!"<<endl;
    else if((PoleX==Pole1 && PoleX==Pole4 && PoleX==Pole7) ) cout<<"Gracz X wygra³!"<<endl;
    else if((PoleX==Pole2 && PoleX==Pole5 && PoleX==Pole8) ) cout<<"Gracz X wygra³!"<<endl;
    else if((PoleX==Pole3 && PoleX==Pole6 && PoleX==Pole9) ) cout<<"Gracz X wygra³!"<<endl;
    else if((PoleX==Pole1 && PoleX==Pole5 && PoleX==Pole9) ) cout<<"Gracz X wygra³!"<<endl;
    else if((PoleX==Pole3 && PoleX==Pole5 && PoleX==Pole7) ) cout<<"Gracz X wygra³!"<<endl;

    if((PoleO==Pole1 && PoleO==Pole2 && PoleO==Pole3) ) cout<<"Gracz O wygra³!"<<endl;
    else if((PoleO==Pole4 && PoleO==Pole5 && PoleO==Pole6) ) cout<<"Gracz O wygra³!"<<endl;
    else if((PoleO==Pole7 && PoleO==Pole8 && PoleO==Pole9) ) cout<<"Gracz O wygra³!"<<endl;
    else if((PoleO==Pole1 && PoleO==Pole4 && PoleO==Pole7) ) cout<<"Gracz O wygra³!"<<endl;
    else if((PoleO==Pole2 && PoleO==Pole5 && PoleO==Pole8) ) cout<<"Gracz O wygra³!"<<endl;
    else if((PoleO==Pole3 && PoleO==Pole6 && PoleO==Pole9) ) cout<<"Gracz O wygra³!"<<endl;
    else if((PoleO==Pole1 && PoleO==Pole5 && PoleO==Pole9) ) cout<<"Gracz O wygra³!"<<endl;
    else if((PoleO==Pole3 && PoleO==Pole5 && PoleO==Pole7) ) cout<<"Gracz O wygra³!"<<endl;


    return 0;
}
