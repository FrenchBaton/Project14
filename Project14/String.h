#pragma once
class String
{
	static int counts;
	char* str;
	int size;
public:
	String();
	String(unsigned int s);
	String(unsigned int s, char* arr);

	void Print();
	void Input();

	static int Counts();

	~String();
};

