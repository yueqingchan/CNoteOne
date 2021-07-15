//
// Created by 87572 on 21/6/12.
//



#include "macro.h"
#include <stdio.h>
#include <stdlib.h>

void testMarcroFun1(int a, int b) {


    int result = SUM(a, b);

    printf("%d\n",result);
    printf("%s\n",__FILE__);
    printf("%d\n",__LINE__);
    printf("%s\n",__TIME__);

}

#define STR1 "123\
                    456"    //123                    456
#define STR2 "123"\
                    "456"   //123456

#define PRINTFN(X,Y)  (printf("%s %d\n",(X),(Y)))
void testMarco2(){

    printf("%s\n","start-----------------------------1"   "100=-------"      "1\n" );
    printf("%s\n",STR1);
    printf("%s\n",STR2);
    printf("%s\n","end-----------------------------" "++++++++++++++++");
    char name[100]="Hello " "World!";
    PRINTFN(name,100);
}


//()也不能乱加,否则会影响表达式 比如 (int)*  是错误的!
#define MALLOC(NAME,X)     ((NAME *) malloc(sizeof(NAME)*(X)))

void testMacroMalloc(){
    int* num= (int *) malloc(sizeof(int)*10);
    *num=100;
    printf("%d\n",*num);
    int *num2=MALLOC(int ,10);
    *num2=100;
    printf("%d\n",*num2);
}

#define PRINTF2(...) (printf("%s %d\n",__VA_ARGS__))
void testVAARGS(){
    PRINTF2("Hello!",100);
}

#define TESTSINGLE(STR) #STR
void testSingle(){
    printf("%s", TESTSINGLE(HELLO) "hhh" );
}

#define SWAP(X,Y)  ((X)>(Y)?(X):(Y))


void testSwapDefine(){

    int a=10;
    int b=10;
    int c= a>b  ? a:b;

}