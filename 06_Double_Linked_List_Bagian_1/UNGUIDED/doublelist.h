#ifndef DOUBLELIST_H
#define DOUBLELIST_H

#include <iostream>
#include <string>
using namespace std;

struct infotype {
    string nopol;  
    string warna;   
    int thnBuat;   
};

struct ElmtList {
    infotype info;
    ElmtList* next;
    ElmtList* prev;
};

typedef ElmtList* address;

struct List {
    address First;
    address Last;
};

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

#endif  
