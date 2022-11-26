// Tulislah algoritma yang membaca panjang sebuah benda dalam satuan meter, 
// lalu mengonversinya ke dalam satuan inchi, kaki, dan yard ( 1 inchi=25.4 mm 
// 1 kaki =30.48 cm, dan 1 yard =0.9144 m).

#include <iostream>

using namespace std;

struct Panjang {
    float meter;
    float inchi;
    float kaki;
    float yard;
};

int main(){
    Panjang p;
    cout << "Masukkan panjang dalam satuan meter: ";
    cin >> p.meter;
    p.inchi = p.meter * 1000 / 25.4;
    p.kaki = p.meter * 100 / 30.48;
    p.yard = p.meter / 0.9144;
    cout << "Panjang " << p.meter << " meter setara dengan " << p.inchi << " inchi, " << p.kaki << " kaki, dan " << p.yard << " yard" << endl;
}