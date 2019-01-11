///
///@file     reference1.cc
///@author     Jason(13933536151@163.com)
///@data     2019-01-11 05:57:1547215037
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

//引用于指针的差别？
//相同点：都有地址的概念在里面
//
//不同点：
//1.指针可以不进行初始化，指针是可以独立存在的
//	但是引用不行，引用必须进行初始化，指针没有必要
//2.指针可以设置为NULL，但是引用不行
//3.引用一旦进行初始化之后，不会再改变其指向，但指针可以
//
//引用是受限制的指针
//
//
//引用作为函数的参数
//
//
//
//
//
//

//参数的传递方式：值传递
void swap1(int x,int y)
{

	int temp = x;
	x = y;
	y = temp;

}
//swap()有自己的栈空间
//x,y是一个副本
//


//参数的传递方式：地址传递
//地址传递实质上还是值传递

void swap2(int * px,int * py)
{
	int temp = *px;
	*px = *py;
	*py = temp;

}

//----------------引用
//引用是操作的实参本身
//引用传递可以提高程序的执行效率，不需要进行数据赋值
//
//引用传递操作就是实参本身
void swap(int & x,int & y)
{

	int temp = x;
	x = y;
	y = temp;
}


//---------------test1-------------------------------------
void test1(void)
{

	int a = 3, b = 4;
	cout << "a= "<< a << '\t'<< "b= "<< b << endl;
	//swap(a,b);//a,b传给swap()后是在swap()函数栈中重新开辟空间
	//swap(&a,&b);
	swap(a,b);
	//引用传递比地址传递更直观
	cout << "a= "<< a << '\t'<< "b= "<< b << endl;

}

void test0(void)
{
	int num = 100;
	int & ref = num;//引用是一个变量的别名，引用的初始化
	cout<<"num ="<< num << endl;
	cout << "ref="<<ref<<endl;
	cout << "&num="<< num <<endl;
	cout << "&ref="<< num << endl;


	ref = 200;
	cout<< "修改引用之后的值："<< endl;
	cout<<"num ="<< num << endl;
	cout << "ref="<<ref<<endl;

//	int &ref1;//error//引用是不能独立存在的，必须要绑定到某一变量上
}
int main()
{
 test0();
 test1();
 return 0;
}
