#include <iostream>
#include <string>

using namespace std;

// Struct Mahasiswa untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    int nim;
};

// Struct Node untuk mewakili node dalam linked list
struct Node {
    Mahasiswa mahasiswa;
    Node* next;
};

class AntrianPrioritasNIM {
private:
    Node* depan;
    Node* belakang;
    int jumlahAntrian; // Menyimpan jumlah antrian saat ini

public:
    AntrianPrioritasNIM() {
        depan = nullptr;
        belakang = nullptr;
        jumlahAntrian = 0;
    }

    // Memeriksa apakah antrian kosong
    bool kosong() {
        return depan == nullptr;
    }

    // Memasukkan mahasiswa ke dalam antrian dengan prioritas berdasarkan NIM
    void enqueue(string nama, int nim) {
        Node* nodeBaru = new Node;
        nodeBaru->mahasiswa.nama = nama;
        nodeBaru->mahasiswa.nim = nim;
        nodeBaru->next = nullptr;

        if (kosong()) {
            depan = belakang = nodeBaru;
        } else if (nim < depan->mahasiswa.nim) {
            nodeBaru->next = depan;
            depan = nodeBaru;
        } else {
            Node* sekarang = depan;
            while (sekarang->next != nullptr && nim >= sekarang->next->mahasiswa.nim) {
                sekarang = sekarang->next;
            }
            nodeBaru->next = sekarang->next;
            sekarang->next = nodeBaru;
            if (sekarang == belakang) {
                belakang = nodeBaru;
            }
        }
        jumlahAntrian++;
    }

    // Mengeluarkan mahasiswa dari depan antrian
    void dequeue() {
        if (kosong()) {
            cout << "Antrian kosong." << endl;
            return;
        }

        Node* temp = depan;
        depan = depan->next;
        if (depan == nullptr) {
            belakang = nullptr;
        }
        cout << "Data mahasiswa yang dikeluarkan: " << temp->mahasiswa.nama << ", NIM: " << temp->mahasiswa.nim << endl;
        delete temp;
        jumlahAntrian--;
    }

    // Menampilkan semua mahasiswa dalam antrian dengan slot kosong
    void tampilkan() {
        cout << "data antrian mahasiswa" << endl;
        Node* sekarang = depan;
        for (int i = 1; i <= 5; i++) {
            if (sekarang != nullptr) {
                cout << i << ". " << sekarang->mahasiswa.nama << endl;
                sekarang = sekarang->next;
            } else {
                cout << i << ". (kosong)" << endl;
            }
        }
        cout << "jumlah antrian = " << jumlahAntrian << endl;
    }
};

int main() {
    AntrianPrioritasNIM antrian;
    int jumlahMahasiswa;

    // Meminta pengguna memasukkan jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Memasukkan data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        string nama;
        int nim;
        cout << "Masukkan nama mahasiswa: ";
        cin >> nama;
        cout << "Masukkan NIM mahasiswa: ";
        cin >> nim;
        antrian.enqueue(nama, nim);
    }

    // Menampilkan antrian setelah semua data dimasukkan
    antrian.tampilkan();
    
    // Mengeluarkan mahasiswa dari antrian
    cout << "====================================\n";
    cout << "Mengeluarkan mahasiswa dari antrian..." << endl;
    antrian.dequeue();
    antrian.tampilkan();

    // Mengeluarkan mahasiswa dari antrian lagi
    antrian.dequeue();
    antrian.tampilkan();

    return 0;
}
