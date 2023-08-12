#include <iostream>
using namespace std;
//kamus
int baskom[15];
int wajan[15];
int x,y,z,data;

//deskripsi
int main()
{
   cout << "Masukkan jumlah data : ";
   cin >> data;
   x=0;

   while(x<=data){
    cout << " Masukkan data baskom ke-" << x  << " : "<<endl;
    cin >> baskom[x];
    x=x+1;
   }
   cout<<endl;
   y=0;
   while (y<=data){
    cout << "Masukkan data wajan ke-" << y << " : "<<endl;
    cin >> wajan[y];
    y++;
   }

   if(baskom [x] == wajan [y]){
    cout << "Isi Sama";
   }
    else {
        cout << "Isi data tidak sama";
    }
}
