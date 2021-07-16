//
// Created by 87572 on 21/6/9.
//

#define YUE


#include "fun2.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void testUnion() {
    union Book book;
    size_t length = sizeof(union Book);
    printf("sizeof-->union book  %d\n", length);
    printf("sizeof-->union book  %p\n", &book.name);
    printf("sizeof-->union book  %p\n", &book.num);
}

void testEnum() {
    printf("%d\n", FRI);

};

void testFile() {

    char filePath[] = "G:/c_testFile/fileAB.txt";
    FILE *file = fopen(filePath, "r+");
    if (file == NULL) {
        perror("open file  fail");//open file  fail: No such file or directory
    }
    fclose(file);

}


char *testStack() {
    char name[] = "HelloWorld!";
    return name;

}

void testStackPoint() {

    char *name = NULL;
    name = testStack();
    printf("%s\n", name);

}

void testMemCtl() {

    int *pNum = calloc(sizeof(int), 5);

    for (int i = 0; i < 5; ++i) {
        printf("%d  ", pNum[i]);
    }

    int *pNum2 = realloc(pNum, 10);

    memset(pNum2, 0, 40);

    for (int i = 0; i < 10; ++i) {
        printf("%d  %d ,", pNum[i], i);
    }

    free(pNum2);

}

void testDuan() {
    int num = 0XAABBCCDD;
    unsigned char *pChar = &num;
    printf("%X\n", *pChar);      //DD
    printf("%X\n", *(pChar + 1));  //CC
    printf("%X\n", *(pChar + 2));  //BB
    printf("%X\n", *(pChar + 3));  //AA
}

void setPCharData(int **pInt) {
    *pInt = malloc(sizeof(int));
    **pInt = 20;
}

void testPSetData() {

    int *pInt = NULL;
    setPCharData(&pInt);
    printf("%d\n", *pInt);
    free(pInt);

}

void testSprintf() {
    char name[100] = {0};
    sprintf(name, "%dHello,%dWorld!\n", 10, 10);
    printf("%s\n", name);
}

void testFreePoint() {
    int *pInt = malloc(sizeof(int));
    char *pChar = (char *) pInt;
    free(pChar);
}

void testByteCal() {
    int a = 10;
    int b = 20;
    a = a * b;      // a=a*b
    b = a * b;      // b= a*b*b=a
    a = a * b;      // a*b*a
}


void testArrPoint() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;
    printf("%p\n", p);
    printf("%p\n", ++p);

    typedef int(P_ARRAY)[10];
    P_ARRAY *pArray = &arr;
    int (*pInt)[10] = &arr;

    printf("%p\n", pArray);
    printf("%p\n", pInt);
    int *pArrContent = *pArray;
    printf("%d  %d", **pArray, **pInt);
}

struct Person {

    int age;
    char *name;
    char *address;
};

void testPianyi() {

    struct Person *person = NULL;
    //0000000000000000  0000000000000008  0000000000000010
    printf("%p  %p  %p \n", &person->age, &person->name, &person->address);

    perror("test--->");

}

void testFunPoint() {
    void (*f)() =testPianyi;
    typedef void (*FunTestPoint)();
    FunTestPoint funTestPoint = testPianyi;
    f();
    funTestPoint();
}

void testMacro() {
    int num = 10;
    float f = 20.2f;
    double d = 22.2f;

}

