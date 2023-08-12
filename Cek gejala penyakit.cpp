/*judul     =   Cek gejala penyakit
  Nama      =   Isa Iant Maulana
  NIM       =   A11.2022.14416
  Tanggal   =   14 10 22 */

#include <iostream>
#include <conio.h>
using namespace std;
//Kamus

string a,b,keluhan,jumlah;
string satu,dua,tiga,nama;
int nilai;

//Deskripsi

int main()
{

    Awal :

    cout << "Masukkan Nama :";
    getline(cin>>ws, nama);
    cout << "HAI!!! " << nama <<endl << "Apakah kamu sakit?? (Y/T)";
    cin >> a;
    if (a=="T")
    {
        goto Akhir;
    }

    cout << "Masukkan jumlah keluhan anda :";
    cin >> jumlah;
    int nilai[jumlah];
    for ( b=0; b<jumlah; b++)
    {
        cout << "Keluhan" << (b+1) <<endl;
        cin >> keluhan;
    }
    Akhir;

}
