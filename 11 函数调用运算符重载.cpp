#include <iostream>
using namespace std;
#include <string>

class Myprint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}

	int operator()(int a, int b)//�ǳ����
	{
		int c = a + b;
		cout <<c<<endl;
		return c;
	}

};

void my_Print(string text)//��������
{	
	cout << text << endl;
}





void test01()
{
	Myprint p;//������������
	p("helloworld");//��ʱ���Ѿ����������ص�()���ö���ʹ�ã��ǳ��������ã����Ա���Ϊ�º������ǳ���û�й̶�д��
}

void test02()
{
	Myprint p2;
	p2(2,5);//��ʱ���Ѿ����������ص�()���ö���ʹ�ã��ǳ��������ã����Ա���Ϊ�º������ǳ���û�й̶�д��
}

int main()
{
	test01();
	my_Print("helloworld");//��������
	test02();
	system("pause");
	return 0;
}