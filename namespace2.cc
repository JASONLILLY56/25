///
///@file     namespace1.cc
///@author     Jason(13933536151@163.com)
///@data     2019-01-10 03:04:1547118264
///
  
#include<iostream>
//using namespace std;// using编译指令
//第二种方法不将std里的命名空间全部引进来
//using 编译指令，会把命名空间std中的所有实体一次性全部引进来，造成二义性
//
//
/
//不建议最开始使用using namespace std，
//因为在定义某个函数时所用函数名有可能在namespace std中有对应的实体
namespace A
{

	void displayA(){
		std::cout<< "A::displayA()"<<std::endl;//作用域限定符，避免与自己定义的函数名重复。a
}


}//end of namespace A
//不建议使用using namespace std;
//void cout()这个操作
//这里应该编译不通呀不知为何编译通过了
//实际中不能这样，cout是namesapce std中对象的名字
//见下方,只要main()函数中不调用cout(),则编译和执行过程中是不会报错
using namespace A;
void cout()
{
	std::cout<<"cout()"<<std::endl;

}


int main()
{
	//A::display();
	A::displayA();
	cout();
	return 0;
	//namespace1.cc: In function ‘int main()’:
	//namespace1.cc:36:2: error: reference to ‘cout’ is ambiguous
	//  cout();
	//    ^~~~
	//    namespace1.cc:24:6: note: candidates are: void cout()
	//     void cout()
	//           ^~~~
	//           In file included from namespace1.cc:7:0:
	//           /usr/include/c++/7/iostream:61:18: note:                 std::ostream std::cout
	//              extern ostream cout;  /// Linked to standard output
	//                                ^~~~
	//这里说了很ambiguous，因为namespace std中cout为输出对象

}
