# include<iostream>
using namespace std;

//函数的声明主要用于子函数在主函数之后的情况，用于主函数去找子函数,可以写多次声明，但是只能定义一次
int compare(int a, int b);

//函数的定义与调用

//有参有返
int add(int a, int b)   //形参
{
	int c = a + b;
	return c;
}

//有参无返
void swap(int a, int b)  //无返回值 void   
{
	cout << "交换前的a的值为：" << a << endl;
	cout << "交换前的b的值为：" << b << endl;
	int swap = a;
	a = b;
	b = swap;
	cout << "交换后的a的值为：" << a << endl;
	cout << "交换后的b的值为：" << b << endl;
}

//无参无返
void hello_world()
{
	cout << "hello,world" << endl;
}

//无参有返
int test()
{
	cout << "this is a test" << endl;
	return 1000;
}



//int main()
//{
//	//无参无返调用
//	hello_world();
//
//	//有参有返的调用
//	int a, b;
//	cout << "请输入两个数值" << endl;
//	cout << "a=";
//	cin >> a;
//	cout << "b=";
//	cin >> b;
//	cout<<"两者相加结果为："<<add(a, b) << endl;    //实参
//
//	//有参无返的调用
//	swap(a, b);   //值传递 形参发生改变，实参并不会发生改变
//	cout << "主函数中a的值为：" << a << endl;
//	cout << "主函数中b的值为：" << b << endl;
//
//	//无参有返的调用
//	cout<<test()<<endl;
//
//	cout << "a和b中的较大的一个数:" << compare(a, b) << endl;
//
//	system("pause");
//	return 0;
//}

int compare(int a, int b)
{
	//方式一
	/*if (a > b)
	{
		return a;
	}
	return b;*/
	//方式二  三目运算符  优势在于公式简单
	return a > b ? a : b;
}