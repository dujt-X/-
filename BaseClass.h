#ifndef __BASECLASS_H__
#define __BASECLASS_H__

//��̬���麯��
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


