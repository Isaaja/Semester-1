#include <iostream>

using namespace std;

int main()
{
  short nilai;

  cout << "Seberapa besar cinta kamu ke aku:) (0 - 100): ";
  cin >> nilai;

  if (nilai >= 90 ) {
    cout << "MILIK GWEH" << endl;
  }
  else if (nilai >= 80 && nilai < 90) {
    cout << "Njir setengah setengah" << endl;
  }
  else if (nilai >= 60 && nilai < 80) {
    cout << "Dahlah" << endl;
  }
  else if (nilai >= 40 && nilai < 60) {
    cout << ":((" << endl;;
  }
  else if (nilai < 40) {
    cout << "wtfff" << endl;
  }
  else {
    cout << "Maaf, format nilai tidak sesuai" << endl;
  }


}
