#pragma once

class Time
{
public:
	int hour;
	int minute;
	int second = 0;
	int *a;

public:
	//���캯��
	Time();
	Time(int tmphour);
	Time(int tmphour, int tmpminute, int tmpsecond);


	Time& operator=(const Time& myTime); //���صĸ�ֵ�����

	~Time();
};

void writeTime(Time &time);
