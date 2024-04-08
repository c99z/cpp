#include <iostream>
using namespace std;
#include <string>

class Person
{
public:

	Person(int age)//形参
	{
		//1、当形参和成员变量同名时，可用this指针来区分
		this->age = age;//属性age，很多时候取的名字不一样，一般取m_age,m代表member（成员）
	}

	Person& PersonAddPerson(Person p)//改变数据就用引用，保护原数据
	{
		this->age += p.age;
		//返回对象本身
		return *this;//this是指向p2的一个指针，那么解引用之后就是p2本体，要返回本体要用引用的方式返回，如果返回的不是引用是值会调用拷贝构造函数创造一个新的（不加&）
	}

	int age;//隐含的
};

void test01()
{
	Person p1(10);
	cout << "p1.age = " << p1.age << endl;

	Person p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//如果返回值还是p2，那么还可以继续调用，链式编程思想，cout也是这样
	cout << "p2.age = " << p2.age << endl;//cout是标准输出流ostream创建的对象
}

int main() {

	test01();

	system("pause");

	return 0;
}