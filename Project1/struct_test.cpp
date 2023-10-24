# include<iostream>
using namespace std;

//struct 案例

struct student
{
	string name;
	int score;
};

struct teacher
{
	string name;
	struct student array[5];   //学生数组
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

			int random = rand() % 61 + 40;   //rand()%61生成0-60的随机数  rand()%61+40生成40-100的随机数
			p->array[j].score = random;
		}
		p++;
	}
}

void printinfo(struct teacher* p, int len)
{
	
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名：" << p->name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "学生的姓名：" << p->array[j].name << "  ";
			cout << "学生的分数：" << p->array[j].score << endl;	
		}
		p++;
	}
}

//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	struct teacher tarray[3];   // 老师数组
//	int len = sizeof(tarray) / sizeof(tarray[0]);
//	allocatespace(tarray,len);   //赋值
//	printinfo(tarray, len);      //打印
//	system("pause");
//	return 0;
//
//}