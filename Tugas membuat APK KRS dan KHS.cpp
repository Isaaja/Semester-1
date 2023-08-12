/* Judul    : Membuat Nilai Hasil Studi
    Nama    : Isa Iant Maulana
    NIM     : A11.2022.14416
    Tanggal : 19 09 22 */


// Kamus :


//deskripsi :
#include <iostream>
#include <string.h>
using namespace std;

string Nilai,nama;
int asc,jumlah,i,nilai,Nilai2,Sks,total,rata;
 main()
{
    cout << "Nama Anda :";
    getline(cin>>ws, nama);
    cout << "Masukkan jumlah Matkul Anda: ";
    cin >> jumlah;

    for(i=0; i<jumlah; i++)
    {
        cout << "Masukkan Mata Kuliah " << (i+1) << " : ";
       getline(cin>>ws,Nilai);
    }
    for (i=0; i<jumlah; i++)
    {
        cout << " Masukkan SKS Mata Kuliah " << (i+1) << " : ";
        cin >> Sks;
    }
    for(int r=0; r<jumlah; r++)
    {
        cout << "Masukkan Nilai Mata Kuliah " << (r+1) << ": ";
        cin >> Nilai2;
         total= total + Nilai2;
         rata = total / jumlah ;
    }

    cout << " Jumlah Nilai " << nama << " adalah " << total<<endl;
    cout << " Rata-Rata Nilai " << rata;


    return 0;
}

