// JUDUL : search tanpa array
// sort search
#include <iostream>
using namespace std;

// KAMUS
	float	A;
	int Be, Ce;
    float CARI;

	// DISKRIPSI
main()
{
    cout << " latian sort search" << endl;
	cin >> A;
	cin >> Be;
	cin >> Ce;
    cout << "masukan angka yang akan di cari = "; cin >> CARI;

    if (A == CARI)
    {
        cout << "ketemu seng tak golekki" << endl;
    }
		else    if (Be == CARI)
                    {
                        cout << "ketemu seng tak golekki" << endl;
                    }
                else	if (Ce == CARI)
                        {
                            cout << "ketemu seng tak golekki" << endl;
                        }
                        else
                            {
                                cout << "tidak ktemu";
                            }

}
