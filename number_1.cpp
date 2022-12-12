// Buatlah algoritma yang membaca nilai uang (rupiah) dalam kelipatan 25, lalu
// menentukan berupa nilai tukaran pecahan. Pecahan yang tersedia adalah Rp1000, 
// Rp100, Rp50 dan Rp25. Sebagai contoh, uang senilai Rp2775 setara dengan 2 
// buah pecahan Rp1000 ditambah 7 buah pecahan Rp100 ditambah 1 buah pecahan
// Rp50 ditambah 1 buah pecahan Rp25

#include <iostream>

using namespace std;

int main(){
	int uang, sisa, n1000, n100, n50, n25;
	cout << "Masukkan nilai uang dalam kelipatan 25: ";
	cin >> uang;
	if(uang % 25 == 0){
		n1000 = uang / 1000;
		sisa = uang % 1000;
		n100 = sisa / 100;
		sisa = sisa % 100;
		n50 = sisa / 50;
		sisa = sisa % 50;
		n25 = sisa / 25;
		cout << "Uang senilai " << uang << " setara dengan ";
		cout << n1000 << " buah pecahan Rp1000 ditambah ";
		cout << n100 << " buah pecahan Rp100 ditambah ";
		cout << n50 << " buah pecahan Rp50 ditambah ";
		cout << n25 << " buah pecahan Rp25" << endl;
	} else {
		cout << "Nilai uang yang anda masukan bukan pecahan 25" << endl;
	}

	return 0;
}