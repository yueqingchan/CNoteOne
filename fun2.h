//
// Created by 87572 on 21/6/9.
//

#define YUEQING_CAHN

#ifndef CDEMO2_FUN2_H
#define CDEMO2_FUN2_H


union Book {

    int num;
    char name[100];

};

void testUnion();

enum Weekend {
    MON = 2, FRI
};

void testEnum();


void testFile();

typedef struct STU2{
    int age
} STU;

void testStackPoint();

void testMemCtl();

void  testDuan();

void testPSetData();

void testSprintf();

void testFreePoint();

void testArrPoint();

void testPianyi();

void testFunPoint();



#endif //CDEMO2_FUN2_H
