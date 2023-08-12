/*judul   : mendeteksi 2 buah variabel
  Nama    : Isa Iant Maulana
  Project : UAS Daspro
            Soal A nomer 1
*/
#include <iostream>
using namespace std;
//kamus
int a,b,sama;

int main(){
    cout<< "Masukkan nilai/angka di variable a : ";
    cin >> a;
    cout<< "Masukkan nilai/angka di variable b : ";
    cin>> b;

    if(b == a ){
        cout<< "Angka yang anda masukkan sama yaitu : "<< a << " dan " << b;
    }
    else{
        cout << "Angka yang anda masukkan tidak sama";
    }

}
