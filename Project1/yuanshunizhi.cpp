# include<iostream>
using namespace std;

// Ԫ������

//int main()
//{
//	cout << "����Ԫ������" << endl;
//	int a[] = { 1,3,2,5,4,10 };
//	int j = sizeof(a) / sizeof(a[0]);   //���鳤��
//	cout << "���鳤��Ϊ��" << j << endl;
//
//	cout << "ԭʼ����Ϊ��";
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
//	cout << "��������Ϊ��";
//	for (int i = 0; i < j; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}