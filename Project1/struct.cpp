# include <iostream>
using namespace std;

//结构体   可以用户自定义的数据类型
//一些已知类型的集合
//结构体定义
struct student
{
	string name;
	int age;
	float score;
}s3;

//结构体嵌套结构体
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;   //teacher中嵌套了student
};

void printstudent1(struct student s)  //值传递  修改形参
{
	s.age = 100;
	cout << "值传递函数中的学生姓名：" << s.name << endl;
	cout << "值传递函数中的学生年龄：" << s.age << endl;
	cout << "值传递函数中的学生成绩：" << s.score << endl;
}

void printstudent2(struct student * p)  //地址传递  修改形参
{
	p->age = 200;
	cout << "地址传递函数中的学生姓名：" << p->name << endl;
	cout << "地址传递函数中的学生年龄：" << p->age << endl;
	cout << "地址传递函数中的学生成绩：" << p->score << endl;
}

void printstudent3(struct student s)  //值传递   每传递一个值就需要拷贝其包含的所有数值 内存消耗大 一般不进行值传递的操作
{
	cout << "值传递函数中的学生姓名：" << s.name << endl;
	cout << "值传递函数中的学生年龄：" << s.age << endl;
	cout << "值传递函数中的学生成绩：" << s.score << endl;
}

void printstudent4(const struct student * p)  //地址传递  一般推荐地址传递内存开销小  不过存在形参改变实参也改变的情况，为了避免误操作所以加const进行修饰
{
	//p->age = 100; //const修饰后不能进行修改了，所以会报错
	cout << "地址传递函数中的学生姓名：" << p->name << endl;
	cout << "地址传递函数中的学生年龄：" << p->age << endl;
	cout << "地址传递函数中的学生成绩：" << p->score << endl;
}
//int main()
//{
//	//方式一  结构体变量创建
//	struct student s1;
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 100;
//
//	cout << "姓名：" << s1.name << endl;
//	cout << "年龄：" << s1.age << endl;
//	cout << "分数：" << s1.score << endl;
//
//	//方式二
//	struct student s2 = { "李四", 18 ,90 };
//	cout << "姓名：" << s2.name << endl;
//	cout << "年龄：" << s2.age << endl;
//	cout << "分数：" << s2.score << endl;
//
//	//方式三   在结构体定义时就创建了s3
//	s3.name = "王五";
//	s3.age = 18;
//	s3.score = 80;
//	cout << "姓名：" << s3.name << endl;
//	cout << "年龄：" << s3.age << endl;
//	cout << "分数：" << s3.score << endl;
//
//	cout << "*********************" << endl;
//
//	//结构体数组
//	struct student studentarray[3] =
//	{
//		{"张三",18,100},
//		{"李四",18,90},
//		{"王五",18,80}
//	};
//
//	//对结构体数组中的值进行修改
//	studentarray[2].name = "赵六";  //通过数组索引以及.name的方式进行值的修改
//
//	//输出结构体数组中的内容
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "姓名：" << studentarray[i].name << endl;
//		cout << "年龄：" << studentarray[i].age << endl;
//		cout << "分数：" << studentarray[i].score << endl;
//	}
//
//	cout << "**********************" << endl;
//
//	//结构体指针
//	struct student s4 = { "张虎",20,99 };
//	struct student * p = &s4;
//	cout<<"姓名："<< p->name << endl;
//	cout << "年龄：" << p->age << endl;
//	cout << "分数：" << p->score << endl;
//
//	cout << "**********************" << endl;
//	//结构体嵌套结构体
//	struct teacher s = { 10086,"老王",50,"小王",18,88};   //需要和定义的时候数据一一对应
//	cout << "老师的id：" << s.id << endl;
//	cout << "老师的姓名：" << s.name << endl;
//	cout << "老师的年龄：" << s.age << endl;
//	cout << "老师的学生的姓名：" << s.stu.name << endl;
//	cout << "老师的学生的年龄：" << s.stu.age << endl;
//	cout << "老师的学生的分数：" << s.stu.score << endl;
//
//	//结构体做函数参数
//	cout << "**********************" << endl;
//	struct student s5 = { "小虎",18,77 };
//	cout << "main函数中的学生姓名：" << s5.name << endl;
//	cout << "main函数中的学生年龄：" << s5.age << endl;
//	cout << "main函数中的学生成绩：" << s5.score << endl;
//
//	printstudent1(s5); //值传递
//	cout << "main函数中的学生姓名：" << s5.name << endl;
//	cout << "main函数中的学生年龄：" << s5.age << endl;
//	cout << "main函数中的学生成绩：" << s5.score << endl;
//	printstudent2(&s5);  //地址传递
//	cout << "main函数中的学生姓名：" << s5.name << endl;
//	cout << "main函数中的学生年龄：" << s5.age << endl;
//	cout << "main函数中的学生成绩：" << s5.score << endl;
//
//	//结构体中const的使用
//	cout << "***********************" << endl;
//	struct student s6 = { "小龙",18,66 };
//	printstudent3(s6);
//	printstudent4(&s6);   //const一般用在地址传递中，避免实参被修改
//
//	system("pause");
//	return 0;
//}

