# include<iostream>
using namespace std;

//�������ֽ��н���  ֵ����
//void swap1(int a, int b)
//{
//	int num = b;
//	b = a;
//	a = num;
//	cout << "���ܺ��������a=" << a<<endl;
//	cout << "���ܺ��������b=" << b<<endl;
//}

//��ַ����
//void swap2(int *p, int *p1)
//{
//	int num = *p;
//	*p = *p1;
//	*p1 = num;
//	cout << "���ܺ��������a=" << *p << endl;
//	cout << "���ܺ��������b=" << *p1 << endl;
//}


//ð������
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


//ָ�������ʹ��
//int main()
//{
//	//ָ��������
//	/*int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "����ĵ�һ��Ԫ��:" << a[0] << endl;*/
//
//	//int * p = a;   //������������Ϊ�׵�ַʹ��
//	//cout << "����ĵ�һ��Ԫ��:" << *p << endl;
//	//p++;  //ָ��ĵ�ַ����ƶ�һλ
//	//cout << "����ĵڶ���Ԫ��:" << *p << endl;
//
//	//int* p = a;
//	//for (int i = 0; i < 10; i++)  //��Χi����ָ��ָ��ĵ�ַ�ƶ��Ĵ���
//	//{
//	//	cout << *p<<" ";
//	//	p++;    //��ַ����ƶ�һλ
//	//}
//	//cout << endl;
//
//	//ָ��ͺ���
//	//int a=10, b=20;
//
//	////ֵ����
//	//swap1(a, b);   //û�иı�ʵ�ε�ֵ
//	//cout << "�����������a=" << a << endl;
//	//cout << "�����������b=" << b << endl;
//
//	////��ַ����
//	//swap2(&a, &b);  //�ı���ʵ�ε�ֵ
//	//cout << "�����������a=" << a<<endl;
//	//cout << "�����������b=" << b<<endl;
//
//	//ָ�롢���顢����
//	int a[] = { 4,2,8,0,5,7,1,6,3,9 };
//	int len = sizeof(a)/sizeof(a[0]);
//	maopao(a, len);
//	printa(a, len);
//
//	system("pause");
//	return 0;
//}