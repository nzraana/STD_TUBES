#ifndef DOSEN_H_INCLUDED
#define DOSEN_H_INCLUDED

#include <iostream>
using namespace std;

struct dosen{
    string nama;
    string kode;
    string notelp;
};

typedef struct dosen infoDosen;
typedef struct elmDosen * adrDosen;

struct elmDosen{
    adrDosen nextDosen;
    infoDosen infotypeDosen;
};

struct ListDosen{
    adrDosen firstDosen;
};

void createListDosen(ListDosen &D);
adrDosen alokasiDosen(infoDosen x);
adrDosen findDosen(ListDosen D,string nama);
void insertFirstDosen(ListDosen &D,adrDosen p);
void printDosen(ListDosen D);

#endif // DOSEN_H_INCLUDED
