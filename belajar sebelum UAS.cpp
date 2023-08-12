#include <iostream>
using namespace std;

//kamus
int ArrKalimat [10], ArrKata [5], posisi[5],tabKalimat;
int p,q,CARI,angka;
int data,wadah[10],y,z;
int x,Sumini,baskom;
float average;
//deskripsi
int main(){

ArrKalimat [0] = 5;
ArrKalimat [1] = 7;
ArrKalimat [2] = 9;
ArrKalimat [3] = 5;
ArrKalimat [4] = 5;
ArrKalimat [5] = 5;
p=5;
q=0;
    while (q<5)
  {
    ArrKalimat[q] = ArrKata[p];
    p--;
    while(q<5)
    {
    cout<< ArrKalimat[q];
    q++;
    }
  }
 cout << "latihan search array "<< "Masukkan jumlah data "; 
 cin >> data;
 int i=0;
 while (i<data){
    cin>> wadah[i];
    i++;
 }
    while (y<data){
        cout<< wadah[y];
        y++;
    }
    cout<<endl;
//tampilkan isi data
cout << "Tampilkan data ArrKalimat : " <<endl;

    tabKalimat=0;
    x=0;
    do{
        tabKalimat++;
        x++;
    }while(x<4);

Sumini = 0;
z=0;

    do{
        cout<<ArrKalimat[z]<<endl;
        Sumini = Sumini + ArrKalimat[z];
        z++;
    } while(z<4);
    cout<<endl;

    //rata-rata
    cout<< "Rata-rata tersebut ialah : ";
average= Sumini/tabKalimat;
cout<< average<<endl;
    //bilangan terbesar

x=0;
do{
        y=x+1;
        while(y<0){
          if(ArrKalimat[x] > ArrKalimat[y])
            {
            baskom  = ArrKalimat[x];
            ArrKalimat[x] = ArrKalimat[y];
            ArrKalimat[y] = baskom;
            } y++;
        }x++;
}while(x<4);
 cout<< "Nilai Terbesar ke Terkecil : ";
x=0;
while(x<4){
    cout<< ArrKalimat[x]<<" ";
    x++;
}
}
