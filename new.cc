///
///@file     new.cc
///@author     Jason(13933536151@163.com)
///@data     2019-01-11 08:29:1547224191
///
#include<string.h>  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

//---------------------常考问题---------------------
//malloc/free	与new/delete的差别是什么？
//---------------第一点-----------------
//malloc/free是标准库函数
//
//new/delete是表达式
//--------------------------------------
//---------------第二点-----------------
//malloc只负责开辟空间，但并不会进行初始化
//new表达式开辟空间之后，也会进行初始化
//--------------------------------------------------


//--------------------C语言开辟堆空间的方式--------------------
void test0(void)
{
	int *p = (int *)malloc(sizeof(int));//开辟堆空间
	*p = 10;

	cout<<"*p="<<*p<<endl;
	
	int *p2 = (int *)malloc(sizeof(int)*10);
	//开辟数组空间
	::memset(p2, 0,sizeof(int)*10);//初始化为0
	//C语言中的这些函数都在匿名空间里
	//bzero();
	for(int idx=0; idx<10; ++idx)
		p2[idx] = idx;

	free(p);//malloc和free需要成对出现
	free(p2);//回收堆空间
}
//-------------------------------------------------------------

//---------------------C++开辟堆空间方式--------------------
void test1(void)
{
	int *p = new int(1);//new int的时候直接给这个值设了一个1；
	cout << "*p= "<< *p << endl;

	int *p2 = new int[10]();//这里加上括号会初始化为0
							//不加括号?
	//C++开辟数组堆空间
	for(int idx=0; idx<10; ++idx)
		p2[idx] = idx;
	delete p;//new和delete成对出现
	delete [] p2;//回收数组；

}
int main()
{
	test0();
	test1();
	return 0;
 
}
