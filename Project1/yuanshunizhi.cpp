# include<iostream>
using namespace std;

// 元素逆置

//int main()
//{
//	cout << "数组元素逆置" << endl;
//	int a[] = { 1,3,2,5,4,10 };
//	int j = sizeof(a) / sizeof(a[0]);   //数组长度
//	cout << "数组长度为：" << j << endl;
//
//	cout << "原始数组为：";
//	for (int i = 0; i < j; i++)
//	{
//		cout << a[i] << " ";
//	} 
//	cout << endl;
//	
//	int num = 0;
//	for (int i = 0; i < j / 2; i++)
//	{
//		num = a[i];
//		a[i] = a[j - 1 - i];
//		a[j - 1 - i] = num;
//	}
//	cout << "逆置数组为：";
//	for (int i = 0; i < j; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}