# include<iostream>
using namespace std;

//算数运算符

//int main()
//{

//	//加 减 乘 除 取余
//	int a = 10;
//	int b = 3;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "a+b=" << a + b << endl;
//	cout << "a-b=" << a - b << endl;
//	cout << "a*b=" << a * b << endl;
//
//	//相除和取余操作的时候除数不可以是0，是0就会报错
//	cout << "a/b=" << a / b << endl;   //两个整数相除结果依然是整数,取整操作,会将小数部分舍去
//	cout << "a%b=" << a % b << endl;   //两个整数取余的本质就是求余数，只有整型变量可以进行取余操作
//
//	//前置递增 递减
//	cout << "a=" << ++a << endl;   //先加1，然后进行表达式的运算   输出a=11
//
//	//后置递增 递减
//	cout << "b=" << b++ << endl;   //先进行表达式运算，再进行加1   输出b=3 即原样输出
//
//	//前置后置运算举例
//	int a1 = 10;
//	int b1 = ++a1 * 10;
//	cout << "a1=" << a1 << endl;  //输出a1=11
//	cout << "b1=" << b1 << endl;  //输出b1=110=11*10
//
//	int a2 = 10;
//	int b2 = a2++ * 10;
//	cout << "a2=" << a2 << endl;  //输出a2=11
//	cout << "b2=" << b2 << endl;  //输出b2=100=10*10
//
//	double c = 0.5;
//	double d = 0.22;
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//	cout << "c / d ="<<c / d << endl;  //两个浮点型相除可以是小数
//	//cout << "c % d =" << c % d << endl;  //两个浮点型不可以进行取余操作

//	system("pause");
//	return 0;
//}