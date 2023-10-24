# include<iostream>
using namespace std;

//指针  作用：用来保存地址

//int main()
//{
//	//指针的定义
//	/*int a = 10;*/
//	
//	//方式一
//	/*int * p;
//	p = &a;*/
//
//	//方式二   效果等价于方式一
//	//int * p = &a;
//
//	//cout << "a的地址为：" << p << endl;   //可以通过p表示，也可以通过&a表示
//	//cout << "a的地址为：" << &a << endl;
//
//	//cout <<"a的值为："<< * p << endl;     //*p表示数值，p表示地址
//
//	//*p = 1000;
//	//cout << "*p的值为：" << *p<<endl;   //通过*p访问到了a ,对其值进行了修改
//	//cout << "a的值为：" << a<<endl;
//
//	//cout << "int * 所占内存大小：" << sizeof(int *) << endl;   //在64位系统下指针都占用8个字节内存，和数据类型没有关系，32位系统减半
//	//cout << "double * 所占内存大小：" << sizeof(double *) << endl;   //x86表示32位系统 x64表示64位系统
//	//cout << "char * 所占内存大小：" << sizeof(char *) << endl;
//	//cout << "flaot * 所占内存大小：" << sizeof(float *) << endl;
//
//	//空指针  初始化指针变量  
//	//int * p = NULL;
//
//	//*p = 100;  //报错 空指针不可以进行访问
//
//	//野指针   指针变量指向非法内存空间
//	//int * p = (int *)0x0011;
//
//	//cout << p << endl;
//
//	//空指针和野指针都不是我们申请的空间，因此不要进行访问
//
//	//const修饰指针
//
//	//常量指针  指针指向可以修改，但是指向的值不可以修改
//	//int b=20,c=40;
//	//const int * p = &b;
//
//	//cout << p << endl;
//	//cout << *p << endl;
//	////*p = 20;  //错误 指向的值不可以进行修改
//	//
//	//p = &c;
//	//cout << p << endl;
//	//cout << *p << endl;
//
//	//指针常量  指针指向的值可以修改 指针的指向不可以修改
//	//int d = 20, e = 40;
//	//int * const p = &d;
//	//
//	//cout << p << endl;
//	//cout << *p << endl;
//
//	//*p = 40;
//	////p = &e;  //错误 指针的指向不可以修改
//
//	//cout << p << endl;
//	//cout << *p << endl;
//
//	//const修饰指针 又修饰常量  常量指针常量  指向和值都不可以进行修改
//	int f = 20, h = 40;
//	const int * const p = &f;
//
//	//p = &h;   //错误 指向不可以修改
//	//*p = 40;  //错误 值不可以修改
//
//
//
//	system("pause");
//	return 0;
//}