#include <iostream>
using namespace std;
#include <string>

int a;
int&  test01()
{
	a = 10;
	return a;
}

int test02(int &b)
{
	b = b + 10;
	return b;
}
int main()
{
	//不能返回局部变量的引用

	int ref=test01();
	cout << ref << endl;
	int ref2 = test02(test01());//引用作为函数返回值后可以重新被函数调用，如果去掉引用就不行
}