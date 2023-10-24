# include <iostream>
using namespace std;

//程序流程结构 顺序结构 选择结构 循环结构 

//int main()
//{
//	//选择结构中的单行if语句和多行if语句   单行只有if  多行包括if和else
//	//int score;
//	//cout << "请输入分数：";
//	//cin >> score;
//	//cout << "输入的分数：" <<score<< endl;
//	//if (score > 600)
//	//{
//	//	cout << "恭喜你考上了一本大学!" << endl;
//	//}
//	//else
//	//{
//	//	cout << "很遗憾下次努力!" << endl;
//	//}
// 
//
//	//多条件if语句
//	//int score;
//	//cout << "请输入分数：";
//	//cin >> score;
//	//cout << "输入的分数："<<score << endl;
//	//if (score >  600)
//	//{
//	//	cout << "恭喜你考上了一本大学！" << endl;
//	//}
//	//else if (score > 500)
//	//{
//	//	cout << "恭喜你考上了二本大学！" << endl;
//	//}
//	//else if (score > 400)
//	//{
//	//	cout << "恭喜你考上了三本大学！" << endl;
//	//}
//	//else
//	//{
//	//	cout << "未考上大学请继续努力！" << endl;
//	//}
//
//
//	//嵌套if语句
//	//int score;
//	//cout << "请输入分数：";
//	//cin >> score;
//	//cout << "输入的分数：" << score << endl;
//	//if (score >  600)
//	//{
//	//	cout << "恭喜你考上了一本大学！" << endl;
//	//	if (score > 700)
//	//	{
//	//		cout << "你能考上了的北京大学" << endl;
//	//	}
//	//	else if (score > 650)
//	//	{
//	//		cout << "你能考上了北京航空航天大学" << endl;
//	//	}
//	//	else
//	//	{
//	//		cout << "你能考上了中国人民大学" << endl;
//	//	}
//	//}
//	//else if (score > 500)
//	//{
//	//	cout << "恭喜你考上了二本大学！" << endl;
//	//}
//	//else if (score > 400)
//	//{
//	//	cout << "恭喜你考上了三本大学！" << endl;
//	//}
//	//else
//	//{
//	//	cout << "未考上大学请继续努力！" << endl;
//	//}
//
//
//	//三目运算符
//	//int a, b, c;
//	//cout << "请输入三个变量的值：";
//	//cin >> a >> b >> c;
//	//cout << "三个变量的值分别为：" << a << " " << b << " " << c << " " << endl;
//	////这句话表示如果a>b则c=a;相反c=b
//	//c = (a > b ? a : b);
//	//cout << "c的值为：" <<c<< endl;
//	////在c++中三目运算符返回的是变量可以继续进行赋值 
//	//(a > b ? a : b) = 100;
//	//cout << "a的值为：" << a << endl;
//	//cout << "b的值为：" << b << endl;
//
//	
//	//switch语句
//	//int a;
//	//cout << "请输入你对电影的评分（数字）：";
//	//cin >>a;
//	//cout << "你输入的电影评分为：" << a << endl;
//	//switch (a)   //括号里面的数值只可以是int型,或者字符型
//	//{
//	//case 10: cout << "你认为该电影为好片" << endl; break;  //break表示退出当前分支，如果不加break就会一直执行后续的操作
//	//case 9:  cout << "你认为该电影为良片" << endl; break;
//	//case 8:  cout << "你认为该电影为中片" << endl; break;
//	//case 7:	 cout << "你认为该电影为一般" << endl; break;
//	//default: cout << "你认为该电影为烂片" << endl; break;
//	//}
//
//	//char ch;
//	//cout << "请输入你对电影的评分(字母)：";
//	//cin >> ch;
//	//cout << "你输入的电影评分为：" << ch << endl;
//	//switch (ch)   //括号里面的数值只可以是int型,或者字符型
//	//{
//	//case 'a': cout << "你认为该电影为好片" << endl; break;  //break表示退出当前分支，如果不加break就会一直执行后续的操作
//	//case 'b':  cout << "你认为该电影为良片" << endl; break;
//	//case 'c':  cout << "你认为该电影为中片" << endl; break;
//	//case 'd':	 cout << "你认为该电影为一般" << endl; break;
//	//default: cout << "你认为该电影为烂片" << endl; break;
//	//}
//	
//	
//	//循环结构中的while
//    //int a;
//	//cout << "请输入a的初始值：";
//	//cin >> a;
//	//cout << "打印从a开始小于100的整数" << endl;
//	////避免死循环出现
//	//while (a < 100)
//	//{
//	//	cout << a++<<" ";   //后置++ 先运算在进行自增
//	//}
//	
//
//	//do...while...  与while的区别就是先执行一次循环，再进行条件判断
//	//int a;
//	//cout << "请输入a的初始值：";
//    //cin >> a;
//	//cout << "打印从a开始小于100的整数" << endl;
//	//do
//	//{
//	//	cout << a++ <<" ";
//	//} 
//	//while (a < 100);
//	
//
//	//for循环
//	//int a;
//	//cout << "请输入a的初始值：";
//	//cin >> a;
//	//cout << "打印从a开始小于100的整数" << endl;
//	//for (;a < 100;)
//	//{
//	//	cout << a++ << " ";
//	//}
//
//	system("pause");
//	return 0;
//
//}