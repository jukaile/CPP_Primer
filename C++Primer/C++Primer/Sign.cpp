#include "stdafx.h"
#include "Sign.h"


Sign::Sign()
{
	cout << "类构造函数被调用！";
}


Sign::~Sign()
{
}

void Sign::set(unsigned char p)
{
	cout << "set方法进入！进入的类型为unsigned char！" << endl;
	this->b = p;
}

void Sign::set(unsigned p)
{
	cout << "set方法进入！进入的类型为unsigned！" << endl;
	this->a = p;
}

unsigned Sign::get_a()
{
	return this->a;
}

unsigned char Sign::get_b()
{
	return this->b;
}

void Sign::Squence()
{
	int i = 10;
	while (i--)
	{
		cout << "\7" << "响铃已完成" << endl;
		getchar();
	}
	cout << "\12\40\115" << endl;
}


