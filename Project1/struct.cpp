# include <iostream>
using namespace std;

//�ṹ��   �����û��Զ������������
//һЩ��֪���͵ļ���
//�ṹ�嶨��
struct student
{
	string name;
	int age;
	float score;
}s3;

//�ṹ��Ƕ�׽ṹ��
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;   //teacher��Ƕ����student
};

void printstudent1(struct student s)  //ֵ����  �޸��β�
{
	s.age = 100;
	cout << "ֵ���ݺ����е�ѧ��������" << s.name << endl;
	cout << "ֵ���ݺ����е�ѧ�����䣺" << s.age << endl;
	cout << "ֵ���ݺ����е�ѧ���ɼ���" << s.score << endl;
}

void printstudent2(struct student * p)  //��ַ����  �޸��β�
{
	p->age = 200;
	cout << "��ַ���ݺ����е�ѧ��������" << p->name << endl;
	cout << "��ַ���ݺ����е�ѧ�����䣺" << p->age << endl;
	cout << "��ַ���ݺ����е�ѧ���ɼ���" << p->score << endl;
}

void printstudent3(struct student s)  //ֵ����   ÿ����һ��ֵ����Ҫ�����������������ֵ �ڴ����Ĵ� һ�㲻����ֵ���ݵĲ���
{
	cout << "ֵ���ݺ����е�ѧ��������" << s.name << endl;
	cout << "ֵ���ݺ����е�ѧ�����䣺" << s.age << endl;
	cout << "ֵ���ݺ����е�ѧ���ɼ���" << s.score << endl;
}

void printstudent4(const struct student * p)  //��ַ����  һ���Ƽ���ַ�����ڴ濪��С  ���������βθı�ʵ��Ҳ�ı�������Ϊ�˱�����������Լ�const��������
{
	//p->age = 100; //const���κ��ܽ����޸��ˣ����Իᱨ��
	cout << "��ַ���ݺ����е�ѧ��������" << p->name << endl;
	cout << "��ַ���ݺ����е�ѧ�����䣺" << p->age << endl;
	cout << "��ַ���ݺ����е�ѧ���ɼ���" << p->score << endl;
}
//int main()
//{
//	//��ʽһ  �ṹ���������
//	struct student s1;
//	s1.name = "����";
//	s1.age = 18;
//	s1.score = 100;
//
//	cout << "������" << s1.name << endl;
//	cout << "���䣺" << s1.age << endl;
//	cout << "������" << s1.score << endl;
//
//	//��ʽ��
//	struct student s2 = { "����", 18 ,90 };
//	cout << "������" << s2.name << endl;
//	cout << "���䣺" << s2.age << endl;
//	cout << "������" << s2.score << endl;
//
//	//��ʽ��   �ڽṹ�嶨��ʱ�ʹ�����s3
//	s3.name = "����";
//	s3.age = 18;
//	s3.score = 80;
//	cout << "������" << s3.name << endl;
//	cout << "���䣺" << s3.age << endl;
//	cout << "������" << s3.score << endl;
//
//	cout << "*********************" << endl;
//
//	//�ṹ������
//	struct student studentarray[3] =
//	{
//		{"����",18,100},
//		{"����",18,90},
//		{"����",18,80}
//	};
//
//	//�Խṹ�������е�ֵ�����޸�
//	studentarray[2].name = "����";  //ͨ�����������Լ�.name�ķ�ʽ����ֵ���޸�
//
//	//����ṹ�������е�����
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "������" << studentarray[i].name << endl;
//		cout << "���䣺" << studentarray[i].age << endl;
//		cout << "������" << studentarray[i].score << endl;
//	}
//
//	cout << "**********************" << endl;
//
//	//�ṹ��ָ��
//	struct student s4 = { "�Ż�",20,99 };
//	struct student * p = &s4;
//	cout<<"������"<< p->name << endl;
//	cout << "���䣺" << p->age << endl;
//	cout << "������" << p->score << endl;
//
//	cout << "**********************" << endl;
//	//�ṹ��Ƕ�׽ṹ��
//	struct teacher s = { 10086,"����",50,"С��",18,88};   //��Ҫ�Ͷ����ʱ������һһ��Ӧ
//	cout << "��ʦ��id��" << s.id << endl;
//	cout << "��ʦ��������" << s.name << endl;
//	cout << "��ʦ�����䣺" << s.age << endl;
//	cout << "��ʦ��ѧ����������" << s.stu.name << endl;
//	cout << "��ʦ��ѧ�������䣺" << s.stu.age << endl;
//	cout << "��ʦ��ѧ���ķ�����" << s.stu.score << endl;
//
//	//�ṹ������������
//	cout << "**********************" << endl;
//	struct student s5 = { "С��",18,77 };
//	cout << "main�����е�ѧ��������" << s5.name << endl;
//	cout << "main�����е�ѧ�����䣺" << s5.age << endl;
//	cout << "main�����е�ѧ���ɼ���" << s5.score << endl;
//
//	printstudent1(s5); //ֵ����
//	cout << "main�����е�ѧ��������" << s5.name << endl;
//	cout << "main�����е�ѧ�����䣺" << s5.age << endl;
//	cout << "main�����е�ѧ���ɼ���" << s5.score << endl;
//	printstudent2(&s5);  //��ַ����
//	cout << "main�����е�ѧ��������" << s5.name << endl;
//	cout << "main�����е�ѧ�����䣺" << s5.age << endl;
//	cout << "main�����е�ѧ���ɼ���" << s5.score << endl;
//
//	//�ṹ����const��ʹ��
//	cout << "***********************" << endl;
//	struct student s6 = { "С��",18,66 };
//	printstudent3(s6);
//	printstudent4(&s6);   //constһ�����ڵ�ַ�����У�����ʵ�α��޸�
//
//	system("pause");
//	return 0;
//}

