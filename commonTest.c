//
// Created by TinyChan on 2021/8/9.
//
#include "commonTest.h"


void testOne(){
    printf("sizeof int %lld " "test"  "one \n", sizeof(int ));
    char dest[20]={0};
    sprintf(dest,"name:%s age:%d","Lucy",20);
    printf("dest,%s",dest);
}


void testTwo(){
    char name[10]={0};
    int  age=0;

    char src[]="name:Lucy, age: 18 ";
    char template[]="name:%s, age: %d ";

    sscanf(src,template,name,&age);
    printf("%s %d",name,age);

   /* char name[10]={0};
    int  age;
    char str2[20] ="a==20, str== hello!";
    sscanf(str2,"a==%d, str==%s",&age,name);
    printf("%d  %s",age,name);*/
}