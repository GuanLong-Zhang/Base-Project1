# include<iostream>
using namespace std;

//两个数字进行交换  值传递
//void swap1(int a, int b)
//{
//	int num = b;
//	b = a;
//	a = num;
//	cout << "功能函数里面的a=" << a<<endl;
//	cout << "功能函数里面的b=" << b<<endl;
//}

//地址传递
//void swap2(int *p, int *p1)
//{
//	int num = *p;
//	*p = *p1;
//	*p1 = num;
//	cout << "功能函数里面的a=" << *p << endl;
//	cout << "功能函数里面的b=" << *p1 << endl;
//}


//冒泡排序
void maopao(int * a, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int num1 = a[j];
				a[j] = a[j + 1];
				a[j + 1] = num1;
			}
		}
	}
}

void printa(int * a, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


//指针的联合使用
//int main()
//{
//	//指针与数组
//	/*int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "数组的第一个元素:" << a[0] << endl;*/
//
//	//int * p = a;   //数组名可以作为首地址使用
//	//cout << "数组的第一个元素:" << *p << endl;
//	//p++;  //指针的地址向后移动一位
//	//cout << "数组的第二个元素:" << *p << endl;
//
//	//int* p = a;
//	//for (int i = 0; i < 10; i++)  //外围i用于指定指针的地址移动的次数
//	//{
//	//	cout << *p<<" ";
//	//	p++;    //地址向后移动一位
//	//}
//	//cout << endl;
//
//	//指针和函数
//	//int a=10, b=20;
//
//	////值传递
//	//swap1(a, b);   //没有改变实参的值
//	//cout << "主函数里面的a=" << a << endl;
//	//cout << "主函数里面的b=" << b << endl;
//
//	////地址传递
//	//swap2(&a, &b);  //改变了实参的值
//	//cout << "主函数里面的a=" << a<<endl;
//	//cout << "主函数里面的b=" << b<<endl;
//
//	//指针、数组、函数
//	int a[] = { 4,2,8,0,5,7,1,6,3,9 };
//	int len = sizeof(a)/sizeof(a[0]);
//	maopao(a, len);
//	printa(a, len);
//
//	system("pause");
//	return 0;
//}