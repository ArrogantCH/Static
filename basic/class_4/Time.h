#pragma once

class Time
{
public:
	int hour;
	int minute;
	int second = 0;

	const int ctestvalue = 80; //������һ������
	//const int ctestvalue;


	mutable int testValue;
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

public:
	//�Ѷ����Լ�������ȥ
	Time& add_hour(int tmphour);
	Time& add_minute(int minute);

	//static int mystatic; // ������̬��Ա��������û�з����ڴ棬Ҳ�����������ʼ��
	static void mstaticfun(int testvalue);

	//�������캯��
	Time(const Time &tmptime, int a = 56);

};

void writeTime(Time &time);
