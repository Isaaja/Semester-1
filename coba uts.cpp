#include <iostream>
using namespace std;

int n,c;
float k;
int main()
{
    n=100;
    cout << "Jumlah N : " <<n<<endl;
    cout << " List Konversi Celcius ke Fahrenheit"<<endl;
    cout << "   Celcius   " << "   Fahrenheit   "<<endl;
    cout << "----------------------------" <<endl;
    for (int c=0; c<=n ;c+=20)
    {
        k= c+274.15;
        cout <<"\t"<< c << "\t" <<k<<endl;
    }

}
