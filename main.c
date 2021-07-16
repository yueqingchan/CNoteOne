#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "arrfun1.h"
#include "fun2.h"
#include "macro.h"


int main() {

/*    int a = -15;

    printf("%x,%u\n", a, sizeof(a));


    int a1 = 10;
    int a2 = 010;
    int a3 = 0X10;
    unsigned int a4 = -10;//用补码当作正数的值.

    printf("%d,%X,%X\n", a1, a2, a4);

    char c = '0';
    char c1 = '\0';

    printf("%d,%c\n", c, c1);

    int arr1[10] = {1, 2, 3};


    printf("%p\n", arr1);
    printf("%p\n", &arr1[0]);
    printf("%d\n", sizeof(arr1));*/

    /* for (int i = 0; i < 10; ++i) {

         printf("%d ,%d\n",i,arr1[i]);
     }*/


    /*
     * 结果为 fffffff1
     * fffffff1对应的二进制：1111 1111 1111 1111 1111 1111 1111 0001
     * 符号位不变，其它取反：1000 0000 0000 0000 0000 0000 0000 1110
     * 上面加1：            1000 0000 0000 0000 0000 0000 0000 1111  最高位1代表负数，就是-15
     *
     */
    int arr2[10] = {-1, 2, 10, 8, 6, -200, 100, 200};
    int arr3[10] = {1, 2, 3, 4, 5, 6, 7, 8,9, 10};

//    compare(arr2);
//    revertArr(arr3);
//    multiArr();
//    concatStr();
//    timeAndRand();

/*    char str1[20] = {0};
    printf("%lld\n", sizeof(str1));

    char str2[20] = "Hello!HaHaHa";
    char str3[] = "World!";
    size_t  len1=strlen(str2);
    size_t  len2= sizeof(str2);
    printf("%llu, %llu\n",len1,len2);
   strcpy(str2,str3);
    strncpy(str2, str3, 3);
    str2[3] = 0;
    printf("%s\n", str2);*/

/*    char str2[20] = "Hello!";
    char str3[] = "Hello!!";
    int result1=strcmp(str2,str3);
    int result2=strncmp(str2,str3,5);
    printf("%d\n",result1);
    printf("%d\n",result2);*/

    /*int a;
    char c[10]={0};
    char str2[20] ="a==20, str== hello!";
    sscanf(str2,"a==%d, str==%s",&a,c);
    printf("%d , %s\n",a,c);*/

    /*  char str[20] = "Hello!World!";
      char *p = strchr(str, 'D');
      if (NULL == 0) {
           printf("no contains!");
      }*/


/*    int num = 10;
    int num2 = 10;
    const int *pInt = &num;
    pInt=&num2;
    *pInt=20;
    int * const pInt1=&num;
    pInt1=&num;*/

//    testPArr();
//    testPointPP();
//    testPointArray();
/*    int a = 10;
    int b = 20;
    swapInt(&a, &b);
    printf("%d  %d\n", a, b);
    */
//    testPStr();

//    testStrStr();
/*    char pStr[]="asadadd  ddsa  ";
      calSpaceNum(pStr);*/
//    testStruct();
//    testMemControl();
//    testStruct();
//    testStructRoom();
//    testUnion();
//    testEnum();
//    testFile();
//    testStackPoint();
//    testMemCtl();

//    testDuan();
//    testPSetData();

//    testSprintf();

//    testFreePoint();
//    testArrPoint();
//    testPianyi();
//testFunPoint();

//    testMarcroFun1(10,90);
//    testMarco2();
//    testMacroMalloc();
//    testVAARGS();
//    testSingle();

    testArrPoint();
    return 0;

}
