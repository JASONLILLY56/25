///
///@file     namespace3.cc
///@author     Jason(13933536151@163.com)
///@data     2019-01-10 03:56:1547121378
///
  
//命名空间类似于黑洞
//命名空间也可以进行嵌套使用


#include<iostream>
using std::cout;//using声明机制
using std::endl;//using声明机制只会引入一个单独实体，引谁就是谁
int num = 1;

namespace B
{
	void displayC();
}//在A前面进行一次声明是为了displayA()中可以调用B::displayC()


namespace A
{
	int num = 10;
	void displayA()
	{
		cout<<"A::display()"<<endl;
		B::displayC();
	//displayC是相当于在B命名空间中给出的定义
	//但是函数可以多处进行声明。所以当A中想调用B::displayC时
	//可以在命名空间A上再进行一次声明
	//命名空间中的函数声明
	}

//命名空间的嵌套使用
	namespace C
	{
		int num = 22;
		void displayC()
		{
			cout<<"A::C::num = "<<num<<endl;
			cout<<"A::C::displayC()"<<endl;
		}
	}
}
//end of namespace A

namespace B
{
	int num = 100 ;
	void displayB(int num)
	{
		cout<<"形参num="<<num<<endl;
	//就近原则，输出的是形参的值
		cout<<"B::num="<<B::num<<endl;
		//打印输出B中的num
		cout<<"A::num="<<A::num<<endl;
		//打印输出A中的num
		cout<<"全局变量num="<<::num<<endl;//匿名的命名空间
		//打印输出全局变量num
//C语言的库函数都是位于匿名空间的
		A::displayA();
	}

	void displayC()
	{
		cout<<"displayC()"<<endl;
	}
}

using A::displayA;
int main()
{
	A::displayA();
	B::displayB(50);
	A::C::displayC();//命名空间的嵌套使用
 	return 0;
}
