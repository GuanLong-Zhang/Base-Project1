# include<iostream>
using namespace std;

//������������Ҫ�����Ӻ�����������֮������������������ȥ���Ӻ���,����д�������������ֻ�ܶ���һ��
int compare(int a, int b);

//�����Ķ��������

//�в��з�
int add(int a, int b)   //�β�
{
	int c = a + b;
	return c;
}

//�в��޷�
void swap(int a, int b)  //�޷���ֵ void   
{
	cout << "����ǰ��a��ֵΪ��" << a << endl;
	cout << "����ǰ��b��ֵΪ��" << b << endl;
	int swap = a;
	a = b;
	b = swap;
	cout << "�������a��ֵΪ��" << a << endl;
	cout << "�������b��ֵΪ��" << b << endl;
}

//�޲��޷�
void hello_world()
{
	cout << "hello,world" << endl;
}

//�޲��з�
int test()
{
	cout << "this is a test" << endl;
	return 1000;
}



//int main()
//{
//	//�޲��޷�����
//	hello_world();
//
//	//�в��з��ĵ���
//	int a, b;
//	cout << "������������ֵ" << endl;
//	cout << "a=";
//	cin >> a;
//	cout << "b=";
//	cin >> b;
//	cout<<"������ӽ��Ϊ��"<<add(a, b) << endl;    //ʵ��
//
//	//�в��޷��ĵ���
//	swap(a, b);   //ֵ���� �βη����ı䣬ʵ�β����ᷢ���ı�
//	cout << "��������a��ֵΪ��" << a << endl;
//	cout << "��������b��ֵΪ��" << b << endl;
//
//	//�޲��з��ĵ���
//	cout<<test()<<endl;
//
//	cout << "a��b�еĽϴ��һ����:" << compare(a, b) << endl;
//
//	system("pause");
//	return 0;
//}

int compare(int a, int b)
{
	//��ʽһ
	/*if (a > b)
	{
		return a;
	}
	return b;*/
	//��ʽ��  ��Ŀ�����  �������ڹ�ʽ��
	return a > b ? a : b;
}