# include<iostream>
using namespace std;

//struct ����

struct student
{
	string name;
	int score;
};

struct teacher
{
	string name;
	struct student array[5];   //ѧ������
};

void allocatespace(struct teacher * p,int len)
{
	string name = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		p->name = "teacher_";
		p->name = p->name + name[i];
		for (int j = 0; j < 5; j++)
		{
			p->array[j].name = "student_";
			p->array[j].name = p->array[j].name + name[j];

			int random = rand() % 61 + 40;   //rand()%61����0-60�������  rand()%61+40����40-100�������
			p->array[j].score = random;
		}
		p++;
	}
}

void printinfo(struct teacher* p, int len)
{
	
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ��������" << p->name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "ѧ����������" << p->array[j].name << "  ";
			cout << "ѧ���ķ�����" << p->array[j].score << endl;	
		}
		p++;
	}
}

//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//
//	struct teacher tarray[3];   // ��ʦ����
//	int len = sizeof(tarray) / sizeof(tarray[0]);
//	allocatespace(tarray,len);   //��ֵ
//	printinfo(tarray, len);      //��ӡ
//	system("pause");
//	return 0;
//
//}