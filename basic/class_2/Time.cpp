#include "Time.h"

void Time::initTime(int tmphour, int tmpminute, int tmpsecond)
{
	hour = tmphour;
	minute = tmpminute;
	second = tmpsecond;
	
}

//���캯����ʵ��
Time::Time(int tmphour, int tmpminute, int tmpsecond)
{
	hour = tmphour;
	minute = tmpminute;
	second = tmpsecond;
}

//���캯����ʼ���б�
Time::Time(int tmphour, int tmpminute, int tmpsecond):hour(tmphour), minute(tmpminute),second(tmpsecond) 
{

}

Time::Time()
{

}

Time::Time(int tmphour)
{

}

void Time::addhour(int tmphour) const
{
	testValue = tmphour;
}

Time& Time::add_hour(int tmphour)
{
	hour += tmphour;
	this->hour;
	return *this; //�Ѷ����Լ�������ȥ��
}

Time& Time::add_minute(int minute)
{
	this->minute += minute;
	return *this; //�Ѷ����Լ�������ȥ��
}

//��̬��Ա����ʵ��
void Time::mstaticfun(int testvalue)
{
	//hour = testValue; //������Ϊhour��Ա�����ǺͶ�����صĳ�Ա����
	mystatic = 17; //���ԣ���Ϊmystatic�Ǻ�����ص�
}