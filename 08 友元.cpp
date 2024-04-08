#include <iostream>
using namespace std;
#include <string>


class Building
{
	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
	friend void goodGay(Building * building);

public:

	Building()//构造函数
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "卧室";
	}


public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom; //卧室
};


void goodGay(Building * b)//全局函数，传一个Building类的对象b进来，可以引用的方式传递也可以指针传递
{
	cout << "好基友正在访问： " << b->m_SittingRoom << endl;
	cout << "好基友正在访问： " << b->m_BedRoom << endl;//如果不设为友元就会不可访问
}


void test01()
{
	Building b;
	goodGay(&b);
}

int main(){

	test01();

	system("pause");
	return 0;
}