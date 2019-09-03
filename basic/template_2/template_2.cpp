﻿// template_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 类模版概念，类模版定义，使用

#include "pch.h"
#include <iostream>
#include "myvector.h"
#include "myarray.h"

int main()
{
	//一 概述 用类模版来实例化一个特定的类
	//编译器不能为类模版推断模版类型，所以为了使用类模版，我们必须在模版名后边用<>来提供额外的信息，这些信息其实就是对应着模版参数列表里面的这些参数
	//vector<int>:实现同一套代码，可以应付不同的数据类型

	//二 类模版定义
	//template<typename 形参名1, typename 形参名2 ...>
	/*class 类名
	{

	};
	*/
	//实例化类模版的时候，必须要 有类的全部信息，包括类模版中成员函数的函数体
	//创建一个 myvector.h
	myvector<int> tmpvec; //这个时候，编译器给咱们生成一个具体类
	myvector<double> tmpvec2;
	myvector<std::string> tmpvec3;
	//myvector是类模版名，它不是一个类名，类模版是 用来实例化类（类型）用的
	//所以myvector<double>，myvector<string>才是类型名（实例化了的类型）
	//所以，一个实例化了的类型 总会用尖括号<>包含着模版函数

	//三 类模版的成员函数
	//类模版成员函数，可以写在类模版定义中{}; 那么这种写在类模版定义中的成员函数会被隐式声明为inline函数
	//类模版一旦被实例化后，那么这个模版的每个实例都会有自己版本的成员函数
	  //所以，类模版的成员函数具有和这个类模版相同的模版参数（这句话的核心意思：类模版的成员函数是有模版参数的）
	//如果你要把类模版成员函数的定义（函数体）写在类模版定义的外边，那么这个成员函数的模版参数就体现出来了
	//定义在类模版之外的成员函数必须以关键字template开始，后边接类模版参数列表
	// 同时，在类名后边要用尖括号<>把模板参数列表礼拜的所以模板名列出来，如果是多个模板参数，用,分隔

	//一个类模板虽然可能有很多成员函数，但是，当你实例化模板之后，如果你后续没有使用到某个成员函数，则这个成员函数不会被实例化

	//四 模版类名字的使用

	//五 非类型模板参数
	myarray<int, 100> tmparray;
	tmparray.myfunc(); //100
	myarray<int> tmparray2;
	tmparray.myfunc(); //10


	//非类型模板参数有一些限制：
	//（1）浮点型不能做非类型模板参数。比如float，double
	//（2）类类型一般也不允许做非类型模板参数
    std::cout << "Hello World!\n"; 
}

