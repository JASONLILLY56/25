///
///@file     pointer.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-09 11:58:1549684685
///
#include<stdio.h>  
#include<iostream>

using std::cout;
using std::cin;
using std::endl;
int *p1; 

int func1()
{
    int num = 10;
    return num;
}

int test0(void)
{
    int * p2;//野指针
    *p2 = 10;
    
    
    printf("p1 = %p\n",p1);
   printf("p2 = %p\n",p2); 
    
   
}

int main(void)
{
    test0();
    int a = func1();
    printf("&a = %p\n",&a);
//int & ref = func1();//引用不能绑定到右值上；
//&func1();//右值，即没有地方存的值，不能取地址的变量
//int & ref = 10;//非const引用不能绑定在右值之上
//const引用可以绑定到右值
    const int & ref =10;
    const int & ref1 = func1();
//    int & ref= a;
    return 0;
}
