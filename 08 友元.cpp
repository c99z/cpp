#include <iostream>
using namespace std;
#include <string>


class Building
{
	//���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
	friend void goodGay(Building * building);

public:

	Building()//���캯��
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "����";
	}


public:
	string m_SittingRoom; //����

private:
	string m_BedRoom; //����
};


void goodGay(Building * b)//ȫ�ֺ�������һ��Building��Ķ���b�������������õķ�ʽ����Ҳ����ָ�봫��
{
	cout << "�û������ڷ��ʣ� " << b->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << b->m_BedRoom << endl;//�������Ϊ��Ԫ�ͻ᲻�ɷ���
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