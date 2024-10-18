#ifndef SINGLELIST_H
#define SINGLELIST_H

// Define infotype and address
typedef int infotype;
typedef struct tElmtList *address;

// Define structure of single linked list element (ElmtList)
struct tElmtList {
    infotype info;
    address next;
};

// Define structure of the list (List)
typedef struct {
    address First;
} List;

// Prototypes
void CreateList(List *L);
address alokasi(infotype x);
void dealokasi(address P);
void printInfo(List L);
void insertFirst(List *L, address P);

#endif