/* Judul    : inputan string
    Nama    : Isa Iant Maulana
    NIM     : A11.2022.14416
    Tanggal : 19 09 22 */


// Kamus :


//deskripsi :
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

                                float panjang,lebar,tinggi,luaspermukaan,volume;
                                string nama;
                                string awal;
                                char c;
int main()
 {
                awal:
                cout<< "masukkan data nama anda :";
                getline(cin >>ws,nama);
                cout << "Masukkan data Panjang :";
                cin >> panjang;
                cout << "Masukkan data Lebar :";
                cin >> lebar;
                cout << "Masukkan data Tinggi :";
                cin>> tinggi;
                luaspermukaan =((2*panjang*lebar)+(2*panjang*tinggi)+(2*lebar*tinggi));
                volume= (panjang*lebar*tinggi);


                cout<< "Menghitung luas dan volume Benda Ruang" <<endl;
                cout << "Dibuat oleh :" << nama <<endl;
                cout << "Nama Benda Ruang : Kubus " << endl;
                cout << "Nama Field                                 " <<"Nilai"<<endl;
                cout <<endl;
                cout <<endl;
                cout <<endl;
                cout << " Panjang                                   " << panjang <<endl;
                cout << " Lebar                                     " << lebar <<endl;
                cout << " Tinggi                                    " << tinggi <<endl;
                cout << "Luasnya Permukaan : " << luaspermukaan <<endl;
                cout << "volumenya : " << volume << endl;
                cout << "Apakah anda ingin mengulangi program?(Y/T) :";
                cin >> c;
                if ((c=='Y') or (c=='y'))
                {
                    goto awal;
                }
                else if ((c== 'T') or (c=='t'))
                {
                    cout << "Program selesai ";
                }


                return 0;


}
