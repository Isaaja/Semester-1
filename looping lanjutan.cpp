#include <iostream>
#include <string.h>

using namespace std;
char ulangi[2];
int counter;
int main()
{
   strcmp(ulangi,"Y");
   counter=0;
   do {

    cout<<"Apakah kamu ingin melakukan perulangan?\n"<<endl;
    cout<< "Jawab (Y/T):  ";
    cin>> ulangi;
    counter= 1+counter;
   }
   while (strcmp(ulangi,"Y")==0);
   cout << "----------"<<endl;
   cout << "Perulangan Berakhir....!\n"<<endl;
   cout << "Kamu melakukan perulangan sebanyak : " << counter;


    return 0;

}
