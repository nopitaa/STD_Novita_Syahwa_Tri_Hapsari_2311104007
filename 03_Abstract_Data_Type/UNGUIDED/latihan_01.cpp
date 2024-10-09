#include <iostream>
#include <string>
using namespace std;

// untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    int uts;
    int uas;
    int tugas;
    int nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(int uts, int uas, int tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    const int maxMahasiswa = 10;
    Mahasiswa mahasiswa[maxMahasiswa];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> jumlahMahasiswa;

    if (jumlahMahasiswa > maxMahasiswa) {
        cout << "Jumlah mahasiswa tidak boleh lebih dari 10." << endl;
        return 1;
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nData Mahasiswa ke-" << (i + 1) << endl;
        cout << "Nama: ";
        getline(cin, mahasiswa[i].nama);
        cout << "NIM: ";
        getline(cin, mahasiswa[i].nim);
        cout << "Nilai UTS: ";
        cin >> mahasiswa[i].uts;
        cout << "Nilai UAS: ";
        cin >> mahasiswa[i].uas;
        cout << "Nilai Tugas: ";
        cin >> mahasiswa[i].tugas;

        // Menghitung nilai akhir menggunakan fungsi
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
    }

    // Menampilkan data mahasiswa
    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMahasiswa ke-" << (i + 1) << endl;
        cout << "Nama       : " << mahasiswa[i].nama << endl;
        cout << "NIM        : " << mahasiswa[i].nim << endl;
        cout << "Nilai UTS  : " << mahasiswa[i].uts << endl;
        cout << "Nilai UAS  : " << mahasiswa[i].uas << endl;
        cout << "Nilai Tugas: " << mahasiswa[i].tugas << endl;
        cout << "Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl;
    }
    return 0;
}
