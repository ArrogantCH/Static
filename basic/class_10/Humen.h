#ifndef __HUMEN__
#define __HUMEN__

class Humen
{
public:
	Humen() {}

public:
	//�������캯��
	Humen(const Humen &tmphumen) //tmphumen�õ���man��������ã����ǣ�humen��Ϊ���࣬��ֻ�ܴ�������Լ��ĳ�Ա���޷�����������ĳ�Ա
	{
		//
	}

	//��ֵ�����
	Humen & operator=(const Humen &tmphumen)
	{
		//...
		return *this;
	}
};


#endif // 

