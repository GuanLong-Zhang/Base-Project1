# include<iostream>
using namespace std;

//����
//ÿ��Ԫ�ض�����ͬ����������
//�������ڴ�λ�����


//int main()
//{
//	// ��������ֶ�����ʽ
//	// ��ʽ1���������� �����������ݳ��ȡ�
//	
//	int a[5];
//	a[0] = 10;
//	a[1] = 20;
//	a[2] = 30;
//	a[3] = 40;
//	a[4] = 50;
//	//�������
//	cout << a[0] << endl;
//	cout << a[1] << endl;
//	cout << a[2] << endl;
//	cout << a[3] << endl;
//	cout << a[4] << endl;
//
//	//��ʽ2���������� �����������ݳ��ȡ�={ֵ1��ֵ2��....}
//
//	int a1[5] = { 10,20,30,40,50 };     //ȱֵ������Զ���0������ֻ��10��20��30��������10��20��30��0��0
//	//�������  ����forѭ��ȫ�����
//	for (int i = 0; i < 5; i++)
//	{
//		cout <<a1[i] <<endl;
//	}
//
//	//��ʽ3���������� ����������={ֵ1��ֵ2��....}  �͵ڶ��ֵ�������ǲ�д���ݳ��ȣ��õ����Լ���
//
//	int a2[] = { 10,20,30,40,50,60,70,80,90 };
//
//	for (int i = 0; i < 9; i++)
//	{
//		cout << a2[i] << endl;
//	}
//
//	//һά����������;   1��ͳ��������ռ�ڴ��С   2����ȡ�����ڴ��׵�ַ
//
//	int a3[] = { 0,1,2,3,4,5,6 };
//	cout << "a3����ռ���ڴ��С��" << sizeof(a3) << endl;  //int����ռ4���ֽڣ�һ��7λ����ռ28���ֽ�
//	cout << "a3[0]��ռ�ڴ��С��" << sizeof(a3[0]) << endl;
//	cout << "a3�ĳ���Ϊ��" << sizeof(a3) / sizeof(a3[0]) << endl;   //�ܹ���ռ���ֽڳ��Ե�����ռ���ֽھͿ��Եõ���ռ�õĳ�����
//	cout << "a3�׵�ַΪ��" << a3 << endl;
//	cout << "a3��һ��Ԫ�صĵ�ַ��" <<(int) & a3[0] << endl;   //&Ϊȡ��ַ����  ����int�������ݵ�ǿ��ת��
//	cout << "a3�ڶ���Ԫ�ص�ַΪ��" <<(int) &a3[1] << endl;    //�����м����4���ֽ�
//
//
//	//��ά����
//	//��ά�������ֶ��巽��
//	//��ʽһ 
//	int a4[2][3];
//	a4[0][0] = 1;
//	a4[0][1] = 2;
//	a4[0][2] = 3;
//	a4[1][0] = 4;
//	a4[1][1] = 5;
//	a4[1][2] = 6;
//
//	cout << a4[0][0] << " ";
//	cout << a4[0][1] << " ";
//	cout << a4[0][2] << endl;
//	cout << a4[1][0] << " ";
//	cout << a4[1][1] << " ";
//	cout << a4[1][2] << endl;
//
//	//Ƕ�״�ӡ���
//	for (int i = 0; i < 2; i++)   //�ⲿѭ����ӡ����
//	{
//		for (int j = 0; j < 3; j++)  //�ڲ�ѭ����ӡ����
//		{
//			cout << a4[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	//��ʽ��  ��ʾ�ĸ���ֱ��  �Ƽ����õڶ��η�ʽ
//	int a5[2][3] = { {1,2,3},{4,5,6} };
//
//	for (int i = 0; i < 2; i++)   //�ⲿѭ����ӡ����
//	{
//		for (int j = 0; j < 3; j++)  //�ڲ�ѭ����ӡ����
//		{
//			cout << a5[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	//��ʽ��
//	int a6[2][3] = { 1,2,3,4,5,6 };
//
//	for (int i = 0; i < 2; i++)   //�ⲿѭ����ӡ����
//	{
//		for (int j = 0; j < 3; j++)  //�ڲ�ѭ����ӡ����
//		{
//			cout << a6[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	//��ʽ��  �뷽ʽ��������Ϊ��д�������������Ի��Լ���������
//	int a7[][3] = { 1,2,3,4,5,6 };
//
//	for (int i = 0; i < 2; i++)   //�ⲿѭ����ӡ����
//	{
//		for (int j = 0; j < 3; j++)  //�ڲ�ѭ����ӡ����
//		{
//			cout << a7[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	//��ά����������; ��һά��������;һ��  1���鿴��ռ�ڴ��С 2���鿴Ԫ���׵�ַ
//	cout << "��ά����a7��ռ���ڴ��С��"<<sizeof(a7) << endl;
//	cout << "��ά����a7��һ��Ԫ����ռ���ڴ��С��" << sizeof(a7[0]) << endl;
//	cout << "��ά����a7��һ��Ԫ����ռ���ڴ��С��" << sizeof(a7[0][0]) << endl;
//	cout << "��ά���������Ϊ��" << sizeof(a7) / sizeof(a7[0]) << endl;        //����=���е�����ռ���ڴ��С/��һ��Ԫ����ռ�ڴ��С
//	cout << "��ά���������Ϊ��" << sizeof(a7[0]) / sizeof(a7[0][0]) << endl;  //����=��һ����ռ���ڴ��С/��һ��Ԫ����ռ�ڴ��С
//	cout << "��ά����a7���׵�ַΪ��" << (int)a7 << endl;   //(int)�����������͵�ǿ��ת��
//	cout << "��ά����a7�ĵ�һ�������׵�ַ��" << (int)a7[0] << endl;
//	cout << "��ά����a7�ĵڶ��������׵�ַ��" << (int)a7[1] << endl;
//	cout << "��ά����a7�ĵ�һ��Ԫ�����ڵĵ�ַ��" << (int)&a7[0][0] << endl;  //���ʾ���Ԫ�ص�ʱ����Ҫ��ȡ��ַ���� &
//	cout << "��ά����a7�ĵڶ���Ԫ�����ڵĵ�ַ��" << (int)&a7[0][1] << endl;
//	
//
//	system("pause");
//	return 0;
//
//}