#include "SubClass2.h"
#include <iostream>
using namespace std;


SubClass2::SubClass2(const char* id)
	:BaseClass(id), m_empId(0)
{
	cout << "SubClass����" << endl;
}

SubClass2::~SubClass2()
{
	cout << "SubClass����" << endl;
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
	cout << "����һ������2...Ա����ţ�" << m_empId << "���֤��" << getCardId() << endl;
}
