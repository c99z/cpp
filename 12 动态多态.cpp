#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	//Speak���������麯��
	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ�����������ˡ�
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog :public Animal
{
public:

	void speak()
	{
		cout << "С����˵��" << endl;
	}

};
//����ϣ������ʲô������ô�͵���ʲô����   �ĺ���
//���������ַ�ڱ���׶ξ���ȷ������ô��̬����
//���������ַ�����н׶β���ȷ�������Ƕ�̬����

//��ַ��󶨣��ڱ���׶ξ�ȷ��������ַ
//�������è˵������Ҫ�ú�����ַ�����н׶ΰ󶨣�Ҳ���Ǻ������  
void DoSpeak(Animal& animal)//���ô��ݣ�Animal������=cat
{
	animal.speak();
}
//
//��̬���������� 
//1���м̳й�ϵ
//2��������д�����е��麯��
//��̬ʹ�ã�
//����ָ�������ָ���������

void test01()
{
	Cat cat;
	DoSpeak(cat);

	Animal cat2;
	DoSpeak(cat2);


	Dog dog;
	DoSpeak(dog);
}


int main() {

	test01();

	system("pause");

	return 0;
}