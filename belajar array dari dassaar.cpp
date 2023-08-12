#include <iostream>
using namespace std;

int Y,T,R,E,W,baris,kolom;
int TabUmur[5];
int MatA[5],MatB[5],MatHasil[5],p,x;
int MatrA[4][3],MatrB[4][3],MatrValues[4][3];
//2=baris 3=kolom
int main()
{
    cin>> Y;
    cin>> T;
    cin>> R;
    E=10;
    W=25;
    TabUmur[0]=10;
    TabUmur[1]=20;
    cin>>TabUmur[2];
    cin>>TabUmur[3];
    TabUmur[4]=3;
    TabUmur[5]=52;


    cout<< " Hasil"<<endl;
    cout<< TabUmur[0]<<endl;
    cout<< TabUmur[1]<<endl;
    cout<< TabUmur[2]<<endl;
    cout<< TabUmur[3]<<endl;
    cout<< TabUmur[4]<<endl;
    cout<< TabUmur[5]<<endl;
    cout << Y <<" "<< T<< " "<<R<< " "<<E<< " "<<W<<endl;
    cout<< "MatA dan MatB Hasil"<<endl;
    MatB[0]=20;
    MatB[1]=10;
    MatB[2]=30;
    MatB[3]=60;
    MatB[4]=40;
    p=0;
    do{
        cin>> MatA[p];
        p++;
    }while (p<5);
    x=0;
    while(x<5){
    MatHasil[x]=MatA[x] + MatB[x];
    cout<< MatHasil[x]<< " ";
    x++;
    }
    cout<<endl;
    cout<< "Matriks izi"<<endl;
    baris=0;
    while(baris<1)
    {
        kolom=0;
        do{
        cin>>MatrA[kolom][baris];
        cin>>MatrB[kolom][baris];
        MatrValues[kolom][baris]= MatrA[kolom][baris] + MatrB[kolom][baris];
        kolom++;
    }while(kolom<1);
    baris++;
    }
    baris=0;
    while(baris<1)
    {
        kolom=0;
        do{
            if(MatrValues[kolom][baris]%2==0)
            {
                cout<< "666";
            }
            else
            {
                cout<< MatrValues[kolom][baris];
            }
            kolom++;

        }while(kolom<1);
        baris++;
    }



}
