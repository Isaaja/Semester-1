/*  judul   :menghitung durasi antar waktu
    Nama    : Isa Iant Maulana
    NIM     : A11.2022.14416
    Tanggal : 20 09 22
*/
// Kamus

int a,b;
int perkalian,pembagian,pengurangan,penjumlahan;
float pangkat,akarA,akarB;
// Deskripsi
#include <iostream>
#include<conio.h>

#include<math.h>
using namespace std;

int main ()
{
  cout << "Selamat Datang di Kalkulator cerdas ini!!" << endl;
  cout << "Masukkan 2 angka yang ingin anda eksekusi" << endl;
  cin >> a ;
  cin >> b;
  perkalian = a*b;
  pembagian= a/b;
  pengurangan = a-b;
  penjumlahan= a+b;
  pangkat = pow(a,b);
  akarA = sqrt(a);
  akarB = sqrt(b);



  cout << " Hasil Perkalian : " << perkalian;
  cout << " | Hasil Pembagian : " << pembagian;
  cout << " | Hasil Pengurangan : " << pengurangan;
  cout << " | Hasil Penjumlahan : " << penjumlahan;
  cout << " | Hasil Pangkat bilangan anda  : " << pangkat <<endl;
  cout << " | Hasil Akar bilangan pertama anda  : " << akarA<< endl;
  cout << " | Hasil Akar bilangan kedua anda  : " << akarB<< endl;
  if (perkalian %2 == 0)
                {
                    cout << "Bilangan perkalian ini termasuk genap"<<endl;
                }

                    else
                        {
                            cout << "Bilangan perkalian ini termasuk ganjil"<<endl;
                        }


                        if (pembagian %2 == 0)
                            {
                                cout << "Bilangan pembagian ini termasuk genap"<<endl;
                            }

                            else
                                {
                                    cout << "Bilangan pembagian ini termasuk ganjil"<<endl;
                                }
                                if (pengurangan %2 == 0)
                                    {
                                        cout << "Bilangan pengurangan ini termasuk genap"<<endl;
                                    }

                                        else
                                            {
                                                cout << "Bilangan pengurangan ini termasuk ganjil"<<endl;
                                            }
                                                if (penjumlahan %2 == 0)
                                                    {
                                                        cout << "Bilangan penjumlahan ini termasuk genap"<<endl;
                                                    }

                                                        else
                                                            {
                                                                cout << "Bilangan penjumlahan ini termasuk ganjil"<<endl;
                                                            }

}

