/*  Judul   :Mengurutkan 5 Angka Terbesar ke Terkecil
    Nama    :Isa Iant Maulana
    NIM     :A11.2022.14416
    Tanggal :7 10 22 */

#include <iostream>
#include <conio.h>
using namespace std;

int jumlah, asc;

main()
{
    cout << "Masukan 5 Angka Anda: "<<endl;
    jumlah=5;
    int nilai[jumlah];

    for(int i=0; i<jumlah; i++){
        cout << "Nilai " << (i+1) << " : ";
        cin >> nilai[i];
    }

    for(int c=1;c<jumlah;c++)
    {
        for(int d=0;d<jumlah-c;d++)
        {
            if(nilai[d] < nilai[d+1])
            {
                asc=nilai[d];
                nilai[d]=nilai[d+1];
                nilai[d+1]=asc;
            }
        }
    }

    cout << endl << "Hasil Bilangan Terbesar ke Terkecil Adalah";
    for(int i=0;i<jumlah;i++)
    {        cout << " " << nilai[i];

    }
    cout << endl;
    getch;
    return 0;
}
