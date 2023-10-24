# include <iostream>
using namespace std;

//冒泡排序

//int main()
//{
//	int a[] = { 4,2,8,0,5,7,1,6,3,9 };
//	int num = sizeof(a) / sizeof(a[0]);  //数组长度
//
//	cout << "冒泡排序前的结果" << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	int num1 = 0;   //转存储空间
//	for (int j = 0; j < num - 1; j++)    //比较次数  外层循环=个数-1
//	{
//		for (int i = 0; i < num - 1 - j; i++)      //完成一次排序    内层循环=个数-1-外层循环
//		{
//			if (a[i] > a[i + 1])
//			{
//				num1 = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = num1;
//			}
//		}
//	
//	}
//	
//	cout << "冒泡排序后的结果" << endl;
//	for (int i = 0; i < num ; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//
//}