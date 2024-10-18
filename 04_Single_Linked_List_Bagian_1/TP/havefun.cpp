#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List L;
    createList(L);

    int digit;
    address P;

    // Loop untuk input 10 digit NIM
    for (int i = 1; i <= 10; i++) {
        int digit;
        cout << "Digit " << i << " : ";
        cin >> digit;
        address P = allocate(digit);
        insertLast(L, P);
    }

    // Tampilkan isi list (NIM lengkap)
    cout << "Isi list : ";
    printInfo(L);

    return 0;
}
