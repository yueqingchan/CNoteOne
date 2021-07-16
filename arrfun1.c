//
// Created by 87572 on 21/6/3.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "arrfun1.h"

void compare(int arr[10]) {

    int MAX = arr[0];
    for (int i = 0; i < 10; ++i) {
        if (arr[i] > MAX) {
            MAX = arr[i];
        }
    }
    printf("the max value: %d\n", MAX);

}


/**
 * 数组转置
 * @param arr
 */
void revertArr(int arr[10]) {

    printf("sizeofArray, %llu\n", sizeof(arr));

    for (int k = 0; k < 10; ++k) {

        printf("%d , %d\n", k, arr[k]);

    }

    int i = 0;
    int j = 9;

    while (i < j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        ++i;
        --j;
    }

    for (int k = 0; k < 10; ++k) {

        printf("%d , %d\n", k, arr[k]);

    }


}


/**
 * 多维数组
 */
void multiArr() {
    int arr[2][3] = {{1, 2, 3},
                     {4, 5, 6}};
    printf("%llu\n", sizeof(arr));
    printf("%llu\n", sizeof(arr[0]));
    printf("%llu\n", sizeof(arr[0][0]));
    printf("%p\n", arr);
    printf("%p\n", arr[0]);
    printf("%p\n", &arr[0][0]);
}

/**
 * 追加字符串
 */
void concatStr() {
    char str1[] = "Hello!";
    char str2[] = "World!";
    char dst[100] = {0};
    int i = 0;
    while (str1[i] != 0) {
        dst[i] = str1[i];
        i++;
    }
    int j = 0;
    while (str2[j] != 0) {
        dst[i + j] = str2[j];
        j++;
    }

    printf("%s\n", dst);
}

/**
 *
 */
void timeAndRand() {

    time_t nowTime = time(NULL);
    printf("%lld\n", nowTime);
    srand((unsigned int) nowTime);
    int randNum = rand();
    printf("%d\n", randNum);

}

void testPArr() {

    int num = 10;
    char charC = 'C';

    int *pNum = &num;
    char *pChar = &charC;


    printf("%lld\n", pNum);
    printf("%lld\n", pNum + 1);

    printf("%lld\n", (void *) pChar);
    printf("%lld\n", (void *) (pChar + 1));

    /*  int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
      int *p2 = &a[2]; //第2个元素地址
      int *p1 = &a[1]; //第1个元素地址
      printf("p1 = %p, p2 = %p\n", p1, p2);

      int n1 = p2 - p1;           //n1 = 1 这里是按照指针的运算规则, 4字节/int指针步长=1
      int n2 = (int)p2 - (int)p1; //n2 = 4 这里是转成int来直接运算的.
      printf("n1 = %d, n2 = %d\n", n1, n2);*/


    /*int arr[10]={1,2,3,4,5,6,7,8,9,};

    for (int i = 0; i <10; ++i) {

        int *p=arr+i;
        printf("arr,  index=%d,  %d  %d\n",i,arr[i],*p);

    }
*/
}

void testPointPP() {

    int num = 10;
    int *pInt = &num;
    *(pInt + 1) = 20;

    printf("------------------------------\n");
    printf("%d, %d\n", pInt[0], pInt[1]);//这样写是不对的.
    printf("------------------------------\n");

}

void testPointArray() {


    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    int *pArray[3] = {NULL};

    pArray[0] = &num1;
    pArray[1] = &num2;
    pArray[2] = &num3;


    for (int i = 0; i < 3; ++i) {
        printf("%d\n", *pArray[i]);
    }

}


void swapInt(int *a, int *b) {

    *a = 100;
    *b = 200;

}


void testPStr() {

    /* char str[] = "hello world";
     char *p = str;
     *p = 'm';
     p++;
     *p = 'i';
     printf("%s\n", str);

     p = "mike jiang";
     printf("%s\n", p);

     char *q = "test";
     printf("%s\n", q);*/

    char str[] = "HelloWorld!";
    char *pChar = str;
    pChar[0] = 'A';
    printf("%s\n", str);          //栈上申请的内存,可以修改

    char *pChar2 = "test";
    pChar[0] = 'T';
    printf("%s\n", pChar2);//test  常量池,不能修改


}

void testConst(char *const pChar) {

}

void testStrStr() {

    char str[] = "AAABCDABCDABCD";
    char *pStr = strstr(str, "ABCD");
    int n = 0;
    while (pStr != NULL) {
        printf("%s\n", pStr);
        pStr += strlen("ABCD");                    //指针下移
        n++;
        if (*pStr == '\0') {
            printf("pStr is end of string ");
            break;
        }
        pStr = strstr(pStr, "ABCD");
    }
    printf("End,%d\n", n);

}

int calSpaceNum(const char *pStr) {
    int length = 0;
    if (pStr == NULL) {
        return length;
    }
    unsigned long long len = strlen(pStr);
    for (int i = 0; i < len; ++i) {
        if (pStr[i] == ' ') {
            length++;
        }
    }
    printf("length is : %d\n", length);

    return length;

}

void testStatic() {

    static int a = 20;
    printf("static--file ,%d\n", a++);


}

void testStruct() {
    struct Stu stu;
    strcpy(stu.name, "Lucy");
    stu.age = 100;
    printf("%s  %d  \n", stu.name, stu.age);
}

void testMemControl() {
    char arr[] = "hello!";
    char arr2[] = "world!";
//    memcpy(arr2,arr, sizeof(arr));
//    memset(arr,'A',strlen(arr));
    int result = memcmp(arr, arr2, sizeof(arr));
    printf("%s\n", arr);
    printf("%s\n", arr2);
    printf("%d\n", result);
}

void testStruCpy() {

    struct Stu stu;
    strcpy(stu.name, "Lilei");
    stu.age = 200;

    struct Stu *pStu = malloc(sizeof(struct Stu));
    memset(pStu,0, sizeof(struct Stu));
    memcpy(pStu,&stu, sizeof(struct Stu));
    free(pStu);
    printf("%s %d\n",pStu->name,pStu->age);

}

void testStructRoom(){
    size_t structLen=sizeof(struct Room);
    struct Room * pRoom=malloc(structLen);
    memset(pRoom,0,structLen);

    //内部struct指针申请
    pRoom->address=malloc(100);
    memset(pRoom->address,0,100);
    //开始赋值操作
    strcpy(pRoom->address,"HuangHouDaDao");
    pRoom->num=10000001;

    printf("%s  %d \n",pRoom->address,pRoom->num);
    if (pRoom->address!=NULL){
        free(pRoom->address);
        pRoom->address=NULL;
    }
    if (pRoom!=NULL){
        free(pRoom);
        pRoom=NULL;
    }
}

void testArrPoint(){

    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int (*pInt) [10] =&arr;
    int pEle=  **pInt;
    printf("%d\n",**pInt);


}