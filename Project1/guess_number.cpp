#include <iostream>
using namespace std;

//循环结构案例——猜数字

//int main()
//{
//	cout << "猜数字游戏数字范围为0-99" << endl;
//	//添加随机数种子，防止每次生成的随机数都一样
//	srand((unsigned int)time(NULL));
//	//生成0-99的随机数
//	int a=rand() % 100,b;
//	//cout << "生成的0-99的随机数为：" << a << endl;   //此处为答案
//	cout << "请输入你猜的数字：";	
//	cin >> b;
//	cout << "你猜的数字为：" << b << endl;
//	while (b != a)
//	{
//		
//		if (b > a)
//		{
//			cout << "你所猜的数字比生成的随机数大" << endl;
//		}
//		else
//		{
//			cout << "你所猜的数字比生成的随机数小" << endl;
//		}	
//		cout << "请输入你猜的数字：";
//		cin >> b;
//		cout << "你猜的数字为：" << b << endl;
//	}
//	cout << "恭喜你猜对了" << endl;
//
//	system("pause");
//	return 0;
//}