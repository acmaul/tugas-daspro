// Sebuah proyek dikerjakan selama x hari. Tulislah algoritma untuk mengkonversi
// berapa tahun, berapa bulan, dan berapa hari proyek tersebut dikerjakan. Asumsikan: 
// 1 tahun=365 hari, 1 bulan=30 hari. Keluaran (tahun, bulan, hari) ditampilkan ke layar.

#include <iostream>

using namespace std;

struct Time {
    int tahun;
    int bulan;
    int hari;
};

int main(){
    Time waktu_proyek;
    int sisa, hari_proyek;
    cout << "Masukkan lama proyek dalam hari: "; cin >> hari_proyek;

    // Konversi dari hari ke tahun
    waktu_proyek.tahun = hari_proyek / 365;

    // Sisa hari dari tahun tersebut
    sisa = hari_proyek % 365;

    // Konversi dari sisa hari ke bulan
    waktu_proyek.bulan = sisa / 30;

    // Sisa hari dari bulan tersebut
    waktu_proyek.hari = sisa % 30;

    cout << "Proyek tersebut dikerjakan selama " << waktu_proyek.tahun << " tahun + " << waktu_proyek.bulan << " bulan + " << waktu_proyek.hari << " hari" << endl;



    return 0;
}