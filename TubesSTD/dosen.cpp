#include "dosen.h"

void createListDosen(ListDosen &D){
    D.firstDosen = NULL;
}
adrDosen alokasiDosen(infoDosen x){
    adrDosen p;
    p = new elmDosen;
    p->infotypeDosen = x;
    p->nextDosen = NULL;
    return p;
}
adrDosen findDosen(ListDosen D,string nama){
    adrDosen p;
    if(D.firstDosen == NULL){
        cout << "Dosen Kosong";
    }else{
        p = D.firstDosen;
        while(p != NULL && p->infotypeDosen.nama != nama){
            p = p->nextDosen;
        }
        return p;
    }
}
void insertFirstDosen(ListDosen &D,adrDosen p){
    if(D.firstDosen == NULL){
        D.firstDosen = p;
    }else{
        p->nextDosen = D.firstDosen;
        D.firstDosen = p;
    }
}
void printDosen(ListDosen D){
    adrDosen p;
    if(D.firstDosen == NULL){
        cout << "Data dosen tidak ada";
    }else{
        p = D.firstDosen;
        while(p != NULL){
            cout << "============================" << endl;
            cout << "Nama: " << p->infotypeDosen.nama << endl;
            cout << "Kode: " << p->infotypeDosen.kode << endl;
            cout << "NoTelp: " << p->infotypeDosen.notelp << endl;
            cout << "============================" << endl;
            p = p->nextDosen;
        }
    }
    cout << endl;
}
