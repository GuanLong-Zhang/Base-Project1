# include<iostream>
using namespace std;

//结构体案例2

struct hero
{
	string name;
	int age;
	string sex;
};

void allocatespace(struct hero * p, int len)
{
	string num[5] = {"刘备","关羽","张飞","赵云","貂蝉"};
	int num1[5] = { 23,22,20,21,19 };
	string num2[5] = { "男","男","男","男","女" };
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
		cout<<"姓名："<<p->name<<" ";
		cout << "年龄："<<p->age<<" ";
		cout << "性别："<< p->sex<<endl;
		p++;

	}
}

//int main()
//{
//	struct hero hero1[5];   //结构体数组
//	int len = sizeof(hero1) / sizeof(hero1[0]);
//	allocatespace(hero1, len);  //赋值
//	cout << "排序前的结果为：" << endl;
//	printinfo(hero1, len);  //打印
//	cout << "****************************" << endl;
//	maopao(hero1, len);  //根据年龄进行冒泡排序
//	cout << "排序后的结果为：" << endl;
//	printinfo(hero1, len);  //打印
//
//
//	system("pause");
//	return 0;
//
//}