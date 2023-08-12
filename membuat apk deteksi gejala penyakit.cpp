/*judul     =   Cek gejala penyakit
  Nama      =   Isa Iant Maulana
  NIM       =   A11.2022.14416
  Tanggal   =   14 10 22 */

#include <iostream>
#include <conio.h>
using namespace std;
//Kamus

string a,keluhan;
string satu,dua,tiga,nama;
int nilai,b,jumlah;

//Deskripsi

int main()
{

    cout << "Masukkan Nama :";
    getline(cin>>ws, nama);
    cout << "HAI!!! " << nama <<endl;
    cout << "Masukkan jumlah keluhan anda :";
    cin >> jumlah;
    for ( b=0; b<jumlah; b++)
    {
        cout << "Keluhan" << (b+1) <<endl;
        cin >> keluhan;
    }
}
