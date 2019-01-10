///
///@file     const.cc
///@author     Jason(13933536151@163.com)
///@data     2019-01-10 05:20:1547126429
///
  
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//一个程序经历的阶段
//编辑-->预处理（预编译）-->编译-->汇编-->链接-->执行
//


//预处理
#define MAX 1000

int test0(void)
{
 int num = 2;
 cout<< num*MAX<<endl;
 return 0;

}

void test1(){
	//const int num;//const.cc:24:12: error: uninitialized const ‘num’ [-fpermissive]
	 		// const int num;
	              	//^~~
			//常量必须进行初始化      
	const int value = 1;
	//value = 2;//error 常量的值不能进行修改
	cout<<"value= "<< value << endl;

}

int main (void)
{
test1();
return 0;
}


// 35 const.cc: In function ‘void test1()’:
//  36 const.cc:24:8: error: ‘in’ does not name a type; did you mean ‘int’?
//   37   const in value = 1;
//    38           ^~
//     39                   int
//      40                   const.cc:25:2: error: ‘value’ was not declared in this scope
//       41                     value = 2;
//        42                       ^~~~~
//         43                       const.cc:25:2: note: suggested alternative: ‘valloc’
//          44                         value = 2;
//           45                           ^~~~~
//            46                             valloca
