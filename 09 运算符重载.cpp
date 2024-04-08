#include <iostream>
using namespace std;
#include <string>





class Person {
	friend ostream& operator<<(ostream& out, Person& p);//cout是

public:

	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}

	//成员函数 实现不了  p << cout 不是我们想要的效果，通常不用，因为无法实现cout在左侧
	//void operator<<(Person& p){
	//}

private:
	int m_A;
	int m_B;
};

//全局函数实现左移重载
//ostream对象只能有一个，cout是标准输出流ostream创建的对象，且只有一个必须用引用的方式调用
ostream& operator<<(ostream& out, Person& p)//引用可以起别名，这里可以写成cout和out，同一个类创建的对象实际上是一样的
{
	out << "a:" << p.m_A << " b:" << p.m_B;
	return out;
}

void test() {

	Person p1(10, 20);

	cout << p1 << "hello world" << endl; //链式编程
}

int main() {

	test();

	system("pause");

	return 0;
}