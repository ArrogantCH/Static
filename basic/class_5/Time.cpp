#include "Time.h"
#include <iostream>



//��ͨ���������ǳ�Ա����
void writeTime(Time &time)
{
	std::cout << time.hour << std::endl;
}


//���캯����ʵ��
//Time::Time(int tmphour, int tmpminute, int tmpsecond)
//{
//	hour = tmphour;
//	minute = tmpminute;
//	second = tmpsecond;
//}

//���캯����ʼ���б�
Time::Time(int tmphour, int tmpminute, int tmpsecond):hour(tmphour), minute(tmpminute),second(tmpsecond) 
{
	
}

Time::Time(int tmpctestvalue)
{
}

//Time::Time(int tmphour)
//{
//
//}


Time::Time()
{
	int *a = new int[100];
}


Time& Time::operator=(const Time &myTime)
{
	hour = myTime.hour;
	minute = myTime.minute;
	second = myTime.second;
	return *this; //�������������
}

Time::~Time()
{
	delete [] a;
	std::cout << "��������������" << std::endl;
}