// Dibaca durasi waktu dalam detik. Tulislah Algoritma untuk mengkonversi durasi 
// waktu tersebut ke dalam hari, jam, menit, detik.

#include <iostream>

using namespace std;

struct Waktu {
    int detik;
    int menit;
    int jam;
    int hari;
};

int main(){
    Waktu w;
    cout << "Masukkan durasi waktu dalam detik: ";
    cin >> w.detik;
    w.hari = w.detik / (60 * 60 * 24);
    w.jam = (w.detik / (60 * 60)) % 24;
    w.menit = (w.detik / 60) % 60;
    w.detik = w.detik % 60;

    cout << w.detik << " detik setara dengan :" << endl;
    cout << "-> " << w.hari << " hari" << endl;
    cout << "-> " << w.jam << " jam" << endl;
    cout << "-> " << w.menit << " menit" << endl;
    cout << "-> " << w.detik << " detik" << endl;

    return 0;
}