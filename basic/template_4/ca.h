#pragma once
template<typename C> //���ģ�����C
class A
{
public:
	template<typename T2>
	//A(T2 v1, T2 v2)  //���캯������Ҳ�����Լ���ģ�壬���������ģ��Cû�й�ϵ
	//{
	//
	//}
	A(T2 v1, T2 v2);
	template<typename T>
	void myft(T tmpt) //��Ա����ģ��
	{
		std::cout << tmpt << std::endl;
	}

	void myftpt();

	C m_ic;
};


template<typename C> //�ȸ����ģ������б�
template<typename T2> //�ٸ����캯���Լ���ģ������б�
A<C>::A(T2 v1, T2 v2)
{
	std::cout << v1 << v2 << std::endl;
}