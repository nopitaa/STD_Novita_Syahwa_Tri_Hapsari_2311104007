#include <iostream>
#include "kerucut.h"
using namespace std;

int main() {

    Kerucut kerucut1(5, 12);  //menentukan nilai yang di masukan = jari-jari 5 dan tinggi = 12

    cout << "Informasi Kerucut:" << endl;
    cout << "Jari-jari alas: " << kerucut1.getJariJari() << endl;
    cout << "Tinggi: " << kerucut1.getTinggi() << endl;
    cout << "Garis pelukis: " << kerucut1.hitungGarisPelukis() << endl;
    cout << "Luas alas: " << kerucut1.hitungLuasAlas() << endl;
    cout << "Keliling alas: " << kerucut1.hitungKelilingAlas() << endl;
    cout << "Luas selimut: " << kerucut1.hitungLuasSelimut() << endl;
    cout << "Luas permukaan: " << kerucut1.hitungLuasPermukaan() << endl;
    cout << "Volume: " << kerucut1.hitungVolume() << endl;

    return 0;
}