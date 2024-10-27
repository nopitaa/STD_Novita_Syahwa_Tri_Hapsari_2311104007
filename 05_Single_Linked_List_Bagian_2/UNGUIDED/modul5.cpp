#include <iostream>
#include <string>

using namespace std;

struct Node {
    int NIM;
    string nama;
    Node* next;
};
Node* buatNode(int NIM, string nama) {
    Node* nodeBaru = new Node();
    nodeBaru->NIM = NIM;
    nodeBaru->nama = nama;
    nodeBaru->next = nullptr;
    return nodeBaru;
}
void tambahMahasiswa(Node*& head, int NIM, string nama) {
    Node* nodeBaru = buatNode(NIM, nama);
    if (head == nullptr) {
        head = nodeBaru;  
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  
        }
        temp->next = nodeBaru;  
    }
    cout << "Mahasiswa dengan NIM " << NIM << " dan nama " << nama << " berhasil ditambahkan.\n";
}
void cariMahasiswa(Node* head, int NIM) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->NIM == NIM) {
            cout << "Mahasiswa ditemukan: " << temp->nama << " (NIM: " << NIM << ")\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Mahasiswa dengan NIM " << NIM << " tidak ditemukan.\n";
}
void displayMahasiswa(Node* head) {
    Node* temp = head;
    if (temp == nullptr) {
        cout << "Tidak ada data mahasiswa.\n";
    } else {
        cout << "Daftar Mahasiswa:\n";
        while (temp != nullptr) {
            cout << "NIM: " << temp->NIM << ", Nama Mahasiswa: " << temp->nama << "\n";
            temp = temp->next;
        }
    }
}

int main() {
    Node* head = nullptr;  

    int pilihan, NIM;
    string nama;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Mencari Data Mahasiswa\n";
        cout << "3. Tampilkan Semua Mahasiswa\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan NIM: ";
                cin >> NIM;
                cin.ignore();  
                cout << "Masukkan Nama: ";
                getline(cin, nama);
                tambahMahasiswa(head, NIM, nama);
                break;
            case 2:
                cout << "Masukkan NIM yang ingin dicari: ";
                cin >> NIM;
                cariMahasiswa(head, NIM);
                break;
            case 3:
                displayMahasiswa(head);
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 4);

    return 0;
}
