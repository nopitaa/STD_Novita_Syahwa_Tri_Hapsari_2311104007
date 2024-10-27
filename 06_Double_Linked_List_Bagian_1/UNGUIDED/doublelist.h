#ifndef DOUBLELIST_H
#define DOUBLELIST_H

#include <iostream>
#include <string>
using namespace std;

// Definisi tipe data untuk informasi kendaraan
struct infotype {
    string nopol;   // Nomor polisi
    string warna;   // Warna kendaraan
    int thnBuat;    // Tahun pembuatan
};

// Definisi struktur elemen list
struct ElmtList {
    infotype info;
    ElmtList* next;
    ElmtList* prev;
};

typedef ElmtList* address;

// Definisi struktur List
struct List {
    address First;
    address Last;
};

// Deklarasi fungsi-fungsi
void CreateList(List& L);
address alokasi(infotype x);
void dealokasi(address P);
void printInfo(const List& L);
void insertLast(List& L, address P);
bool isNopolExist(const List& L, string nopol);
address findElm(const List& L, const infotype& x);
void deleteElm(List& L, const string& nopol);
void deleteFirst(List& L, address& P);
void deleteLast(List& L, address& P);
void deleteAfter(address Prec, address& P);

#endif  // DOUBLELIST_H
