#include <iostream>

using namespace std;

int main()
{
    int nilai[20];
    int i;
    int size;
    cout<<"Masukkan jumlah nilai : ";
    cin>>size;
    i=1;
    while(i<=size){
        cin>>nilai[i];
        i++;
    }
    cout<<endl;
    i=size;
    while(i>=1){
        cout<< nilai[i] << " ";
        i--;
    }
    return 0;
}
