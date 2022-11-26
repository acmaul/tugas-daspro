// Berat badan ideal ada hubungannya dengan tinggi badan seseorang. Untuk
// menentukan berat badan ideal, tinggi badan dikurangi 100, lalu dikurangi lagi 
// dengan 10% dari hasil pengurangan pertama. Tulislah algoritma yang membaca 
// tinggi badan lalu menentukan berat badan yang ideal untuk tinggi tersebut.


#include <iostream>

using namespace std;

int main(){
	float tinggi_badan, berat_badan_ideal;
	cout << "Masukkan tinggi badan dalam cm: "; 
	cin >> tinggi_badan;
	berat_badan_ideal = (tinggi_badan - 100) - ((tinggi_badan - 100) * 0.1);
	cout << "Berat badan yang ideal adalah " << berat_badan_ideal << "kg" << endl;

	return 0;
}