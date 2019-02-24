
///@file     string.cc
///@author     Jason(13933536151@163.com)
///@data     2019-01-22 19:51:1548157898
///
#include<string>  
#include<iostream>
#include<string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void test0(void)
{
    char str1[] = "hello,world";
    char str2[100] = "shenzhen";
    const char *str3 = "wangdao";//C风格的字符串类型


   cout << sizeof(str1)<< endl;
  //strcat(str1,str2);//str1 会越界
  //cout << " str1 = " << str1 << endl;
  cout << "str3 = " << str3 << endl;

    //字符串拼接的操作
    int len = strlen(str1) + strlen(str2) +1;
 strcpy(pstr, str1);
    strcat(pstr,str2);
   cout << "pstr = " << pstr << endl; 
}

void test1(void)
{//c风格字符串转换成C++风格的字符串
//不用去考虑内存分配的问题
//

    string s1 = "hello,world";
    string s2 = "shenzhen";
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
//C++字符串的拼接
    string s3 = s1 + s2;
    cout << "s3 = " << s3 << endl;
    string s4 = s1 + "shenzhen";
    cout << "s4 = " << s4 << endl;
    

    string s5 = "hello,world" + s2;
    cout << "s5 = " << s5 <<endl;
    string s6 = s1 + 'A';
    cout << "s6 = " << s6 << endl;

    s1.append(s2);
    //直接对字符串进行拼接
    cout << "s1 = " << s1 << endl;
    

    //获取字符串长度
    int len = s1.size();
    cout << "s1's size =  "<< len << endl;
    
    len = s1.length();
    cout << "s1's length = "<< len << endl;
    //遍历string
    for(int idx = 0;idx != len ; ++idx)
    {
        cout << s1[idx] << endl;//数组的下标访问        
    }


    //将C++风格字符串转换为C风格字符串
    const char * pdata = s1.c_str();
    cout << "pdata[1] =" << pdata[1] << endl;
    const char * pdata2= s1.data();
    cout << "pdata2[1]="<< pdata2[1]<< endl;

   //查找字串
    int pos = s1.find("world");
   cout << "pos = "<<pos << endl; 
   
    //截取字串
    
    string s7 = s1.substr(1,10);
    cout << "s7 = "<< s7<<endl;
    string s8 = s1.substr();
    cout << "s8 = "<< s8<<endl;
    //判断字符串是否相等
    cout << "if(s3 == s4):"<<(s3 == s4) << endl;    
    cout << "if(s1 == s4):"<<(s1 == s2) << endl;



        
}
int main()
{
    test0();
    test1(); 
}
