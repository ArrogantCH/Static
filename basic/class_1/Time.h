#pragma once

class Time
{
public:
	int hour;
	int minute;
	int second;

	void initTime(int tmphour, int tmpminute, int tmpsecond);

public:
	//���캯��
	Time();
	Time(int tmphour);
	Time(int tmphour, int tmpminute, int tmpsecond);

public:
	/*void addhour(int tmphour)
	{
		hour = tmphour;
	}*/

	void addhour(int tmphour) const;
};
