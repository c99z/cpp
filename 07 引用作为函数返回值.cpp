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
	//���ܷ��ؾֲ�����������

	int ref=test01();
	cout << ref << endl;
	int ref2 = test02(test01());//������Ϊ��������ֵ��������±��������ã����ȥ�����þͲ���
}