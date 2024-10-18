#include <iostream>
#include <cstdlib>
#include "singlelist.h"
using namespace std;

void CreateList(List *L) {
    L->First = NULL;
}

address alokasi(infotype x) {
    address P = (address)malloc(sizeof(tElmtList));
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void dealokasi(address P) {
    free(P);
}

void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " -> ";
        P = P->next;
    }
    cout << "NULL" << endl;
}

void insertFirst(List *L, address P) {
    P->next = L->First;
    L->First = P;
}

