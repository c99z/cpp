#include <iostream>
using namespace std;
#include <string>

class Person
{
public:

	Person(int age)//�β�
	{
		//1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
		this->age = age;//����age���ܶ�ʱ��ȡ�����ֲ�һ����һ��ȡm_age,m����member����Ա��
	}

	Person& PersonAddPerson(Person p)//�ı����ݾ������ã�����ԭ����
	{
		this->age += p.age;
		//���ض�����
		return *this;//this��ָ��p2��һ��ָ�룬��ô������֮�����p2���壬Ҫ���ر���Ҫ�����õķ�ʽ���أ�������صĲ���������ֵ����ÿ������캯������һ���µģ�����&��
	}

	int age;//������
};

void test01()
{
	Person p1(10);
	cout << "p1.age = " << p1.age << endl;

	Person p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//�������ֵ����p2����ô�����Լ������ã���ʽ���˼�룬coutҲ������
	cout << "p2.age = " << p2.age << endl;//cout�Ǳ�׼�����ostream�����Ķ���
}

int main() {

	test01();

	system("pause");

	return 0;
}