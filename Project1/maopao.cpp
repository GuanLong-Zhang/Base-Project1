# include <iostream>
using namespace std;

//ð������

//int main()
//{
//	int a[] = { 4,2,8,0,5,7,1,6,3,9 };
//	int num = sizeof(a) / sizeof(a[0]);  //���鳤��
//
//	cout << "ð������ǰ�Ľ��" << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	int num1 = 0;   //ת�洢�ռ�
//	for (int j = 0; j < num - 1; j++)    //�Ƚϴ���  ���ѭ��=����-1
//	{
//		for (int i = 0; i < num - 1 - j; i++)      //���һ������    �ڲ�ѭ��=����-1-���ѭ��
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
//	cout << "ð�������Ľ��" << endl;
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