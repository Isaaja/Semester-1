#include <iostream>
using namespace std;

int main(){
string kata;
int i, n;
bool palindrome = true;
cout<< "Program mengecek kata - kalimat palindrome atau bukan"<<endl;
cout<< "Input kata: ";
cin >> kata;
getline(cin>> ws, kata);
n = kata.length();
for (i=0; i<n; i++){
    if(kata[i] != kata[n-i-1])
    {
        palindrome = false;
        break;
    }
}
    cout<< "Result: ";
    if(palindrome ==true)
        cout<< "Palindrome";
    else
        cout<< "Bukan Palindrome";
    cin.ignore();
    return 0;


}
