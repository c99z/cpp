#include <iostream>
using namespace std;
#include <string>

class Myinterger
{
public:
	friend Myinterger& operator++(Myinterger& p1);
	friend ostream& operator <<(ostream& cout2, Myinterger& p);//cout2 ��ostream�ഴ����һ����������ã���Ϊcoutֻ��һ������ֱ��������
	friend Myinterger& operator++(Myinterger& p2);
	Myinterger()
	{
		m_a = 0;
		
	}
private:
	int m_a;
	
};
Myinterger& operator++(Myinterger& p1)//��һ��Ҫ���Σ�������thisָ��
{
	p1.m_a = p1.m_a++;
	return p1;//������thisָ�뷵�أ�����������Ϊ��һֱ��һ�����ݲ���
}
//Myinterger& operator++(Myinterger& p2)//���ض��壬ע�⺯�����ص�����
//{
//	p2.m_a = ++p2.m_a;
//	return p2;
//}
ostream& operator <<(ostream& cout2, Myinterger& p)//cout2 ��ostream�ഴ����һ����������ã���Ϊcoutֻ��һ������ֱ��������
{
	cout2 << p.m_a<< endl;

	return cout2;
}
Myinterger p;


void test01()
{
	++p;
	cout << p << endl;//�������������˼���������������Խ���֮ǰ���ܽ��е����㣬ʵ��������������Ǹ������
}
int main()
{
	test01();
	system("pause");
	return 0;
}