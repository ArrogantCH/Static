#pragma once
#ifndef  __MYVECTOR__
#define  __MYVECTOR__

//������ģ��
template<typename T> //����ΪT��ģ�������������ʾmyvecotr��������������Ԫ������
class myvector
{
public:
	typedef T* myiterator; //������

public:
	myvector(); //���캯��
	myvector & operator = (const myvector&); //��ֵ��������ء�����ģ���ڲ�ʹ��ģ��������Ҫ�ṩģ�����
	//myvector<T> & operator = (const myvector<T>&); //��ֵ��������ء�����ģ���ڲ�ʹ��ģ��������Ҫ�ṩģ�����

public:
	myiterator mybegin(); //����������ʼλ��
	myiterator myend(); //���������һ��Ԫ�ص���һ��λ��

public:
	void myfunc() {}; //�ѳ�Ա�����ĺ����壨��������ʵ�֣�������ģ��Ķ�����
	void myfunc2();
};

//��ͨ����
template<typename T>
void myvector<T>::myfunc2()
{
	//...
	return;
}


//���캯��
template<typename T>
myvector<T>::myvector()
{
	//...

}

template<typename T>
myvector<T>& myvector<T>::operator=(const myvector&) //<T>��ʾ���ص���һ��ʵ�����˵�myvector
{
	//...
	return *this;

}


#endif // ! __MYVECTOR__
