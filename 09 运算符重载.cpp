#include <iostream>
using namespace std;
#include <string>





class Person {
	friend ostream& operator<<(ostream& out, Person& p);//cout��

public:

	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}

	//��Ա���� ʵ�ֲ���  p << cout ����������Ҫ��Ч����ͨ�����ã���Ϊ�޷�ʵ��cout�����
	//void operator<<(Person& p){
	//}

private:
	int m_A;
	int m_B;
};

//ȫ�ֺ���ʵ����������
//ostream����ֻ����һ����cout�Ǳ�׼�����ostream�����Ķ�����ֻ��һ�����������õķ�ʽ����
ostream& operator<<(ostream& out, Person& p)//���ÿ�����������������д��cout��out��ͬһ���ഴ���Ķ���ʵ������һ����
{
	out << "a:" << p.m_A << " b:" << p.m_B;
	return out;
}

void test() {

	Person p1(10, 20);

	cout << p1 << "hello world" << endl; //��ʽ���
}

int main() {

	test();

	system("pause");

	return 0;
}