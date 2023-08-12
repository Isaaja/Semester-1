
#include <string.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main( )
{
char a1[12];
char a2[21];
char b1[21];

cout << "Masukkan Huruf yang ingin anda kerjakkan : ";
cin >> a1;
cin>> a2;
cin>> b1;
cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<"->";
cout<<strcmp(a1,a2)<<endl;
cout<<"Hasil Perbandingan "<<a2<<" dan "<<b1<<"->";
cout<<strcmp(a2,b1) <<endl;
cout<<"Hasil Perbandingan "<<a1<<" dan "<<b1<<"->";
cout<<strcmp(a1,b1) <<endl;
getch( );
}
