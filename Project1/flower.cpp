#include<iostream>
using namespace std;

//循环结构案例——水仙花数

//int main()
//{
//	cout << "输出从a开始的所有水仙花数"<<endl;
//	int a,b,num1,num2,num3;
//	cout << "请输入一个三位数起始值a:";
//	cin >> a;
//	do
//	{
//		num1 = a % 10;       //个位
//		num2 = a / 10 % 10;  //十位
//		num3 = a / 100;      //百位
//		b = num1*num1*num1  + num2*num2*num2 + num3*num3*num3;
//		if (a == b)
//		{
//			cout << a << " ";	
//		}
//		a++;
//	} 
//	while (a < 1000);
//
//	system("pause");
//	return 0;
//}