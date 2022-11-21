// Buatlah algoritma dan program untuk membaca sebuah jam (hh:mm:ss), lalu
// menentukan jam berikutnya setelah penambahan satu detik. Misalnya
// 23:59:59 menjadi 00:00:00. Keluaran ditampilkan ke layar.

#include <iostream>

using namespace std;

struct Time {
    int hh;
    int mm;
    int ss;
};


int main(){
    Time waktu;
    cout << "Masukkan jam (hh): "; cin >> waktu.hh;
    cout << "Masukkan menit (mm): "; cin >> waktu.mm;
    cout << "Masukkan detik (ss): "; cin >> waktu.ss;
    waktu.ss = waktu.ss + 1;
    if (waktu.ss == 60){
        waktu.ss = 00;
        waktu.mm = waktu.mm + 1;
        if (waktu.mm == 60){
            waktu.mm = 00;
            waktu.hh = waktu.hh + 1;
            if (waktu.hh == 24){
                waktu.hh = 00;
            }
        }
    }

    cout << "Setelah ditambah satu detik maka jam selanjutnya adalah " << waktu.hh << ":" << waktu.mm << ":" << waktu.ss << endl;
}