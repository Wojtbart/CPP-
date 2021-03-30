#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pytanie, odp1, odp2, odp3;
    int numer1=0, numer2=0, numer3=0;
    int numer;
  /*  string haslo;
    int proba=0;
    cout << "Weryfikacja hasel!" << endl;
    cout<<"Podaj haslo: ";
    while(proba<5)
    {   cin>>haslo;
        if(haslo=="programista")
        {
            cout <<"Podales poprawne haslo!"<<endl;
            break;
        }

        else
        {
            cout<<"Podales niepoprawne haslo!"<<endl;
            cout<<"Sprobuj jescze raz!"<<endl;
            cout<<"Podaj haslo: ";
            proba++;
        }
    }
*/
  /*   cout<<"Program wyswietla pierwsze 20 liczb kwadratowych!"<<endl;
     for(int i=0; i<20; i++)
     {
         cout<<"Twoje liczby to "<<i+1<<". "<<i*i<<endl;
     }
*/
    cout<<"Zadaj pytanie : "<<endl;
    getline(cin, pytanie, '\n');

        cout<<"Twoje trzy odpowiedzi na pytanie to: "<<endl;;
        cout<<"1."; getline(cin, odp1, '\n');
        cout<<"2."; getline(cin, odp2, '\n');
        cout<<"3."; getline(cin, odp3, '\n');

    while(1)
        {
        cout<<"Podaj numer twojej odpowiedzi: ";
        cin>>numer;
            if(numer==1)
            {
                cout<<"Twoja odpowiedz to: "<<odp1<<endl;
                numer1+=1;

            }
            else if(numer==2)
            {
                cout<<"Twoja odpowiedz to: "<<odp2<<endl;
                numer2+=1;

            }
            else if(numer==3)
            {
                cout<<"Twoja odpowiedz to: "<<odp3<<endl;
                numer3+=1;

            }
            else if(numer==0)
            {
                cout<<"Wybrales 0, czas na wyniki ankiety:"<<endl;
                cout<<"Odpowiedz 1 padla: "<<numer1<<" razy"<<endl;
                cout<<"Odpowiedz 2 padla: "<<numer2<<" razy"<<endl;
                cout<<"Odpowiedz 3 padla: "<<numer3<<" razy"<<endl;
                break;
            }
        }
        cout<<"Koniec programu!"<<endl;
    return 0;
}
