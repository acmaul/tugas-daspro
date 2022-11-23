// Seekor semut menempuh perjalanan sejauh x cm. Tulislah algoritma untuk 
// mengonversi jarak x ke dalam kilometer-meter-sentimeter. Ingat bahwa 1m = 
// 100cm dan 1km=1000m =100.000cm. Misal x=261341cm, ini berarti semut 
// menempuh jarak sejauh 2km + 613m + 41cm.

#include <iostream>

using namespace std;

// Buat struct untuk menyimpan satuan jarak
struct Distance {
	int km;
	int m;
	int cm;
};

int main(){
	Distance jarak_semut;
	int sisa, jarak_tempuh;
	cout << "Masukkan jarak semut dalam cm: "; cin >> jarak_tempuh;

	//  Konversi dari CM ke KM
	jarak_semut.km = jarak_tempuh / 100000;
	
	sisa = jarak_tempuh % 100000;

	// Konversi dari CM ke M
	jarak_semut.m = sisa / 100;

	// Sisa CM
	jarak_semut.cm = sisa % 100;

	cout << "Semut menempuh jarak sejauh " << jarak_semut.km << "km + " << jarak_semut.m << "m + " << jarak_semut.cm << "cm" << endl;

	return 0;
}
