#include <iostream>
using namespace std;
#include <string>

class phone 
{
public:
	phone(string name)
	{
		p_name=name;
		cout << "phone构造"<<endl;
	}

	~phone()
	{
		cout << "phone的析构函数" << endl;
	}
	string p_name;
};

class Person
{
public:
	Person(string name, string pName) :m_name(name), m_Pname(pName)//注意这里传参的时候是把参数传给一个用phone创建的对象，对象接收的时候自动传给其成员p_name
	{
		cout << "person的构造函数" << endl;
	}
	~Person()
	{
		cout << "person的析构函数" << endl;
	}
	void playGame()
	{
		cout << m_name << "使用" << m_Pname.p_name << "的手机" << endl;//这里输出的时候不能直接输出对象，而要输出对象的成员p_name
	}
	string m_name;
	phone m_Pname;//用phone类定义一个对象
};
void test01()
{
	//当类中成员是其他类对象时，我们称该成员为 对象成员
	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
	//析构顺序与构造相反，被使用的类的对象要先构造出来，析构的时候要等别人使用完了先析构之后再析构
	Person p("张三", "苹果X");
	p.playGame();

}


int main()
{
	test01();

	system ("pause");
	return 0;
}