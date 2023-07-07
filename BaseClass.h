#ifndef __BASECLASS_H__
#define __BASECLASS_H__

//∂‡Ã¨”Î–È∫Ø ˝
class BaseClass
{
public:
	BaseClass();
	BaseClass(const char* id);
	virtual ~BaseClass();
public:
	void setCardId(const char* id);
	char* getCardId()const;

	virtual void showInfo();
private:
	char* m_cardId;
};
#endif // __BASECLASS_H__


