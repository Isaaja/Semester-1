/* Judul    : Membuat Nilai Hasil Studi
    Nama    : Isa Iant Maulana
    NIM     : A11.2022.14416
    Tanggal : 19 09 22 */


// Kamus :


//deskripsi :
#include <iostream>
using namespace std;

                                float nilai1,nilai2,nilai3,nilai4,nilai5,nilai6,nilai7,sks1,sks2,sks3,sks4,sks5,sks6,sks7,totalsks,totalnilai,ratarata;
                                string nama,nim;
int main()
 {




                cout<< "masukkan data nama anda :";
                cin >> nama;
                cout << "Masukkan data NIM anda :";
                cin >> nim;
                cout<<endl;


                cout << "Masukkan data sks KALKULUS 1 :";
                cin >> sks1;
                cout << "Masukkan data sks DASAR PEMROGRAMAN :";
                cin >> sks2;
                cout << "Masukkan data sks MAT. DISKRIT :";
                cin >> sks3;
                cout << "Masukkan data sks EMROGRAMAN BERBASIS WEB :";
                cin >> sks4;
                cout << "Masukkan data sks ORGANISASI DAN ARSITEKTUR KOMPUTER :";
                cin >> sks5;
                cout << "Masukkan data sks DASAR DASAR KOMPUTASI :";
                cin >> sks6;
                cout << "Masukkan data sks PENGANTAR TEKNOLOGI INFORMASI :";
                cin >> sks7;
                cout <<endl;
                cout << "Masukkan data nilai KALKULUS 1 :";
                cin>> nilai1;
                cout << "Masukkan data nilai DASAR PEMROGRAMAN :";
                cin>> nilai2;
                cout << "Masukkan data nilai MAT. DISKRIT :";
                cin>> nilai3;
                cout << "Masukkan data nilai PEMROGRAMAN BERBASIS WEB :";
                cin>> nilai4;
                cout << "Masukkan data nilai ORGANISASI DAN ARSITEKTUR KOMPUTER :";
                cin>> nilai5;
                cout << "Masukkan data nilai DASAR DASAR KOMPUTASI :";
                cin>> nilai6;
                cout << "Masukkan data nilai  PENGANTAR TEKNOLOGI INFORMASI :";
                cin>> nilai7;
                cout <<endl;
                cout <<endl;
                cout <<endl;
                totalsks = (sks1+sks2+sks3+sks4+sks5+sks6+sks7);
                totalnilai = (nilai1+nilai2+nilai3+nilai4+nilai5+nilai6+nilai7);
                ratarata = (totalnilai/totalsks);
                cout<< "Membuat Laporan Data Nilai Hasil Studi" <<endl;
                cout << "Dibuat oleh :" << nama <<endl;
                cout << endl;
                cout << "Nama Mata Kuliah                             " <<" SKS        "<<                " Nilai  "            <<endl;
                cout <<endl;
                cout <<endl;
                cout <<endl;
                cout << " KALKULUS 1                                    "  << sks1 <<"           "              <<nilai1              <<endl;
                cout << " DASAR PEMROGRAMAN                             "  << sks2 <<"           "              <<nilai1              <<endl;
                cout << " MAT. DISKRIT                                  "  << sks3 <<"           "              <<nilai1              <<endl;
                cout << " PEMROGRAMAN BERBASIS WEB                      "  << sks4 <<"           "              <<nilai1              <<endl;
                cout << " ORGANISASI DAN ARSITEKTUR KOMPUTER            "  << sks5 <<"           "              <<nilai1              <<endl;
                cout << " DASAR DASAR KOMPUTASI                         "  << sks6 <<"           "              <<nilai1              <<endl;
                cout << " PENGANTAR TEKNOLOGI INFORMASI                 "  << sks7 <<"           "              <<nilai1              <<endl;
                cout <<endl;
                cout << "                                          Jumlah SKS   "<<  "Jumlah Nilai"<< "       Rata-Rata   "<<endl;
                cout << "                                              "<< totalsks <<"             "<<totalnilai<<"                 "<<ratarata<<endl;







                return 0;








}
