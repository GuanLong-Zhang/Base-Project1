# include"wap.h"

void wap(int a, int b)
{
	cout << "�任ǰa��ֵΪ��" << a << endl;
	cout << "�任ǰb��ֵΪ��" << b << endl;
	int num = a;
	a = b;
	b = num;
	
	cout << "�任��a��ֵΪ��" << a << endl;
	cout << "�任��b��ֵΪ��" << b << endl;

}