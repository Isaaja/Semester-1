//judul 	: array lanjut 11 nov 2022
#include <iostream>
using namespace std;
//kamus
int Tabumur[13],posisi[12];
float ArrBeratBadan[10],AvgRata ;
int	  Maximum,TabLength,Sumini,x,y,z,caricari,w,banyak,M,i,nasgor;
bool  ketemu;

//deskripsi
int main ()
{
    cout<<"menyisipkan data umur"<<endl;
    Tabumur[0]=17;
	Tabumur[1]=18;
	Tabumur[2]=17;
	Tabumur[3]=34;
	Tabumur[4]=46;
	Tabumur[5]=22;
	Tabumur[6]=17;
	Tabumur[7]=18;
	Tabumur[8]=35;
	Tabumur[9]=34;
	Tabumur[10]=17;
	Tabumur[11]=18;
	//sesuaikan data

	cout<<"menyisipkan data berat badan"<<endl;
	ArrBeratBadan[0]=34.9;
	ArrBeratBadan[1]=74.19;
	//

	// tampilkan TabUmur & ArrBeratBadan
	TabLength=0;
	x=0;
	do
	{
		TabLength=TabLength + 1;
		x=x + 1;
	}while(x<12);

	// jumlah isi tabel
	Sumini=0;
	y=0;
	do
	{
	    cout<<Tabumur[y]<<endl;
		Sumini=Sumini + Tabumur[y];
		y=y + 1;
	}while(y<12);
	// rata isi tabel
	AvgRata=Sumini / TabLength;
    cout<<"Rata-rata "<< AvgRata<<endl;
    //mengurutkan data
    x=0;
    do{
        y=x+1;
        while(y<12)
        {
            if(Tabumur[x]<Tabumur[y])
            {
                nasgor=Tabumur[x];
                Tabumur[x]=Tabumur[y];
                Tabumur[y]=nasgor;

            }y++;
        }x++;
    }while(x<12);
    cout << "data terbesar ke terkecil"<<endl;
    x=0;
   while(x<12)
   {
       cout<< Tabumur[x]<< " ";
       x++;
   }
   cout<<endl;
   x=0;
    do{
        y=x+1;
        while(y<12)
        {
            if(Tabumur[x]>Tabumur[y])
            {
                nasgor=Tabumur[x];
                Tabumur[x]=Tabumur[y];
                Tabumur[y]=nasgor;

            }y++;
        }x++;
    }while(x<12);
   cout << "data terkecil ke besar"<<endl;
    x=0;
   while(x<12)
   {
       cout<< Tabumur[x]<< " ";
       x++;
   }
	// pencarian nilai terbesar
	Maximum=Tabumur[0];  // in code index ke 0
	z=0;
	do
	{
		if (Tabumur[z] > Maximum)
			{
				Maximum=Tabumur[z];
			}
		z=z + 1;
	}while(z<10);
	cout<<endl;

	//pencarian sebuah data pada array
	cout<<"masukan yang dicari"<<endl;
	cin>>caricari;
	banyak= 0;
	w =1;
	do
	{
		if (Tabumur[w] == caricari)
		{
			ketemu=true;	//ketemu <--boolean 	// bool ketemu; <- di c++
			posisi[banyak]=w;
			banyak=banyak + 1;
		}
		w =w + 1;
	}while(w<10);

	if(ketemu == true)
	 {
		cout<<"yg dicari "<< caricari<< " ditemukan sebanyak "<< banyak;
		cout<<" di lokasi indek ke = ";
		M=0;
		do
		{
			cout<<posisi[i];
			M = M + 1;
		}
		while(M <banyak);

	  }
	else
	  {
		cout<<"yg saya cari "<< caricari<< " rak ktemu"<<endl;
	  }
    cout<<endl;

    cout<< "Data Usia"<<endl;


}
