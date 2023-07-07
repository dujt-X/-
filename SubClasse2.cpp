#include "SubClass2.h"
#include <iostream>
using namespace std;


SubClass2::SubClass2(const char* id)
	:BaseClass(id), m_empId(0)
{
	cout << "SubClass构造" << endl;
}

SubClass2::~SubClass2()
{
	cout << "SubClass析构" << endl;
}



void SubClass2::showInfo()
{
	cout << "SubClass2::showInfo" << endl;
}

void SubClass2::setEmpId(const int& id)
{
	m_empId = id;
}

int SubClass2::getEmpId() const
{
	return m_empId;
}

void SubClass2::printEducation()
{
	cout << "我是一个子类2...员工编号：" << m_empId << "身份证：" << getCardId() << endl;
}
