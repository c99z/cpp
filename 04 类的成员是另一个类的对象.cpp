#include <iostream>
using namespace std;
#include <string>

class phone 
{
public:
	phone(string name)
	{
		p_name=name;
		cout << "phone����"<<endl;
	}

	~phone()
	{
		cout << "phone����������" << endl;
	}
	string p_name;
};

class Person
{
public:
	Person(string name, string pName) :m_name(name), m_Pname(pName)//ע�����ﴫ�ε�ʱ���ǰѲ�������һ����phone�����Ķ��󣬶�����յ�ʱ���Զ��������Աp_name
	{
		cout << "person�Ĺ��캯��" << endl;
	}
	~Person()
	{
		cout << "person����������" << endl;
	}
	void playGame()
	{
		cout << m_name << "ʹ��" << m_Pname.p_name << "���ֻ�" << endl;//���������ʱ����ֱ��������󣬶�Ҫ�������ĳ�Աp_name
	}
	string m_name;
	phone m_Pname;//��phone�ඨ��һ������
};
void test01()
{
	//�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
	//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
	//����˳���빹���෴����ʹ�õ���Ķ���Ҫ�ȹ��������������ʱ��Ҫ�ȱ���ʹ������������֮��������
	Person p("����", "ƻ��X");
	p.playGame();

}


int main()
{
	test01();

	system ("pause");
	return 0;
}