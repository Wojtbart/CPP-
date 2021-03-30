#include <iostream>

using namespace std;

string removeSpaces(string result)
{
    for(int n=0;n<result.length();n++)
            {
                 if((result[n]==' ')&&(result[n]==result[n+1]))
                    result.erase(n,1);

                 else continue;
                 n--;

            }
    return result;
}
string reverse(string &t)
{
    int n = t.length() - 1;
    int start, koniec= n + 1; ///start i koniec w szukanym wyrazeniu
    string result = ""; ///tu bedziemy wkladac naszego finalnego stringa

   while(n >= 0)
    {
        if(t[n] == ' ') //jesli znak w wyrazeniu jest spacja
        {
            start =n + 1;///w pierwszym przejsciu while start =koniec
            while(start != koniec)
            {
                result =result+ t[start];///dodaje kolejne litery w odwrocnej kolejnosci
                start++;
            }

            result =result+' ';///dodaje spacje
            koniec = n;///ustawiam koniec na start-1
        }
        n--;
    }

    ///dodaje
   // cout<<koniec;
/// patrze jaki indeks ma koniec i dopoki start!= koniec to do result dodaje to co mi zostalo w poczatkowym wyrazeniu t, w tym przypadku Ala
    start = 0;
    while(start != koniec)
    {
       result =result+ t[start];
       start++;
    }
     return removeSpaces(result); ///zwracam moja funkcje usuwajaca spacje na juz odwroconym wyrazeniu
}
int main()
{
    string siema="siema                 mordo jak tam     byku";
    string str="Ala   ma   kota       ";
    cout<<siema<<endl;
    cout<<reverse(str)<<endl;;
   /// cout<<removeSpaces(siema);
    return 0;
}
