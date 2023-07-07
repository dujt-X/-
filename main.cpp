#include <iostream>
#include "ABCD.h"
#include "SubClass1.h"
#include "SubClass2.h"

void test_showInfo(BaseClass* pb)
{
	pb->showInfo();
}

int main(int argc, const char* argv[])
{
	//创建D类对象
	//D d(1, 2, 3, 4);
	//d.show();

	SubClass1* pSbu = new SubClass1("12345");
	SubClass2* pSbu2 = new SubClass2("65432");

	test_showInfo(pSbu);
	test_showInfo(pSbu2);

	return 0;
}