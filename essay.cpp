// judul : kanan kiri oke
#include <iostream>
using namespace std;
//kamus
string Wword;
int n;
int i=0;
bool kanan_kiri;

int main(){
    kanan_kiri = true;
    cout<< "Input kata minimal 3 huruf : ";
    getline(cin, Wword);
    n=Wword.length();
    do{ if(Wword[i] != Wword[n-i-1]){
        kanan_kiri =false;
        break;
        }i++;
    }while(i <n );
    cout<< "Result :    ";
    if(kanan_kiri == true){
        cout << "Kanan Kiri Oke";
    }
    else{
        cout << "Tidak jadi ke kanan ataupun ke kiri";
    }
    cin.ignore();
    return 0;

}
