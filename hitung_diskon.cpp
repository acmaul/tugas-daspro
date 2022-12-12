#include <iostream>

using namespace std;

int main()
{
	float total_pembelian, diskon, total_bayar;
	cout << "Masukan total pembelian : "; cin >> total_pembelian;

	cout << "Total pembelian : " << total_pembelian << endl;
	if(total_pembelian > 100000){
		diskon = total_pembelian * 0.20;
		cout << "Selamat anda mendapatkan diskon 20%" << endl;
	} else if ((total_pembelian > 50000) && (total_pembelian <= 100000)){
		diskon = total_pembelian * 0.15;
		cout << "Selamat anda mendapatkan diskon 15%" << endl;
	} else if ((total_pembelian >= 10000) && (total_pembelian <= 50000)){
		diskon = total_pembelian * 0.10;
		cout << "Selamat anda mendapatkan diskon 10%" << endl;
	} else if (total_pembelian < 10000){
		diskon = 0;
		cout << "Maaf anda tidak mendapatkan diskon" << endl;
	} else {
		cout << "Harga tidak valid" << endl;
	}

	total_bayar = total_pembelian - diskon;
	cout << "Detail Pembayaran : " << total_pembelian << " - " << diskon << " = " << total_bayar << endl;
	
	return 0;
}
