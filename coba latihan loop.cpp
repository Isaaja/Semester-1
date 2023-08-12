#include <iostream>
#include <conio.h>
using namespace std;
int x,hasil,Hasil,a,B;
int i,b;
int main()
{
    x=1;

    do {
        cout << x;
        x=x+1;
    }
    while (x<=10);
    cout<<endl;

    x=10;
    do{
        cout << x;
        x=x-1;
    }
    while(x>=1);
    cout<< endl;

    x=29;
    do{
    cout<<x;
    x=x-2;
    }
    while (x>=15);
    cout<<endl;
    i=1;
    while (i<=10)
    {
            cout<< i<< " ";


        hasil=hasil+i;
        i++;

    }
    cout << "="<<hasil<<endl;
    i=10;
    while(i>=1)
    {
            cout<< i << "+";


        Hasil=Hasil+i;
        i=i-1;
    }
    cout << "="<<Hasil;
    /*i=1;
    B=30;
    do (b>=21)
    {
        B=B+i;
        B=B-2;
    }
    while(i<=10)
    {
        a=a+i;
        a++;

    }
    cout << i<< " " << B << " "; */
}
