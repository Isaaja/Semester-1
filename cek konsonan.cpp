#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int a,konsonan, vokal,kata,i;

int main()
{

    cout<< "\tMASUKKAN JUMLAH KARAKTER YANG ANDA INGINKAN!\n";
    cout<< "Berapa Karakter :";
    cin>> a;

    char ArrKata[a];

    cout<< "\nKata :";cin>>ArrKata;
    strupr(ArrKata);
    cout<< ArrKata<<endl;
    konsonan=0;
    vokal=0;
    kata=0;
    i=0;

    while(i<a)
    {


        if(ArrKata[i]=='A' || ArrKata[i]=='I' || ArrKata[i]=='U' || ArrKata[i]=='E' || ArrKata[i]=='O')
    {
        vokal=vokal+1;
    }
    else if (ArrKata[i]=='Q' || ArrKata[i]=='W' || ArrKata[i]=='R' || ArrKata[i]=='T' || ArrKata[i]=='Y' || ArrKata[i]=='P' || ArrKata[i]=='S' || ArrKata[i]=='D' || ArrKata[i]=='F' || ArrKata[i]=='G' || ArrKata[i]=='H' || ArrKata[i]=='J' || ArrKata[i]=='K' || ArrKata[i]=='L' || ArrKata[i]=='Z' || ArrKata[i]=='X' || ArrKata[i]=='C' || ArrKata[i]=='V' || ArrKata[i]=='B' || ArrKata[i]=='N' || ArrKata[i]=='M')
    {
        konsonan=konsonan+1;
    }
    i++;

}
cout<< "\n\n\tJumlah    :" <<endl;
cout<< "\nKonsonan  :"<<konsonan;
cout<< "\nVokal :"<<vokal;
return 0;
}
