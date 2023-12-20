#include "parent.h"

void CreateListCourse(ListParent &C){
    C.firstCourse = NULL;
}

adrCourse alokasiCourse(infoCourse x){
    adrCourse p;
    p = new elmCourse;
    p->nextCourse = NULL;
    p->infotypeCourse = x;
    p->firstTask = NULL;
    return p;
}

adrTask alokasiTask(infoTask x){
    adrTask p;
    p = new elmTask;
    p->nextTask = NULL;
    p->infotypeTask = x;
    p->dstDosen = NULL;
    return p;
}

adrCourse findCourse(ListParent C,string matkul){
    adrCourse p;
    if(C.firstCourse == NULL){
        cout << "Course Kosong";
    }else{
        p = C.firstCourse;
        while(p != NULL && p->infotypeCourse.matkul != matkul){
            p = p->nextCourse;
        }
        return p;
    }
}
void insertLastCourse(ListParent &C,adrCourse p){
    adrCourse last;
    if(C.firstCourse == NULL){
        C.firstCourse = p;
    }else{
        last = C.firstCourse;
        while(last->nextCourse != NULL){
            last = last->nextCourse;
        }
        last->nextCourse = p;
    }
}

void insertFirstTask(ListParent &C,adrTask p){

}

void relationCourseandTask(ListParent &C,ListDosen &D,string matkul){
    adrCourse s;
    adrDosen d;
    infoTask datatask;
    adrTask p;
    string namdos;

    s = findCourse(C,matkul);
    if(C.firstCourse == NULL){
        cout << "Course Kosong";
    }else{
        if(s != NULL){
            cout << "Anda akan masukan data task berupa:" << endl;
            cout << "Judul task: ";
            cin >> datatask.judul;
            cout << "Deadline task: ";
            cin >> datatask.deadline;
            cout << "Masukan Nama Dosen: ";
            cin >> namdos;

            d = findDosen(D,namdos);
            p = alokasiTask(datatask);

            if(d != NULL){
                p->dstDosen = d;
            }else{
                cout << "Dosen tidak ada" << endl;
            }


            if(s->firstTask == NULL){
                s->firstTask = p;
            }else{
                p->nextTask = s->firstTask;
                s->firstTask = p;
            }
        }else{
            cout << "Data Course Tidak Ditemukan" << endl;
        }
    }
}

void showDataTaskPerCourse(ListParent C,string matkul){
    adrCourse c;
    adrTask t;
    if(C.firstCourse == NULL){
        cout << "Course Kosong";
    }else{
        c = findCourse(C,matkul);
        cout << "Pada Mata Kuliah " << matkul << endl;
        cout << "Diantaranya terdapat Task:" << endl;
        t = c->firstTask;
        while(t != NULL){
            cout << "===================================" << endl;
            cout << "Nama Task: " << t->infotypeTask.judul << endl;
            cout << "Deadline Task: " << t->infotypeTask.deadline << endl;
            cout << "Bersama Dosen: " << t->dstDosen->infotypeDosen.nama << endl;
            cout << "===================================" << endl;
            t = t->nextTask;
        }
    }
    cout << endl;
}


void deleteTaskbyCourse(ListParent &C, string matkul, string task) {
    adrCourse course;
    if (C.firstCourse == NULL) {
        cout << "Course Kosong";
    } else {
        course = findCourse(C, matkul);
        if (course != NULL) {
            adrTask p = course->firstTask;
            adrTask prec = NULL;

            while (p != NULL && p->infotypeTask.judul != task) {
                prec = p;
                p = p->nextTask;
            }

            if (p == NULL) {
                cout << "Task tidak ditemukan" << endl;
            } else {
                if (prec == NULL) {
                    course->firstTask = p->nextTask;
                } else {
                    prec->nextTask = p->nextTask;
                }
                delete p;
                cout << "Task berhasil dihapus" << endl;
            }
        } else {
            cout << "Course tidak ditemukan" << endl;
        }
    }
}

void showCourse(ListParent C){
    adrCourse p;
    if(C.firstCourse == NULL){
        cout << "Course Kosong";
    }else{
        p = C.firstCourse;
        while(p != NULL){
            cout << "=============================" << endl;
            cout << "Mata Kuliah: " << p->infotypeCourse.matkul << endl;
            cout << "Kelas: " << p->infotypeCourse.kelas << endl;
            cout << "=============================" << endl;
            p = p->nextCourse;
        }
    }
    cout << endl;
}
