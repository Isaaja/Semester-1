/* Judul    : Membuat Aplikasi Deteksi Penyakit dan KRS
    Nama    : Isa Iant Maulana
    NIM     : A11.2022.14416
    Tanggal : 13 10 22 */


// Kamus :


//deskripsi :
#include <iostream>
#include <string.h>
using namespace std;

                                float totalsks,totalnilai,ratarata;
                                string nim,c;
                                string nama;
                                char awal;
                                int nilai1,nilai2,nilai3,nilai4,nilai5,nilai6,nilai7,sks1,sks2,sks3,sks4,sks5,sks6,sks7;
                                string a,b;
                                string satu,dua,tiga;

int main()
 {
    satu= "1";
    dua= "2";
    tiga= "3";
    Awal :
    cout << "Kamu sakit ya?? " <<endl;
    cout << "Sini konsultasi sama Dr. Isa Iant Maulana"<<endl;
    cout << "Gejalanya apa saja"<<endl;
    cout << "1. Demam dan keringat berlebih" <<endl;
    cout << "2. Pilek" <<endl;
    cout << "3. Sakit kepala dan nyeri otot" <<endl;
    cout << "Tuliskan gejala anda :  "<<endl;
    cin>> a;



    if(a== satu)
    {

        cout << "Apakah ada gejala lain?? "<<endl;
        cin>> b;
        if (b==dua)
        {
            cout << " Anda mungkin terkena COVID 19\n"<< "Silahkan anda tes PCR di Rumah Sakit terdekat"<<endl;
        }
        else if (b==tiga)
        {
            cout << "Anda mungkin terkena cacar monyet" <<endl;
        }
        else{
            cout << "Bisa saja DB,Tipes bahkan Covid"<<endl;
        }

    }
    else if (a==dua)
    {

        cout << "Apakah ada gejala lain?? "<<endl;
        cin>> b;
        if(b== tiga)
        {
        cout << "Anda mungkin masuk angin " <<endl;
        }
        else{
            cout << "Anda terkena FLU"<< endl;
        }
    }

    else if (a== tiga)
    {
        cout << " Anda terkena Cacar monyet "<< endl;
    }
    else
    {
        cout << "Input Tidak valdi"<<endl;
    }
        cout << "Apakah anda ingin mengulangi program?(Y/T) :";
        cin >> c;
    if((c=="Y") or (c=="y"))
    {
        goto Awal;
    }
    else if ((c== "T") or (c=="t"))
    {
        cout << "Program selesai ";
    }

return 0;

}

