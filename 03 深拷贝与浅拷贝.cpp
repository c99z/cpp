#include <iostream>
using namespace std;
#include <string>



class Person {
public:
	//�޲Σ�Ĭ�ϣ����캯��
	Person()
	{
		cout << "�޲ι��캯��!" << endl;
	}
	//�вι��캯��
	Person(int age, int height) {

		cout << "�вι��캯��!" << endl;

		m_age = age;
		m_height = new int(height);//�����������ɳ���Ա�ֶ��������ֶ��ͷ�
		//�ڶ������ٿռ䣬����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��
	}
	//�������캯��  
	Person(const Person& p) {
		cout << "�������캯��!" << endl;
		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
		m_age = p.m_age;
		m_height = new int(*p.m_height);

	}

	//�������������������������ͷŲ���
	~Person() {
		cout << "��������!" << endl;
		if (m_height != NULL)
		{
			delete m_height;
		}
	}
public:
	int m_age;
	int* m_height;//��ָ����ն�������
};

void test01()
{
	Person p1(18, 180);

	Person p2(p1);//���ŷ��������вο������죬ǳ�������򵥵ĸ�ֵ����

	cout << "p1�����䣺 " << p1.m_age << " ��ߣ� " << *p1.m_height << endl;

	cout << "p2�����䣺 " << p2.m_age << " ��ߣ� " << *p2.m_height << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}

