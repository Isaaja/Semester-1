#include <iostream>
using namespace std;
int satuanwaktu,jmmt,mmdt,hasil1,hasil2;
string nickname1,nickname2;
int limitpoin21,limitpoint2,box,a,b,c,limit;
main()
{
    cout << "Mengubah satuan waktu apa?"<<endl;
    cout << "1. Menit"<<endl;
    cout << "2. Detik"<<endl;
    cout << "Tentukan Pilihan Anda";
    cin >> satuanwaktu;


    if(satuanwaktu==1)
    {
        cout << "Masukkan Jam Berapa :";
        cin >> jmmt;
        hasil1=jmmt*60;
        cout <<"Hasil Pengubahan satuan waktu Jam ke Menit Anda adalah :"<<hasil1<< " menit";
    }
    else if(satuanwaktu==2)
    {
        cout<< "Masukkan menit berapa :";
        cin >> mmdt;
        hasil2=mmdt*60;
        cout <<"Hasil Pengubahan satuan waktu Menit ke Detik  Anda adalah :"<<hasil2<< " detik";
    }


    cout << "START";
    limit =40;
    cin >> nickname1<<endl;
    cin>> nickname2<<endl;
    cin>> limitpoint1<<endl;
    cin>> limitpoint2<<endl;
    if(limitpoint1<limitpoint2)
    {
        cout << "pilih box 1/2/3"
        cin>> box;
        if(box==1)
        {
            cout<< "Anda mendapatkan angka 20"
            a=limitpoint1+20;
            if(a>limit)
            {
                POIN=limit - (a) + Limit;
                cout<< "POINT anda adalah :" <<POINT;
            }
            else(a<limit)
            {
                POIN= POIN + 20;
                cout<< "POINT anda adalah :" <<POINT;
            }
        }
        if(box==2)
        {

        }
        if(box==3)
        {

        }
    }





}
