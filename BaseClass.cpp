#include "BaseClass.h"
#include <iostream>
using namespace std;

BaseClass::BaseClass()
	:m_cardId(nullptr)
{
	cout << "BaseClass空构造" << endl;
}

BaseClass::BaseClass(const char* id)
	: m_cardId(nullptr)
{
	if (id == nullptr)
	{
		m_cardId = new char[1];
		m_cardId[0] = 0;
	}
	else
	{
		delete[]m_cardId;
		int idLenth = strlen(id);
		m_cardId = new char[idLenth + 1];
		if (m_cardId != nullptr)
		{
			memset(m_cardId, 0, idLenth + 1);
			memcpy(m_cardId, id, idLenth);
		}
	}
	cout << "BaseClass构造" << endl;
}

BaseClass::~BaseClass()
{
	delete[]m_cardId;
	cout << "BaseClass析构" << endl;
}


void BaseClass::setCardId(const char* id)
{
	if (id == nullptr)
	{
		return;
	}
	else
	{
		delete[]m_cardId;
		int idLenth = strlen(id);
		m_cardId = new char[idLenth + 1];
		if (m_cardId != nullptr)
		{
			memset(m_cardId, 0, idLenth + 1);
			memcpy(m_cardId, id, idLenth);
		}
	}
}

char* BaseClass::getCardId() const
{
	return m_cardId;
}

void BaseClass::showInfo()
{
	cout << "BaseClass::showInfo" << endl;
}
