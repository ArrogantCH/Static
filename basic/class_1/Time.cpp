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
	//hour = tmphour;
}