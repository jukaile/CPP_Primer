#pragma once
class Sign
{
private:
	unsigned int a;
	unsigned char b;

public:
	Sign();
	~Sign();

	void set(unsigned char);
	void set(unsigned);
	unsigned get_a();
	unsigned char get_b();

	void Squence();
	
};

