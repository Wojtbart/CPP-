#include <iostream>
#include <string>

using namespace std;

int main()
{
    string od1do20[20]=
    {"", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec", "dziesiec", "jedenascie", "dwanascie",
    "trzynascie", "czternascie", "pietnascie", "szesnascie", "siedemnascie", "osiemnascie", "dziewietnascie"};
    string dziesiatki[10] ={"", "dziesiec", "dwadziescia", "trzydziesci", "czterdziesci", "piecdziesiat", "szescdziesiat", "siedemdziesiat", "osiemdziesiat", "dziewiecdziesiat"};
    string setki[10]={"", "sto", "dwiescie", "trzysta", "czterysta", "piecset", "szescset", "siedemset", "osiemset", "dziewiecset"};

    int x, koncowka, przedrostek, pomoc1, pomoc2, pomoc3, pomoc4, pomoc5, pomoc6, pomoc7;
    string slownie;
    string tysiecy= "tysiecy";
    string tysiac = "tysiac";
    string tysiace="tysiace";
    cout << "Podaj liczbe a ja napisze ci ja slownie: ";
    cin>>x;

    if(x==0)
    {
        cout<<"Nasza liczba slownie to: zero"<<endl;
        return 0;
    }


    if(x>0 && x<100)
    {
     przedrostek=x/10;
     koncowka=x%10;
     if(przedrostek == 1 || przedrostek == 0)
     {
         slownie=od1do20[x];
         cout<<"Nasza liczba slownie to: "<<slownie<<endl;
     }
     else
     {
         slownie=dziesiatki[przedrostek]+" "+od1do20[koncowka];
        cout<<"Nasza liczba slownie to: "<<slownie<<endl;
     }
    }


    if(x>=100 && x<1000)
    {
     przedrostek=x/100;
     pomoc1=przedrostek*100;
     pomoc2=x-pomoc1;
     pomoc3=pomoc2/10;
     koncowka=x%10;
     if(pomoc3 == 1)
     {
         slownie=setki[przedrostek]+" "+od1do20[pomoc2];
         cout<<"Nasza liczba slownie to: "<<slownie<<endl;
     }
     else
     {
         slownie=setki[przedrostek]+" "+dziesiatki[pomoc3]+" "+od1do20[koncowka];
        cout<<"Nasza liczba slownie to: "<<slownie<<endl;
     }
    }
    if(x>=1000 && x<100000)
    {
     przedrostek=x/1000;
     pomoc1=przedrostek*1000;
     pomoc2=x-pomoc1;
     pomoc3=pomoc2/100;
     pomoc4=pomoc3*100;
     pomoc5=pomoc2-pomoc4;
     koncowka=x%10;
     pomoc6=x/10000;
        if(x>=1000 && x<1999)
        {
            if(pomoc5>10 && pomoc5<20)
            {
               slownie=tysiac+" "+setki[pomoc3]+" "+od1do20[pomoc5];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }

            else
            {
                pomoc5=pomoc5/10;
                slownie=tysiac+" "+setki[pomoc3]+" "+dziesiatki[pomoc5]+" "+od1do20[koncowka];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }
        }

        else if(x>=2000 && x<5000)
        {
            if(pomoc5>10 && pomoc5<20)
            {
               slownie=od1do20[przedrostek]+" "+tysiace+" "+setki[pomoc3]+" "+od1do20[pomoc5];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }

            else
            {
                pomoc5=pomoc5/10;
                slownie=od1do20[przedrostek]+" "+tysiace+" "+setki[pomoc3]+" "+dziesiatki[pomoc5]+" "+od1do20[koncowka];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }
        }
        else if(x>=5000 && x<10000)
        {
            if(pomoc5>10 && pomoc5<20)
            {
               slownie=od1do20[przedrostek]+" "+tysiecy+" "+setki[pomoc3]+" "+od1do20[pomoc5];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }

            else
            {
                pomoc5=pomoc5/10;
                slownie=od1do20[przedrostek]+" "+tysiecy+" "+setki[pomoc3]+" "+dziesiatki[pomoc5]+" "+od1do20[koncowka];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }

        }
            else if(x>=10000 && x<20000)
            {
            if(pomoc5>10 && pomoc5<20)
            {
               slownie=od1do20[przedrostek]+" "+tysiecy+" "+setki[pomoc3]+" "+od1do20[pomoc5];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }

            else
            {
                pomoc5=pomoc5/10;
                slownie=od1do20[przedrostek]+" "+tysiecy+" "+setki[pomoc3]+" "+dziesiatki[pomoc5]+" "+od1do20[koncowka];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }
            }

            else if(x>=20000 && x<100000)
            {
                pomoc7=pomoc6*10000;
                pomoc7=x-pomoc7;
                pomoc7=pomoc7/1000;
            if(pomoc5>10 && pomoc5<20)
            {
               slownie=dziesiatki[pomoc6]+" "+od1do20[pomoc7]+" "+tysiecy+" "+setki[pomoc3]+" "+od1do20[pomoc5];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }

            else
            {
                pomoc7=pomoc6*10000;
                pomoc7=x-pomoc7;
                pomoc7=pomoc7/1000;
                pomoc5=pomoc5/10;
                slownie=dziesiatki[pomoc6]+" "+od1do20[pomoc7]+" "+tysiecy+" "+setki[pomoc3]+" "+dziesiatki[pomoc5]+" "+od1do20[koncowka];
                cout<<"Nasza liczba slownie to: "<<slownie<<endl;
            }
            }
    }


    return 0;
}
