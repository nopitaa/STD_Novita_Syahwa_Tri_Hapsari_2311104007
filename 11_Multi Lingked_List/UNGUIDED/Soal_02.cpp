#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judulBuku;
    string tanggalPengembalian;
    Buku* next;

    Buku(string judul, string tanggal) : judulBuku(judul), tanggalPengembalian(tanggal), next(nullptr) {}
};

struct Anggota {
    string namaAnggota;
    string idAnggota;
    Buku* daftarBuku;
    Anggota* next;

    Anggota(string nama, string id) : namaAnggota(nama), idAnggota(id), daftarBuku(nullptr), next(nullptr) {}
};

class MultiLinkedList {
private:
    Anggota* head;

public:
    MultiLinkedList() : head(nullptr) {}

    void tambahAnggota(string nama, string id) {
        Anggota* anggotaBaru = new Anggota(nama, id);
        if (!head) {
            head = anggotaBaru;
        } else {
            Anggota* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = anggotaBaru;
        }
    }

    void tambahBuku(string idAnggota, string judulBuku, string tanggalPengembalian) {
        Anggota* anggota = cariAnggota(idAnggota);
        if (anggota) {
            Buku* bukuBaru = new Buku(judulBuku, tanggalPengembalian);
            if (!anggota->daftarBuku) {
                anggota->daftarBuku = bukuBaru;
            } else {
                Buku* temp = anggota->daftarBuku;
                while (temp->next) {
                    temp = temp->next;
                }
                temp->next = bukuBaru;
            }
        } else {
            cout << "Anggota dengan ID " << idAnggota << " tidak ditemukan.\n";
        }
    }

    void hapusAnggota(string idAnggota) {
        Anggota* temp = head;
        Anggota* prev = nullptr;

        while (temp) {
            if (temp->idAnggota == idAnggota) {
                if (!prev) {
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
                hapusSemuaBuku(temp->daftarBuku);
                delete temp;
                cout << "Anggota dengan ID " << idAnggota << " dan semua bukunya telah dihapus.\n";
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        cout << "Anggota dengan ID " << idAnggota << " tidak ditemukan.\n";
    }

    void tampilkanData() {
        Anggota* tempAnggota = head;
        while (tempAnggota) {
            cout << "Anggota: " << tempAnggota->namaAnggota << " (ID: " << tempAnggota->idAnggota << ")\n";
            Buku* tempBuku = tempAnggota->daftarBuku;
            while (tempBuku) {
                cout << "  Buku: " << tempBuku->judulBuku << ", Tanggal Pengembalian: " << tempBuku->tanggalPengembalian << "\n";
                tempBuku = tempBuku->next;
            }
            tempAnggota = tempAnggota->next;
        }
    }

private:
    Anggota* cariAnggota(string idAnggota) {
        Anggota* temp = head;
        while (temp) {
            if (temp->idAnggota == idAnggota) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }

    void hapusSemuaBuku(Buku* headBuku) {
        while (headBuku) {
            Buku* temp = headBuku;
            headBuku = headBuku->next;
            delete temp;
        }
    }
};

int main() {
    MultiLinkedList daftarAnggota;

    // Masukkan data anggota
    daftarAnggota.tambahAnggota("Rani", "A001");
    daftarAnggota.tambahAnggota("Dito", "A002");
    daftarAnggota.tambahAnggota("Vina", "A003");

    // Tambahkan buku yang dipinjam
    daftarAnggota.tambahBuku("A001", "Pemrograman C++", "01/12/2024");
    daftarAnggota.tambahBuku("A002", "Algoritma Pemrograman", "15/12/2024");

    // Tambahkan buku baru
    daftarAnggota.tambahBuku("A001", "Struktur Data", "10/12/2024");

    // Hapus anggota Dito
    daftarAnggota.hapusAnggota("A002");

    // Tampilkan semua data anggota dan buku
    daftarAnggota.tampilkanData();

    return 0;
}
