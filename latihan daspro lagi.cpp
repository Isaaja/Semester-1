#include <iostream>
#include <string.h>
using namespace std;
float A,Be,Ce,B;
int a,b,c,d,e,CARI;
char helo [99999];
char kabar [9999];
int Datane[7];
int N,i,X,ketemu;
main()
{
    cout << " ***Nomer Satu*** "<<endl;
    cout << "Hello Semarang"<<endl<< "Apakabar Hari ini"<<endl;
    cout << "***Nomer Dua*** "<<endl;
    cout << "Input Nilai :";
    cin>> Be;
    A=1.9;
    Ce=20;
    a=A*Be;
    cout <<a<<endl;
    b=A+Ce*Be;
    cout <<b<<endl;
    B=A;
    A=Ce;
    Ce=B;
    cout << A <<endl<< Ce<<endl;
    cout << "***Nomer Tiga*** "<<endl;
    strcpy(helo, "Hello Semarang ");
    strcpy(kabar, "Apakabar Hari ini");
    cout << helo <<endl << kabar;
    cout<<endl;
    cout << "***Nomer Empat*** "<<endl;
    if (A>Be && A>Ce)
    {
        cout << "Urutan Terbesar :" << A<<endl;
    }
    else if (Be>A && Be>Ce)
    {
        cout << "Urutan Terbesar :" <<Be<<endl;
    }
    else if (Ce>A && Ce>Be)
    {
        cout <<"Urutan Terbesar : "<<Ce<<endl;
    }
    else {
        cout<<"Ada Bilangan yang sama Masseh"<<endl;
    }
    cout << "***Nomer Lima***"<<endl;
    cout << "Masukkan Nilai N :";
    cin >> N;
    do
    {
        cout <<N<< " ";
        N++;
    }while (N<=10);
    cout<<endl;
    cout << "***Nomer Enam***"<<endl;
    cout << "Input A :";
    cin >> A;
    cout << "Input Be :";
    cin >> Be;
    cout<< "Input Ce :";
    cin >> Ce;
    cout << "Input CARI :";
    cin >> CARI;

    if (A == CARI){
			cout<< "ketemu seng tak golekki";
		}else 	if (Be == CARI){
				cout<< "ketemu seng tak golekki";
			}else	if (Ce == CARI) {
					cout << "ketemu seng tak golekki";
				}else{
					cout<< "tidak ktemu";
				}
				cout<<endl;
    cout << "***Nomer Tujuh****"<<endl;
    while (i<7)
    {
        cout << "Masukkan Nilai data :";
        cin >> Datane[i];
        i++;
    }
    cout << "***Nomer Delapan***"<<endl;
  do
		{
			if(Datane[i] == CARI)
                ketemu=i;
				{
					cout<<"KETEMU NDES "<<CARI<< " di lokasi "<<ketemu<<endl;
                     break;
				}i =i + 1;

		}while (i<8);

}
