#include <iostream>

using namespace std;

 int NWD(int a, int b)
{ if(a*b==0) return a+b;

     while(a!=b)
        if(a>b) a=a-b;
        else b=b-a;
        return b; /// Mozemy tez zrobic return a; ///
}
int main()
{   int x,y;
    cout << "Obliczam NWD dla liczb x oraz y!" << endl;
    cout<<"Podaj x:";
    cin>>x;
    cout<<"Podaj y:";
    cin>>y;

    cout<<"NWD dla liczb "<<x<<" oraz "<<y<<" wynosi:"<<NWD(x,y)<<endl;

    cout<<"NWW dla liczb "<<x<<" oraz "<<y<<" wynosi:"<<x*y/NWD(x,y)<<endl;

    return 0;
}
