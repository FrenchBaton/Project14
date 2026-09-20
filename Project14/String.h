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
	String(const String& s);

	void Print();
	void Input();

	static int Counts();

	String operator*(String& str);

	~String();
};

