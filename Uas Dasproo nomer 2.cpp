/*judul   : mendeteksi Apakah Isi dari variable array sama
  Nama    : Isa Iant Maulana
  Project : UAS Daspro
            Soal A nomer 2
*/
#include <iostream>
using namespace std;
//kamus
int wadah [15],data,i,y,z;
int baskom [15];
int main(){
    cout << " Mendeteksi apakah ada data Wadah dan Basklom ada yang sama atau tidak "<<endl;
    cout<< " Masukkan jumlah data Wadah dan Baskom : ";
    cin >> data;
    i=1;
    while(i<=data){
        cout<< "Masukkan nilai data Wadah "<< i << " : ";
        cin>> wadah[i];
        cout<< " ";
        i++;
    }
    cout<< endl;
    y=1;
    while(y<=data){
        cout << "Masukkan nilai data Baskom " << y << " : ";
        cin>> baskom [y];
        cout<< " ";
        y++;
    }

        if (wadah[i<data] == baskom [y<data]){
         cout<< " ISI sama ";
        }
        else if(wadah[data] == baskom [data])
        {
        cout<< "  ISI tidak sama ";
        }

        else{
        cout<< " ISI tidak sama";

    }
}

