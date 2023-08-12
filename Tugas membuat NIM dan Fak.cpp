/*judul     =   Buatlah program deteksi prodi mahasiswa berdasarkan NIM dengan ketentuan:
                A11 = FIK S1 Teknik Informatika
                A21 = FIK D3 Manajemen Informatika
                B11 = FEB S1 Manajemen
                B21 = FEB D3 Akutansi
  Nama      =   Isa Iant Maulana
  NIM       =   A11.2022.14416
  Tanggal   =   4 10 22 */
  #include <iostream>
  using namespace std;

//kamus
char fak;
string nim;
//deskripsi
int main()
{
    cout <<" latihan switch case"<<endl;
    cout <<"Masukkan fakultas anda"<<endl;
    cout << " A = FIK " <<endl;
    cout << " B = FEB "<<endl;
    cout << "Masukkan Huruf A,B : ";cin>> fak;

    switch (toupper(fak))
{


        case 'A':

        {
            cout << " Anda memilih Fakultas Ilmu Komputer"<<endl;
            if(fak = 'A')
       {

           cout << " Pilih Prodimu!! " <<endl;
           cout << " Masukkan NIM anda " <<endl;
           cin >> nim;
           cout << nim <<endl;
                if ((nim == "A11" ) or (nim== "a11"))
                {
                    cout << " Kamu Prodi S1 Teknik Informatika";
                }

                else if ((nim == "A21" ) or (nim== "a21"))
                {
                    cout << " Kamu Prodi D3 Sistem Informasi";

                }

       }




            break;
        }

        case 'B':


        {
            cout <<"Anda memilih Fakultas Ekonomi dan Bisnis"<<endl;
            if(fak = 'B')
       {

           cout << "Masukkan NIM anda : " <<endl;
            cin >> nim;
           cout << nim <<endl;
            if ((nim == "B11" ) or (nim== "b11"))
                {
                    cout << " Kamu Prodi Manajemen";
                }

                else if ((nim == "B21" ) or (nim== "b12"))
                {
                    cout << " Kamu Prodi Akutansi";

                }

                else
                {
                    cout << "ERRORRRRRRRRR";
                }


       }

            break;

        }




}
}

