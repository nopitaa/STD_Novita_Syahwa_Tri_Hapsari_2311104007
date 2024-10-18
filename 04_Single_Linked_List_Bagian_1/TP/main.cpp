#include <iostream> 
#include "list.h"

using namespace std;

int main() {
    List L;
    
    // 1. Panggil Create List
    createList(L);

    // 2. Minta input angka pertama dari user
    int angka1;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    // 3. Panggil fungsi allocate
    address P1 = allocate(angka1);

    // 4. Panggil fungsi insertFirst
    insertFirst(L, P1);

    // 5. Panggil fungsi printInfo
    printInfo(L);

    // 6. Minta input angka kedua dari user
    int angka2;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    // Panggil allocate, insertFirst, dan printInfo untuk angka kedua
    address P2 = allocate(angka2);
    insertFirst(L, P2);
    printInfo(L);

    // 7. Minta input angka ketiga dari user
    int angka3;
    cout << "Masukkan angka ketiga: ";
    cin >> angka3;

    // Panggil allocate, insertFirst, dan printInfo untuk angka ketiga
    address P3 = allocate(angka3);
    insertFirst(L, P3);
    printInfo(L);

    return 0;
}