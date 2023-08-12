/*  judul   :menghitung durasi antar waktu
    Nama    : Isa Iant Maulana
    NIM     : A11.2022.14416
    Tanggal : 20 09 22
*/
// Kamus

int a,b;
int perkalian,pembagian,pengurangan,penjumlahan;
// Deskripsi
#include <iostream>
using namespace std;
main ()
{
  cout << "Selamat Datang di Kalkulator cerdas ini!!" << endl;
  cout << "Masukkan 2 angka yang ingin anda eksekusi" << endl;
  cin >> a ;
  cin >> b;
  perkalian = a*b;
  pembagian= a/b;
  pengurangan = a-b;
  penjumlahan= a+b;

  cout << " Hasil Perkalian : " << perkalian;
  cout << " | Hasil Pembagian : " << pembagian;
  cout << " | Hasil Pengurangan :  " << pengurangan;
  cout << " | Hasil Penjumlahan : " << penjumlahan<<endl;


  if (perkalian %2 ==0)
  {
      cout << "Bilangan perkalian ini termasuk genap";
  }

  else
  {
      cout << "Bilangan perkalian ini termasuk ganjil";
  }



}

