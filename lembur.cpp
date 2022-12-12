#include <iostream>

using namespace std;

// Deklarasi
typedef struct {
	int gol_A = 4000;
	int gol_B = 5000;
	int gol_C = 6000;
	int gol_D = 7500;
	int lembur = 3000;
} Upah;


int main() {
	Upah upah1;

	string nama;
	int total_jam_kerja, jam_lembur, total_upah;
	char gol;

	// Algoritma
	cout << "Nama Karyawan : "; getline(cin, nama);
	cout << "Golongan (A/B/C/D) : "; cin >> gol;
	cout << "Jumlah jam kerja : "; cin >> total_jam_kerja;

	if(total_jam_kerja > 48){
		jam_lembur = total_jam_kerja - 48;
	} else {
		jam_lembur = 0;
	}

	if ((gol == 'a') || (gol == 'A')){
		total_upah = ((total_jam_kerja - jam_lembur) * upah1.gol_A) + (jam_lembur * upah1.lembur);
	} else if ((gol == 'b') || (gol == 'B')){
		total_upah = ((total_jam_kerja - jam_lembur) * upah1.gol_B) + (jam_lembur * upah1.lembur);
	} else if ((gol == 'c') || (gol == 'C')){
		total_upah = ((total_jam_kerja - jam_lembur) * upah1.gol_C) + (jam_lembur * upah1.lembur);
	} else if ((gol == 'd') || (gol == 'D')){
		total_upah = ((total_jam_kerja - jam_lembur) * upah1.gol_D) + (jam_lembur * upah1.lembur);
	} else {
		cout << "Golongan tidak ditemukan";
	}

	cout << "Nama Karyawan : " << nama;
	cout << " dengan golongan " << gol;
	cout << " mendapatkan Gaji Rp. " << total_upah << endl;


	return 0;   
}