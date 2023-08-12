//Judul : Coba coba
//Nama : Isa Iant Maulana
//Tanggal : 10 september 2022
//Tempat : dirumayh Ardi
//Project : Belajar if else
//verwsi : terbaru



#include <iostream>

using namespace std;

int main()

{
   string kemungkinan;
   cout << " Ibu membuatkan nasi goreng " << endl;
   cout << "1. Ibu lapar " << endl;
   cout << "2. Adik LAPAR" << endl;
   cout << "3. semuanya benar" << endl;
   cout << "kemungkinan yang terjadi ialah" << endl;

   cin >> kemungkinan;

   if (kemungkinan == "Ibu lapar"){
   cout << "Jawaban anda salah" <<endl; }
   else if (kemungkinan == " Adik LAPAR") {
    cout << " Jawaban anda salah"<< endl;}
   else if  (kemungkinan == "semuanya benar") {
    cout << " Jawaban anda benar" << endl;
   }

}
