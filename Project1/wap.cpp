# include"wap.h"

void wap(int a, int b)
{
	cout << "变换前a的值为：" << a << endl;
	cout << "变换前b的值为：" << b << endl;
	int num = a;
	a = b;
	b = num;
	
	cout << "变换后a的值为：" << a << endl;
	cout << "变换后b的值为：" << b << endl;

}