#include "SubClass1.h"
#include <iostream>
using namespace std;


SubClass1::SubClass1(const char* id)
	:BaseClass(id), m_empId(0)
{
	cout << "SubClass1构造" << endl;
}

SubClass1::~SubClass1()
{
	cout << "SubClass1析构" << endl;
}



void SubClass1::showInfo()
{
	cout << "SubClass1::showInfo" << endl;
}

void SubClass1::setEmpId(const int& id)
{
	m_empId = id;
}

int SubClass1::getEmpId() const
{
	return m_empId;
}

void SubClass1::printEducation()
{
	cout << "我是一个子类...员工编号：" << m_empId << "身份证：" << getCardId() << endl;
}
