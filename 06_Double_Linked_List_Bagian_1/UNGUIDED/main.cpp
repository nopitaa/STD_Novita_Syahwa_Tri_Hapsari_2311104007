#include "doublelist.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    CreateList(L);  

    int numData;
    cout << "Masukkan jumlah kendaraan: ";
    cin >> numData;

    for (int i = 0; i < numData; ++i) {
        infotype car;
        cout << "Masukkan nomor polisi: ";
        cin >> car.nopol;
        cout << "Masukkan warna kendaraan: ";
        cin >> car.warna;
        cout << "Masukkan tahun kendaraan: ";
        cin >> car.thnBuat;
        if (isNopolExist(L, car.nopol)) {
            cout << "Nomor polisi sudah terdaftar." << endl;
        } else {
            address P = alokasi(car);  
            insertLast(L, P);          
        }
    }

    // Menampilkan seluruh data kendaraan yang telah diinput
    cout << "\nDATA LIST" << endl;
    printInfo(L);

    int choice;
    do {
        cout << "\nMenu Pilihan:\n";
        cout << "1. Cari Elemen\n";
        cout << "2. Hapus Elemen\n";
        cout << "0. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                infotype searchCar;
                cout << "Masukkan nomor polisi yang ingin dicari: ";
                cin >> searchCar.nopol;

                address found = findElm(L, searchCar);

                if (found != nullptr) {
                    cout << "  No Polisi: " << found->info.nopol << endl;
                    cout << "  Warna: " << found->info.warna << endl;
                    cout << "  Tahun: " << found->info.thnBuat << endl;
                } else {
                    cout << "Kendaraan dengan nomor polisi " << searchCar.nopol << " tidak ditemukan." << endl;
                }
                break;
            }
            case 2: {
                string nopolToDelete;
                cout << "Masukkan nomor polisi yang ingin dihapus: ";
                cin >> nopolToDelete;
                deleteElm(L, nopolToDelete);
                cout << "\nDATA LIST SETELAH PENGHAPUSAN" << endl;
                printInfo(L);
                break;
            }
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Opsi tidak valid, silakan pilih lagi." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
