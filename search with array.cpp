// JUDUL : search pakai array
// sort search
#include <iostream>
#include <string.h>
using namespace std;


// KAMUS
	float wadah[20];
	int x, y, z,a;
    float CARI;

// DISKRIPSI
main()
{

	cout << "masukan angka yang akan di cari = "; cin >> CARI;
    z = 0;
	while(z < 10)
    {
           if (wadah[z] == CARI)
           {
                    cout << "ketemu di " << z << endl;
            }
           else if (wadah[z]!=CARI)
           {
                    cout << " tidak ketemu di " <<a<<endl;
            }

        z = z + 1;
    }

}
