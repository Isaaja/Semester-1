#include <iostream>
using namespace std;
//Kamus
int a,b,c,d,e,x,asc,cari;
int bil1,angka,values,nilai,ditemukan;
int data[4];
//deskripsi
int main()
{
    cin >> a;
    cout << "Masukkan variabel cari = ";
    cin >> cari;
    cout << "Masukkan Variabel bil1,angka,values,nilai"<<endl;
    cin >> bil1;
    cin >> angka;
    cin >> values;
    cin >> nilai;
    cout << "Masukkan 5 Nomor Sepatu yang kamu inginkan"<<endl;
    cout << "Masukkan angka pertama :";
    cin>> data[0];
    cout << "Masukkan angka kedua :";
    cin>> data[1];
    cout << "Masukkan angka ketiga :";
    cin>> data[2];
    cout << "Masukkan angka keempat :";
    cin>> data[3];
    cout << "Masukkan angka kelima :";
    cin>> data[4];


    cout << "Angka ke 5 = " <<data [4]<<endl;
    cout << "Angka ke 4 = "<<data [3]<<endl;
    cout << "Angka ke 3 = "<<data [2]<<endl;
    cout << "Angka ke 2 = "<<data [1]<<endl;
    cout << "Angka ke 1 = "<<data [0]<<endl;
    if (bil1==cari)
    {
        cout << "Variabel (bil1) sama dengan Variabel (cari)" <<endl;
    }
    else if (nilai==cari)
    {
        cout << "Variabel (nilai) sama dengan Variabel (cari)" <<endl;
    }
    else if (angka==cari)
    {
        cout << "Variabel (angka) sama dengan Variabel (cari)" <<endl;
    }
    else if (values==cari)
    {
        cout << "Variabel (values) sama dengan Variabel (cari)" <<endl;
    }
    else
    {
        cout << "Ndak sama masseh" <<endl;
    }

    cout << "Menampilakn isi variable dengan array with loop"<<endl;
    x=0;

    do
    {
        cout << x+1 << " = "  << data[x]<<endl;
        x=x+1;
    }
    while (x<5);
    if(data[x] > data[x+1])
    {
        asc=data[x];
        data[x]=data[x+1];
        data[x+1]=asc;
    }
        cout << endl<< "Bilangan Anda dari Variabel 1-5 adalah :";
         x=0;

    do
    {
        cout << " " << data[x];
        x=x+1;
    }
    while (x<5);
    cout <<endl;

    x=1;
    do{
        if (data[x]=a)
            ditemukan=x;
        {
            cout << "yang dicari adalah  " << a << "  Ditemukan di index ke  "<<ditemukan;
         break;
        }
        x=x+1;
    }while (x<7);


}
