// pelajaran.h
#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

typedef struct {
    string namapel;
    string kodepel;
} pelajaran;

pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(pelajaran pel);

#endif