#include <iostream> 
#include "list.h"
using namespace std;
void createList(List &L) {
    L.first = NULL;
}
address allocate(infotype x) {

    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;

}
void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}
void insertLast(List &L, address P) {
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        address Q = first(L);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}
void printInfo(List L) {
    address P = first(L);
    while (P != NULL) {
        cout << info(P) << endl;
        P = next(P);
    }
    cout<<endl;
}