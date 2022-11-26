// Dibaca dua buah tanggal (dd:mm:yy). Tulislah algoritma untuk menghitung berapa 
// hari jarak kedua tanggal tersebut. Asumsikan: 1 tahun=365 hari, 1 bulan=30 hari. 
// Output (tahun, bulan,hari) ditampilkan ke layar.

#include <iostream>

using namespace std;

typedef struct {
    int dd;
    int mm;
    int yy;
} Date;

int main(){
    Date tanggal1, tanggal2, selisih;
    int totalHari;

    cout << "Masukkan tanggal pertama (dd:mm:yy): " << endl;
    cout << "Masukkan tanggal pertama (dd): ";
    cin >> tanggal1.dd;
    cout << "Masukkan bulan pertama (mm): ";
    cin >> tanggal1.mm;
    cout << "Masukkan tahun pertama (yy): ";
    cin >> tanggal1.yy;

    cout << "Masukkan tanggal kedua (dd:mm:yy): " << endl;
    cout << "Masukkan tanggal kedua (dd): ";
    cin >> tanggal2.dd;
    cout << "Masukkan bulan kedua (mm): ";
    cin >> tanggal2.mm;
    cout << "Masukkan tahun kedua (yy): ";
    cin >> tanggal2.yy;

    bool validasiBulan = tanggal1.mm >= 1 && tanggal1.mm <= 12 && tanggal2.mm >= 1 && tanggal2.mm <= 12;
    bool validasiTanggal = tanggal1.dd >= 1 && tanggal1.dd <= 30 && tanggal2.dd >= 1 && tanggal2.dd <= 30;

    if (validasiBulan && validasiTanggal){
        selisih.yy = tanggal2.yy - tanggal1.yy;
        selisih.mm = tanggal2.mm - tanggal1.mm;
        selisih.dd = tanggal2.dd - tanggal1.dd;
        totalHari = selisih.yy * 365 + selisih.mm * 30 + selisih.dd;

        cout << "Jarak antara tanggal " << tanggal1.dd << ":" << tanggal1.mm << ":" << tanggal1.yy << " dan tanggal " << tanggal2.dd << ":" << tanggal2.mm << ":" << tanggal2.yy << " adalah " << totalHari << " hari" << endl;
    } else {
        cout << "Input tidak valid, Silakan coba lagi" << endl;
    }


    return 0;
}
