#include <iostream>
#include <string>
using namespace std;

struct Proyek {
    string namaProyek;
    int durasi;
    Proyek* next;

    Proyek(string nama, int durasi) : namaProyek(nama), durasi(durasi), next(nullptr) {}
};

struct Pegawai {
    string namaPegawai;
    string idPegawai;
    Proyek* daftarProyek;
    Pegawai* next;

    Pegawai(string nama, string id) : namaPegawai(nama), idPegawai(id), daftarProyek(nullptr), next(nullptr) {}
};

class MultiLinkedList {
private:
    Pegawai* head;

public:
    MultiLinkedList() : head(nullptr) {}

    void tambahPegawai(string nama, string id) {
        Pegawai* pegawaiBaru = new Pegawai(nama, id);
        if (!head) {
            head = pegawaiBaru;
        } else {
            Pegawai* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = pegawaiBaru;
        }
    }

    void tambahProyek(string idPegawai, string namaProyek, int durasi) {
        Pegawai* pegawai = cariPegawai(idPegawai);
        if (pegawai) {
            Proyek* proyekBaru = new Proyek(namaProyek, durasi);
            if (!pegawai->daftarProyek) {
                pegawai->daftarProyek = proyekBaru;
            } else {
                Proyek* temp = pegawai->daftarProyek;
                while (temp->next) {
                    temp = temp->next;
                }
                temp->next = proyekBaru;
            }
        } else {
            cout << "Pegawai dengan ID " << idPegawai << " tidak ditemukan.\n";
        }
    }

    void hapusProyek(string idPegawai, string namaProyek) {
        Pegawai* pegawai = cariPegawai(idPegawai);
        if (pegawai) {
            Proyek* temp = pegawai->daftarProyek;
            Proyek* prev = nullptr;

            while (temp) {
                if (temp->namaProyek == namaProyek) {
                    if (!prev) {
                        pegawai->daftarProyek = temp->next;
                    } else {
                        prev->next = temp->next;
                    }
                    delete temp;
                    cout << "Proyek " << namaProyek << " berhasil dihapus dari pegawai " << pegawai->namaPegawai << ".\n";
                    return;
                }
                prev = temp;
                temp = temp->next;
            }
            cout << "Proyek " << namaProyek << " tidak ditemukan untuk pegawai " << pegawai->namaPegawai << ".\n";
        } else {
            cout << "Pegawai dengan ID " << idPegawai << " tidak ditemukan.\n";
        }
    }

    void tampilkanData() {
        Pegawai* tempPegawai = head;
        while (tempPegawai) {
            cout << "Pegawai: " << tempPegawai->namaPegawai << " (ID: " << tempPegawai->idPegawai << ")\n";
            Proyek* tempProyek = tempPegawai->daftarProyek;
            while (tempProyek) {
                cout << "  Proyek: " << tempProyek->namaProyek << ", Durasi: " << tempProyek->durasi << " bulan\n";
                tempProyek = tempProyek->next;
            }
            tempPegawai = tempPegawai->next;
        }
    }

private:
    Pegawai* cariPegawai(string idPegawai) {
        Pegawai* temp = head;
        while (temp) {
            if (temp->idPegawai == idPegawai) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};

int main() {
    MultiLinkedList daftarPegawai;
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Pegawai\n";
        cout << "2. Tambah Proyek\n";
        cout << "3. Hapus Proyek\n";
        cout << "4. Tampilkan Data Pegawai\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string nama, id;
                cout << "Masukkan nama pegawai: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan ID pegawai: ";
                cin >> id;
                daftarPegawai.tambahPegawai(nama, id);
                break;
            }
            case 2: {
                string idPegawai, namaProyek;
                int durasi;
                cout << "Masukkan ID pegawai: ";
                cin >> idPegawai;
                cin.ignore();
                cout << "Masukkan nama proyek: ";
                getline(cin, namaProyek);
                cout << "Masukkan durasi proyek (dalam bulan): ";
                cin >> durasi;
                daftarPegawai.tambahProyek(idPegawai, namaProyek, durasi);
                break;
            }
            case 3: {
                string idPegawai, namaProyek;
                cout << "Masukkan ID pegawai: ";
                cin >> idPegawai;
                cin.ignore();
                cout << "Masukkan nama proyek yang ingin dihapus: ";
                getline(cin, namaProyek);
                daftarPegawai.hapusProyek(idPegawai, namaProyek);
                break;
            }
            case 4:
                daftarPegawai.tampilkanData();
                break;
            case 5:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihan != 5);

    return 0;
}
