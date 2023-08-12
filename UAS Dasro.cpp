#include <iostream>
using namespace std;
int a,b;
int angka;

int main(){
    a=1;
    b=2;

    cout << "Cari Angka yang Anda inginkan "; cin>> angka;
    if (angka==a){
        cout<< "Ketemu di a yaitu "<< a ;
    }

    else if (angka==b){
        cout<< "Ketemu di b yaitu "<< b;
    }
    else{
        cout<< "Tidak Ditemukan ";
    }

}
