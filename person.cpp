#pragma once
#include <iostream>
using namespace std;
#include "person.h"
#include <string>

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {//��ʾ��ģ��Person�������µ�
	this->m_Name = name;
	this->m_Age = age;
}