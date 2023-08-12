/*  Judul   = Membuat bilangan terbesar ke terkecil atau sebaliknya
    Nama    = Isa Iant Maulana
    NIM     = A11.2022.14416
    Tanggal = 4 10 22 */

#include <iostream>
using namespace std;
//kamus
int a,b,c,d,e;

//Deskripsi
int main ()
{
    cout <<"Mengurutkan Bilangan dari yang terkecil sampai yang terbesar" << endl;
    cout <<"Masukan nilai 1 :" ;
    cin >> a;
    cout <<"masukan nilai 2 :" ;
    cin >> b;
    cout <<"Masikan nilai 3 :" ;
    cin >> c;
    cout <<"masukan nilai 4 :" ;
    cin >> d;
    cout <<"masukan nilai 5 :" ;
    cin >> e;

    if (a < b)
        swap(a, b);

    if (c < d)
        swap(c, d);

    if (a < c)
        swap(a, c);

    if (a < d)
        swap (a, d);

    if (a < e)
        swap (a, e);

    if (b < d)
        swap(b, d);

    if (b < e)
        swap (b, e);

    if (c < e)
        swap (c, e);
    if (d < e)
        swap (d, e);

    if (b < c)
        swap(b, c);

 cout << "Hasil Nilai terbesar anda ialah : " << a << " " << b << " " << c << " " << d << " " << e << endl;
 cout <<"dan hasil terkecil adalah : " << e << " " << d << " "<<c<< " " << b << " "<< a <<endl;

 return 0;
}
