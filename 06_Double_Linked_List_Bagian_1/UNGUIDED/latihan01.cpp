#include <iostream>
#include <string>
using namespace std;

struct Node {
    int idBuku;
    string judulBuku;
    string penulisBuku;
    Node* next;
    Node* prev;
};

class BookList {
private:
    Node* head;
    Node* tail;

public:
    BookList() {
        head = NULL;
        tail = NULL;
    }

    // Fungsi untuk menambahkan buku di akhir list
    void tambahBuku(int id, string judul, string penulis) {
        Node* newNode = new Node;
        newNode->idBuku = id;
        newNode->judulBuku = judul;
        newNode->penulisBuku = penulis;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        cout << "Buku berhasil ditambahkan!\n";
    }

    // Fungsi untuk menampilkan buku dari awal ke akhir
    void tampilkanDariAwal() {
        if (head == NULL) {
            cout << "Daftar buku kosong!\n";
            return;
        }
        cout << "\nDaftar Buku (Awal ke Akhir):\n";
        cout << "============================\n";
        Node* current = head;
        while (current != NULL) {
            cout << "ID Buku: " << current->idBuku << endl;
            cout << "Judul: " << current->judulBuku << endl;
            cout << "Penulis: " << current->penulisBuku << endl;
            cout << "----------------------------\n";
            current = current->next;
        }
    }

    // Fungsi untuk menampilkan buku dari akhir ke awal
    void tampilkanDariAkhir() {
        if (tail == NULL) {
            cout << "Daftar buku kosong!\n";
            return;
        }

        cout << "\nDaftar Buku (Akhir ke Awal):\n";
        cout << "============================\n";
        Node* current = tail;
        while (current != NULL) {
            cout << "ID Buku: " << current->idBuku << endl;
            cout << "Judul: " << current->judulBuku << endl;
            cout << "Penulis: " << current->penulisBuku << endl;
            cout << "----------------------------\n";
            current = current->prev;
        }
    }
};

int main() {
    BookList daftarBuku;
    int pilihan, id;
    string judul, penulis;

    do {
        cout << "\nMenu Manajemen Buku\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Tampilkan Buku (Awal ke Akhir)\n";
        cout << "3. Tampilkan Buku (Akhir ke Awal)\n";
        cout << "4. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "Masukkan ID Buku: ";
                cin >> id;
                cin.ignore();
                cout << "Masukkan Judul Buku: ";
                getline(cin, judul);
                cout << "Masukkan Nama Penulis: ";
                getline(cin, penulis);
                daftarBuku.tambahBuku(id, judul, penulis);
                break;
            case 2:
                daftarBuku.tampilkanDariAwal();
                break;
            case 3:
                daftarBuku.tampilkanDariAkhir();
                break;
            case 4:
                cout << "Program selesai!\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}