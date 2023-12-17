#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <iostream>
using namespace std;

#include "dosen.h"

struct course{
    string matkul;
    string kelas;
};

struct task{
    string judul;
    string deadline;
};

typedef struct course infoCourse;
typedef struct task infoTask;
typedef struct elmCourse * adrCourse;
typedef struct elmTask * adrTask;

struct elmCourse{
    infoCourse infotypeCourse;
    adrCourse nextCourse;
    adrTask firstTask;
};

struct elmTask{
    infoTask infotypeTask;
    adrTask nextTask;
    adrDosen dstDosen;
};

struct ListParent{
    adrCourse firstCourse;
};

void CreateListCourse(ListParent &C);
adrCourse alokasiCourse();
adrCourse findCourse(ListParent C,string matkul);
void insertLastCourse(ListParent &C,adrCourse p);
void showCourse(ListParent C);

#endif // PARENT_H_INCLUDED
