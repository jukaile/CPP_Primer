#include "stdafx.h"
#include "Sign.h"


Sign::Sign()
{
	cout << "�๹�캯�������ã�";
}


Sign::~Sign()
{
}

void Sign::set(unsigned char p)
{
	cout << "set�������룡���������Ϊunsigned char��" << endl;
	this->b = p;
}

void Sign::set(unsigned p)
{
	cout << "set�������룡���������Ϊunsigned��" << endl;
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
		cout << "\7" << "���������" << endl;
		getchar();
	}
	cout << "\12\40\115" << endl;
}


