#include "parent.h"

void CreateListCourse(ListParent &C){
    C.firstCourse = NULL;
}
adrCourse alokasiCourse(){
    adrCourse p;
    p = new elmCourse;
    p->firstTask = NULL;
    p->infotypeCourse = NULL;
    p->nextCourse = NULL;
    return p;
}

adrTask alokasiTask(){
    adrTask p;
    p = new elmTask;
    p->nextTask = NULL;
    p->infotypeTask = NULL;
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

void relasiParentAndChild(ListParent &C,)
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
