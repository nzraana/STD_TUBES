#include "parent.h"

int main()
{
    int opsi,jumdatados;
    infoDosen datados;
    infoCourse datacourse;
    ListDosen D;
    ListParent P;
    createListDosen(D);
    CreateListCourse(P);
    cout << "PROGRAM KAMPUS" << endl;
    cout << "Terdapat opsi dibawah ini" << endl;
    cout << "1.Input Dosen" << endl;
    cout << "2.Show Dosen" << endl;
    cout << "3.Input Course" << endl;
    cout << "4.Show Course" << endl;
    cout << "5.Relasikan Course Task Dosen" << endl;
    cout << "6.Show Data Task By Course" << endl;
    cout << "7.Delete Task by Course" << endl;
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
            cout << "3.Input Course" << endl;
            cout << "4.Show Course" << endl;
            cout << "5.Relasikan Course Task Dosen" << endl;
            cout << "6.Show Data Task By Course" << endl;
            cout << "7.Delete Task by Course" << endl;
            cout << "0.Exit" << endl;
            cout << "Masukan opsi anda" << endl;
            cout << "Opsi:";
            cin >> opsi;
        }else if(opsi == 2){
            cout << "Isi data dosen" << endl;
            printDosen(D);
            cout << "Terdapat opsi dibawah ini" << endl;
            cout << "1.Input Dosen" << endl;
            cout << "2.Show Dosen" << endl;
            cout << "3.Input Course" << endl;
            cout << "4.Show Course" << endl;
            cout << "5.Relasikan Course Task Dosen" << endl;
            cout << "6.Show Data Task By Course" << endl;
            cout << "7.Delete Task by Course" << endl;
            cout << "0.Exit" << endl;
            cout << "Masukan opsi anda" << endl;
            cout << "Opsi:";
            cin >> opsi;
        }else if(opsi == 3){
            int jumlahdatacourse;
            int i = 0;
            cout << "Masukan jumlah data course:";
            cin >> jumlahdatacourse;

            while(i != jumlahdatacourse){
                cout << "Masukan Nama Mata Kuliah: ";
                cin >> datacourse.matkul;
                cout << "Masukan Kelas: ";
                cin >> datacourse.kelas;
                insertLastCourse(P,alokasiCourse(datacourse));
                i++;
            }
            cout << "Terdapat opsi dibawah ini" << endl;
            cout << "1.Input Dosen" << endl;
            cout << "2.Show Dosen" << endl;
            cout << "3.Input Course" << endl;
            cout << "4.Show Course" << endl;
            cout << "5.Relasikan Course Task Dosen" << endl;
            cout << "6.Show Data Task By Course" << endl;
            cout << "7.Delete Task by Course" << endl;
            cout << "0.Exit" << endl;
            cout << "Masukan opsi anda" << endl;
            cout << "Opsi:";
            cin >> opsi;
        }else if(opsi == 4){
            cout << "ISI list Course" << endl;
            showCourse(P);
            cout << "Terdapat opsi dibawah ini" << endl;
            cout << "1.Input Dosen" << endl;
            cout << "2.Show Dosen" << endl;
            cout << "3.Input Course" << endl;
            cout << "4.Show Course" << endl;
            cout << "5.Relasikan Course Task Dosen" << endl;
            cout << "6.Show Data Task By Course" << endl;
            cout << "7.Delete Task by Course" << endl;
            cout << "0.Exit" << endl;
            cout << "Masukan opsi anda" << endl;
            cout << "Opsi:";
            cin >> opsi;
        }else if(opsi == 5){
            string targetmatkul;
            cout << "Masukan Mata Kuliah untuk direlasikan dengan task:" << endl;
            cin >> targetmatkul;
            relationCourseandTask(P,D,targetmatkul);
            cout << "Terdapat opsi dibawah ini" << endl;
            cout << "1.Input Dosen" << endl;
            cout << "2.Show Dosen" << endl;
            cout << "3.Input Course" << endl;
            cout << "4.Show Course" << endl;
            cout << "5.Relasikan Course Task Dosen" << endl;
            cout << "6.Show Data Task By Course" << endl;
            cout << "7.Delete Task by Course" << endl;
            cout << "0.Exit" << endl;
            cout << "Masukan opsi anda" << endl;
            cout << "Opsi:";
            cin >> opsi;
        }else if(opsi == 6){
            string targetmatkul;
            cout << "Tampilan isi Task dan Dosen dari Course? ";
            cin >> targetmatkul;
            showDataTaskPerCourse(P,targetmatkul);
            cout << "Terdapat opsi dibawah ini" << endl;
            cout << "1.Input Dosen" << endl;
            cout << "2.Show Dosen" << endl;
            cout << "3.Input Course" << endl;
            cout << "4.Show Course" << endl;
            cout << "5.Relasikan Course Task Dosen" << endl;
            cout << "6.Show Data Task By Course" << endl;
            cout << "7.Delete Task by Course" << endl;
            cout << "0.Exit" << endl;
            cout << "Masukan opsi anda" << endl;
            cout << "Opsi:";
            cin >> opsi;
        }else{
            string matkul;
            string task;
            cout << "Hapus Task dari Course? ";
            cin >> matkul;
            showDataTaskPerCourse(P,matkul);
            cout << "Hapus Task? ";
            cin >> task;
            deleteTaskbyCourse(P,matkul,task);
            cout << "Terdapat opsi dibawah ini" << endl;
            cout << "1.Input Dosen" << endl;
            cout << "2.Show Dosen" << endl;
            cout << "3.Input Course" << endl;
            cout << "4.Show Course" << endl;
            cout << "5.Relasikan Course Task Dosen" << endl;
            cout << "6.Show Data Task By Course" << endl;
            cout << "7.Delete Task by Course" << endl;
            cout << "0.Exit" << endl;
            cout << "Masukan opsi anda" << endl;
            cout << "Opsi:";
            cin >> opsi;
        }
    }
    return 0;
}
