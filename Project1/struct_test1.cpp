# include<iostream>
using namespace std;

//�ṹ�尸��2

struct hero
{
	string name;
	int age;
	string sex;
};

void allocatespace(struct hero * p, int len)
{
	string num[5] = {"����","����","�ŷ�","����","����"};
	int num1[5] = { 23,22,20,21,19 };
	string num2[5] = { "��","��","��","��","Ů" };
	for (int i = 0; i < len; i++)
	{
		p->name = num[i];
		p->age = num1[i];
		p->sex = num2[i];
		p++;
	
	}
}

void maopao(struct hero * hero1, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)

		{
			if (hero1[j].age > hero1[j + 1].age)
			{
				struct hero num3 = hero1[j];
				hero1[j] = hero1[j + 1];
				hero1[j + 1] = num3;
			}
		}
	}
}
void printinfo(struct hero * p, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout<<"������"<<p->name<<" ";
		cout << "���䣺"<<p->age<<" ";
		cout << "�Ա�"<< p->sex<<endl;
		p++;

	}
}

//int main()
//{
//	struct hero hero1[5];   //�ṹ������
//	int len = sizeof(hero1) / sizeof(hero1[0]);
//	allocatespace(hero1, len);  //��ֵ
//	cout << "����ǰ�Ľ��Ϊ��" << endl;
//	printinfo(hero1, len);  //��ӡ
//	cout << "****************************" << endl;
//	maopao(hero1, len);  //�����������ð������
//	cout << "�����Ľ��Ϊ��" << endl;
//	printinfo(hero1, len);  //��ӡ
//
//
//	system("pause");
//	return 0;
//
//}