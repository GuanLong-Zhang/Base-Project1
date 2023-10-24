# include <iostream>
using namespace std;

//字符型变量只能用单引号将其括起来
//且单引号里面只能有一个字符
//只占用一个字节的大小

//int main()
//{
//	//创建字符型变量
//	char ch = 'a';
//
//	cout << "ch:" << ch << endl;
//
//	//所占内存大小
//	cout << "char所占内存大小为：" << sizeof(ch) <<"字节" << endl;
//
//	//char常见的错误
//	//char ch1 = "a"; //报错了，不能用双引号对变量进行括起来,只能用单引号
//	//char ch2 = 'abcdef';  //报错了，括号里不可以有很多字符,只能有一个字符
//
//	//字符型变量对应的ASICC码
//	//a对应97  
//	//A对应65
//	cout << "字符型变量ch对应的ASICC编码为；" << int(ch) << endl;
//
//	system("pause");
//
//	return 0;
//}