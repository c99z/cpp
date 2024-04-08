#include <iostream>
using namespace std;
#include <string>



class Person {
public:
	//无参（默认）构造函数
	Person()
	{
		cout << "无参构造函数!" << endl;
	}
	//有参构造函数
	Person(int age, int height) {

		cout << "有参构造函数!" << endl;

		m_age = age;
		m_height = new int(height);//堆区的数据由程序员手动开启，手动释放
		//在堆区开辟空间，利用new创建的数据，会返回该数据对应的类型的指针
	}
	//拷贝构造函数  
	Person(const Person& p) {
		cout << "拷贝构造函数!" << endl;
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		m_age = p.m_age;
		m_height = new int(*p.m_height);

	}

	//析构函数，将堆区的数据做释放操作
	~Person() {
		cout << "析构函数!" << endl;
		if (m_height != NULL)
		{
			delete m_height;
		}
	}
public:
	int m_age;
	int* m_height;//用指针接收堆区数据
};

void test01()
{
	Person p1(18, 180);

	Person p2(p1);//括号法，调用有参拷贝构造，浅拷贝，简单的赋值操作

	cout << "p1的年龄： " << p1.m_age << " 身高： " << *p1.m_height << endl;

	cout << "p2的年龄： " << p2.m_age << " 身高： " << *p2.m_height << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}

