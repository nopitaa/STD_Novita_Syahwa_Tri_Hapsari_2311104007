#include "doublelist.h"

// Membuat list kosong
void CreateList(List& L) {
    L.First = nullptr;
    L.Last = nullptr;
}

// Mengalokasikan elemen baru
address alokasi(infotype x) {
    address P = new ElmtList;
    if (P != nullptr) {
        P->info = x;
        P->next = nullptr;
        P->prev = nullptr;
    }
    return P;
}

// Dealokasi elemen
void dealokasi(address P) {
    delete P;
}

// Menampilkan semua elemen dalam list
void printInfo(const List& L) {
    address P = L.First;
    while (P != nullptr) {
        cout << "No Polisi: " << P->info.nopol << endl;
        cout << "Warna: " << P->info.warna << endl;
        cout << "Tahun: " << P->info.thnBuat << endl;
        P = P->next;
    }
}

// Memasukkan elemen di akhir list
void insertLast(List& L, address P) {
    if (L.First == nullptr) {
        L.First = P;
        L.Last = P;
    } else {
        L.Last->next = P;
        P->prev = L.Last;
        L.Last = P;
    }
}

// Mengecek apakah nomor polisi sudah ada dalam list
bool isNopolExist(const List& L, string nopol) {
    address P = L.First;
    while (P != nullptr) {
        if (P->info.nopol == nopol) {
            return true;
        }
        P = P->next;
    }
    return false;
}

// Mencari elemen berdasarkan nomor polisi
address findElm(const List& L, const infotype& x) {
    address P = L.First;
    while (P != nullptr) {
        if (P->info.nopol == x.nopol) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

// Menghapus elemen berdasarkan nomor polisi
void deleteElm(List& L, const string& nopol) {
    address P = L.First;
    while (P != nullptr && P->info.nopol != nopol) {
        P = P->next;
    }

    if (P == nullptr) {
        cout << "Elemen dengan nomor polisi " << nopol << " tidak ditemukan." << endl;
    } else {
        if (P == L.First) {
            deleteFirst(L, P);
        } else if (P == L.Last) {
            deleteLast(L, P);
        } else {
            address Prec = P->prev;
            deleteAfter(Prec, P);
        }
        dealokasi(P);
        cout << "Elemen dengan nomor polisi " << nopol << " telah dihapus." << endl;
    }
}

// Menghapus elemen pertama
void deleteFirst(List& L, address& P) {
    if (L.First != nullptr) {
        P = L.First;
        L.First = L.First->next;
        if (L.First != nullptr) {
            L.First->prev = nullptr;
        } else {
            L.Last = nullptr;
        }
    }
}

// Menghapus elemen terakhir
void deleteLast(List& L, address& P) {
    if (L.Last != nullptr) {
        P = L.Last;
        L.Last = L.Last->prev;
        if (L.Last != nullptr) {
            L.Last->next = nullptr;
        } else {
            L.First = nullptr;
        }
    }
}

// Menghapus elemen setelah elemen tertentu
void deleteAfter(address Prec, address& P) {
    if (Prec != nullptr && Prec->next != nullptr) {
        P = Prec->next;
        Prec->next = P->next;
        if (P->next != nullptr) {
            P->next->prev = Prec;
        }
    }
}
