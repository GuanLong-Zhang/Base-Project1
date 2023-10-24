# include <iostream>
using namespace std;

//宏变量和常变量都是不可进行修改的，一旦修改就会报错

//宏常量
#define Day 7

//int main()
//{
//	Day = 14; //报错，Day是一个常量，一旦对其进行修改就会报错
//
//	cout << "一周有:" << Day << "天" << endl;
//	
//	常变量
//	const int Month = 12;
//
//	Month = 24; //报错，Month是一个常量，对其进行修改就会报错
//
//	cout << "一年有：" << Month << "月" << endl;
//
//	system("pause");
//
//	return 0;
//
//}