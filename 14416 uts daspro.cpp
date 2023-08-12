/*  Judul
    Nama    : Isa Iant Maulana
    NIM     : A11.2022.14416
    Tanggal : 25 10 2022 */

//kamus
#include <iostream>
using namespace std;
int x,jumlah,y,d;
//deskripsi
int main()
{
    x=3;
    while (x<40)
    {
        cout << x << " " ;

    if (x %2==0)
    {
        d=d+1;
        jumlah=jumlah+x;
        if(x%8==0)
        {
            y=y+1;
        }
    }
    x=x+3;
    }
    cout <<endl;
    cout << " Ada berapa jumlah bil genap = ";
    cout << d <<endl;
    cout << " Berapa total jumlah bil genapnya = ";
    cout << jumlah <<endl;
    cout << " Ada berapa bilangan genap yang habis (tidak ada sisa) jika dibagi 8 = ";
    cout << y;


}
