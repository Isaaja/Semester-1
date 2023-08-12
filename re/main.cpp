#include <iostream>

using namespace std;
main() {
  int pil;
  cout << "Input Pilihan [1..2] :";
  cin >> pil;
  if (pil == 1) {
    cout << "Makanan" << endl;
    cout << "1. Mie Goreng " << endl;
    cout << "2. Mie Rebus " << endl;
    cout << "3. Nasi Goreng" << endl;
    cout << "Masukan Inputan [1..4] :";
    cin >> pil;
    if (pil == 1) {
      cout << "Anda Memilih Mie Goreng";
    } else if (pil == 2) {
      cout << "Anda Memilih Mie Rebus";
    } else if (pil == 3) {
      cout << "Anda Memilih Nasi Goreng";
    } else {
      cout << "Pilihan Hanya Ada Sampai 4 Saja...";
    }
  } else if (pil == 2) {
    cout << "Minuman" << endl;

    cout << "1. Es teh " << endl;
    cout << "2. Es jeruk " << endl;
    cout << "3. Es coklat" << endl;
    cout << "Masukan Inputan [1..4] :";
   } else {
    cout << "Piihan Anda Salah!!!";
  }
}
