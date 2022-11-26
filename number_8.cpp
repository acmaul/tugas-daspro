// Buatlah algoritma dan program untuk membaca sebuah jam (hh:mm:ss), lalu
// menentukan jam berikutnya setelah penambahan satu detik. Misalnya
// 23:59:59 menjadi 00:00:00. Keluaran ditampilkan ke layar.

#include <iostream>
#include <iomanip>

using namespace std;

typedef struct {
    int hh;
    int mm;
    int ss;
} Time;


int main(){
	Time waktu;
	cout << "Masukkan jam (hh): "; cin >> waktu.hh;
	cout << "Masukkan menit (mm): "; cin >> waktu.mm;
	cout << "Masukkan detik (ss): "; cin >> waktu.ss;

	if(waktu.ss <= 60 && waktu.mm <= 60 && waktu.hh <= 24){
		waktu.ss = waktu.ss + 1;
		if (waktu.ss == 60){
			waktu.ss = 00;
			waktu.mm = waktu.mm + 1;
		}
		if (waktu.mm == 60){
			waktu.mm = 00;
			waktu.hh = waktu.hh + 1;
		}
		if (waktu.hh == 24){
			waktu.hh = 00;
		}
		// cout dengan prefix angka 0 jika angka tersebut 1 digit
		cout << "Setelah ditambah satu detik maka jam selanjutnya adalah " << setw(2) << setfill('0') << waktu.hh << ":" << setw(2) << setfill('0') << waktu.mm << ":" << setw(2) << setfill('0') << waktu.ss << endl;
	} else {
		cout << "Format jam yang anda masukkan salah" << endl;
	}
	return 0;
}