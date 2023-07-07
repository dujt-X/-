#ifndef __SUBCLASS2_H__
#define __SUBCLASS2_H__
#include "BaseClass.h"
class SubClass2 : public BaseClass
{
public:
	SubClass2(const char* cardId);
	~SubClass2();
private:
	SubClass2(const SubClass2& t) = delete;
	SubClass2& operator=(const SubClass2& t) = delete;
public:

	void showInfo();

	void setEmpId(const int& id);
	int getEmpId()const;

public:
	void printEducation();
private:

	int m_empId;
};
#endif // __SUBCLASS2_H__

