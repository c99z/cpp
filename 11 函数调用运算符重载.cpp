#include <iostream>
using namespace std;
#include <string>

class Myprint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}

	int operator()(int a, int b)//非常灵活
	{
		int c = a + b;
		cout <<c<<endl;
		return c;
	}

};

void my_Print(string text)//函数声明
{	
	cout << text << endl;
}





void test01()
{
	Myprint p;//匿名函数对象
	p("helloworld");//这时候已经调用了重载的()，让对象使用，非常像函数调用，所以被称为仿函数，非常灵活，没有固定写法
}

void test02()
{
	Myprint p2;
	p2(2,5);//这时候已经调用了重载的()，让对象使用，非常像函数调用，所以被称为仿函数，非常灵活，没有固定写法
}

int main()
{
	test01();
	my_Print("helloworld");//函数调用
	test02();
	system("pause");
	return 0;
}