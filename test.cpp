//Program GajiKaryawanPerMinggu//
#include<iostream>
using namespace std;
main()
{

	//DEKLARASI
	const int UL=3000;
	string NAMA;
	int JJK,UJ,Upah;
	char golongan;
	
	
	//ALGORITMA
	cout<<"Masukkan Nama : "; cin>>NAMA;
	cout<<"Masukkan Golongan (A-D): "; cin>>golongan;
	cout<<"Masukkan Jumlah Jam Kerja: "; cin>>JJK;
	
	if(golongan=='A'){
		UJ=4000;
		cout<<"Upah yang didapat perjam = Rp.4000" <<endl;
	} else if(golongan=='B'){
		UJ=5000;
		cout<<"Upah yang didapat perjam = Rp.5000" <<endl;
	} else if(golongan=='C'){
		UJ=6000;
		cout<<"Upah yang didapat perjam = Rp.6000" <<endl;
	} else if(golongan=='D'){
		UJ=7500;
		cout<<"Upah yang didapat perjam = Rp.7500" <<endl;
	} else{
		cout<<"Golongan Salah" <<endl;
	}
	Upah=JJK*UJ;
	
	if((JJK-48) >0){
		Upah=Upah+((JJK-48)*UL);
	} 
	
	cout<<endl <<endl;
	cout<<"Nama Karyawan: " <<NAMA <<endl;
	cout<<"Upah Perminggu: Rp." <<Upah;
}