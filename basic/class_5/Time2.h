#pragma once
#pragma once

class Time2
{
public:
	int hour;
	int minute;
	int second = 0;

public:
	//���캯��
	Time2(); //���������Ĺ��캯����Ĭ�Ϲ��캯��
	//Time2() = default; //�������ܹ�Ϊ���� =default����������
	//Time2() = delete; //�ó���Ա��ʾ�Ľ���ĳ������
	//int ptfunc() = default; //�����⺯����������ʹ�� =default
	Time2(int tmphour); //�������Ĺ��캯����������ʹ�� =default

};

