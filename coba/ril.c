#include<iostream>
using namespace std;

int main() {
    string menu;
    cout<<"--Menu yang tersedia--"<<endl;
    cout<<"1. Coto"<<endl;
    cout<<"2. Nasgor:"<<endl;
    cout<<"Masukkan menu yang ingin anda pesan :"<<endl;
    cin>>menu;

    if (menu == "Coto"){
        cout<<"Anda memesan Coto"<<endl;
    } else if (menu == "Nasgor"){
        cout<<"Anda memesan Nasgor"<<endl;
    } else {
        cout<<"Menu yang anda pesan tidak tersedia"<<endl;
    }

    cout<<"--Terima kasih--"<<endl;
}
