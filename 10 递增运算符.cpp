#include <iostream>
using namespace std;
#include <string>

class Myinterger
{
public:
	friend Myinterger& operator++(Myinterger& p1);
	friend ostream& operator <<(ostream& cout2, Myinterger& p);//cout2 是ostream类创建的一个对象的引用，因为cout只有一个不能直接拿来用
	friend Myinterger& operator++(Myinterger& p2);
	Myinterger()
	{
		m_a = 0;
		
	}
private:
	int m_a;
	
};
Myinterger& operator++(Myinterger& p1)//不一定要传参，返回用this指针
{
	p1.m_a = p1.m_a++;
	return p1;//可以用this指针返回，返回引用是为了一直对一个数据操作
}
//Myinterger& operator++(Myinterger& p2)//会重定义，注意函数重载的条件
//{
//	p2.m_a = ++p2.m_a;
//	return p2;
//}
ostream& operator <<(ostream& cout2, Myinterger& p)//cout2 是ostream类创建的一个对象的引用，因为cout只有一个不能直接拿来用
{
	cout2 << p.m_a<< endl;

	return cout2;
}
Myinterger p;


void test01()
{
	++p;
	cout << p << endl;//重载运算符的意思就是这个运算符可以进行之前不能进行的运算，实际上运算符还是那个运算符
}
int main()
{
	test01();
	system("pause");
	return 0;
}