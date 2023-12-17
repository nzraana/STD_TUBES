#include "parent.h"

int main()
{
    int opsi,jumdatados;
    infoDosen datados;
    ListDosen D;
    ListParent P;
    createListDosen(D);
    cout << "PROGRAM KAMPUS" << endl;
    cout << "Terdapat opsi dibawah ini" << endl;
    cout << "1.Input Dosen" << endl;
    cout << "2.Show Dosen" << endl;
    cout << "0.Exit" << endl;
    cout << "Masukan opsi anda" << endl;
    cout << "Opsi:";
    cin >> opsi;

    while(opsi != 0){
        if(opsi == 1){
            int i = 0;
            cout << "Masukan jumlah data dosen:";
            cin >> jumdatados;
            while(i != jumdatados){
                cout << "Nama Dosen:";
                cin >> datados.nama;
                cout << "Kode Dosen:";
                cin >> datados.kode;
                cout << "Nomor telepon:";
                cin >> datados.notelp;
                insertFirstDosen(D,alokasiDosen(datados));
                i++;
            }
            cout << "Terdapat opsi dibawah ini" << endl;
            cout << "1.Input Dosen" << endl;
            cout << "2.Show Dosen" << endl;
            cout << "0.Exit" << endl;
            cout << "Masukan opsi anda" << endl;
            cout << "Opsi:";
            cin >> opsi;
        }else{
            cout << "Isi data dosen" << endl;
            printDosen(D);
            cout << "Terdapat opsi dibawah ini" << endl;
            cout << "1.Input Dosen" << endl;
            cout << "2.Show Dosen" << endl;
            cout << "0.Exit" << endl;
            cout << "Masukan opsi anda" << endl;
            cout << "Opsi:";
            cin >> opsi;
        }
    }
    return 0;
}
