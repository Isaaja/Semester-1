#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int konsonen, vokal, i, kata;
char ArrKalimat [999];
main()
{
    cout<< "Kalimat     :";
    cin.getline(ArrKalimat, 999);
    strupr(ArrKalimat);
    cout<< ArrKalimat;


    i=0;
    kata=1;
    vokal=0;
    konsonen=0;
    while(i<90)
    {
        if (ArrKalimat[i]== 'A' || ArrKalimat[i]=='I' || ArrKalimat[i]=='U' || ArrKalimat[i]=='E' || ArrKalimat[i]=='O')
        {
            vokal=vokal+1;
        }
        else if (ArrKalimat[i]==' ')
        {
            kata=kata+1;
        }
        else if(ArrKalimat[i]=='Q' || ArrKalimat[i]=='W' || ArrKalimat[i]=='R' || ArrKalimat[i]=='T' || ArrKalimat[i]=='Y' || ArrKalimat[i]=='P' || ArrKalimat[i]=='S' || ArrKalimat[i]=='D' || ArrKalimat[i]=='F' || ArrKalimat[i]=='G' || ArrKalimat[i]=='H' || ArrKalimat[i]=='J' || ArrKalimat[i]=='K' || ArrKalimat[i]=='L' || ArrKalimat[i]=='Z' || ArrKalimat[i]=='X' || ArrKalimat[i]=='C' || ArrKalimat[i]=='V' || ArrKalimat[i]=='B' ||ArrKalimat[i]=='N' ||ArrKalimat[i]=='M')
        {
            konsonen=konsonen+1;
        }
        i=i+1;
    }

    cout<< "\n\n\n Jumlah : ";
    cout<< "\n Vokal : "<<vokal;
    cout<< "\n Konsonan :"<<konsonen;
    cout<< "\n Kata :" <<kata;

    getch;
}
