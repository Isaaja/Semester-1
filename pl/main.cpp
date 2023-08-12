#include <iostream>

using namespace std;

int main()
{
 string pilihan;

 cout << "Menu pilihan makanan" << endl;
 cout << "1. Nasi goreng " << endl;
 cout << "2. Nasi padang " << endl;
 cin >> pilihan;


    if (pilihan == "1"){
        cout << "Anda memilih nasi goreng" << endl;
}
    else if (pilihan == "2"){
        cout << " Anda memilih nasi padang" << endl;
}
    else {
        cout<< " input tifak sesuai" << endl;
}
}
