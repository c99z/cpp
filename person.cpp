#pragma once
#include <iostream>
using namespace std;
#include "person.h"
#include <string>

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {//表示类模板Person作用域下的
	this->m_Name = name;
	this->m_Age = age;
}