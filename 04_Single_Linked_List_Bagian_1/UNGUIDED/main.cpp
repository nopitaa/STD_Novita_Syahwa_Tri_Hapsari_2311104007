#include <iostream>
#include "singlelist.h" // Include the header file that defines the ADT

using namespace std;

int main() {
    List L;
    CreateList(&L);
    address P;

    P = alokasi(2);  // element akhir
    insertFirst(&L, P);
    
    P = alokasi(0);
    insertFirst(&L, P);
    
    P = alokasi(8);
    insertFirst(&L, P);

    P = alokasi(12);
    insertFirst(&L, P);

    P = alokasi(9);  // element awal
    insertFirst(&L, P);

    cout << "List of elements: ";
    printInfo(L);

    P = L.First;
    while (P != NULL) {
        address temp = P;
        P = P->next;
        dealokasi(temp);
    }

    return 0;
}
