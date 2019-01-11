///
///@file     const2.cc
///@author     Jason(13933536151@163.com)
///@data     2019-01-11 05:04:1547211899
///

#include<iostream>
using std::cout;
using std::cin;
using std::endl;


//数组指针	vs	指针数组
//数组指针：int (*p)[] 本质上是一个指针，指向的是一个数组
//指针数组：int *p[]本质上是一个数组,数组里面存放的是一个指针
//
//函数指针	vs	指针函数
//函数指针：int (*p)() 本质上是一个指针，指向的是一个函数
//指针函数：int *pfunc()本质上是一个函数，其返回值是一个指针
//
//常量指针	vs	指针常量
//常量指针：const出现在*号左边时，指针本身的值可以修改，但是指针所指向的内容不能修改
//指针常量：const出现在*号右边是，指针本身的值不可以修改，但是指针所指向的内容能修改
//



void test0(void)
{
	int num1 =10;
	int num2 = 11;
//___________________________	
	const int * pa= &num1;//常量指针(pointer to const)

//	*pa = 20;//error//不能通过指针pa更改所指变量的值
	pa =&num2;//可以改变指针pa的指向

	//________________________
	int const * pb= &num1;//常量指针
//	*pb =20;//error
	pb = &num2;
//
//当const在*号左边的时候指针的值可以修改
//但指针所指向的内容不能修改
//________________________________________________________________________	
	//________________________
	int * const pc = &num1;//指针常量(const pointer)
	//_____________________________________
	//指针常量是指指针本身的值（也就是地址的值）不能修改
	//—————————————————————————————————————
	//而常量指针是指指针所指向的内容不能修改
	*pc = 20;//可以通过指针pc改变所指变量的值
//	pc= &num2;//error //不能改变指针pa的指向

	//____________________________________________
	const int * const pd = &num1;//两者都不能进行修改


//const2.cc: In function ‘void test0()’:
//const2.cc:19:8: error: assignment of read-only location ‘* pa’
//  *pa = 20;//error//不能通过指针pa更改所指变量的值
//          ^~
//          const2.cc:23:10: error: expected unqualified-id before ‘int’
//            const * int pb= &num1;
//                      ^~~
//                      const2.cc:23:10: error: expected initializer before ‘int’
//                      const2.cc:24:3: error: ‘pb’ was not declared in this scope
//                        *pb =20;
//                           ^~
//                           const2.cc:24:3: note: suggested alternative: ‘pa’
//                             *pb =20;
//                                ^~
//                                   pa
//                                   const2.cc:30:7: error: assignment of read-only variable ‘pc’
//                                     pc= &num2;
//                                     )

}


/**************************main()********************************/
int main()
{
	test0();
	return 0;
}
