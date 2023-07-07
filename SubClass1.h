#ifndef __SUBCLASS_H__
#define __SUBCLASS_H__
#include "BaseClass.h"
class SubClass1 : public BaseClass
{
public:
	SubClass1(const char* cardId);
	~SubClass1();
private:
	SubClass1(const SubClass1& t) = delete;
	SubClass1& operator=(const SubClass1& t) = delete;
public:

	void showInfo();

	void setEmpId(const int& id);
	int getEmpId()const;

public:
	void printEducation();
private:

	int m_empId;
};
#endif // __SUBCLASS_H__


