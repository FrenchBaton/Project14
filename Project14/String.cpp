#include "String.h"
#include<iostream>
using namespace std;
int String::counts = 0;


String::String()
{
	counts++;
	size = 80;
	str = new char[size];
}

String::String(unsigned int s)
{
	if (s == 0) s=1;
	counts++;
	size = s;
	str = new char[size];
}

String::String(unsigned int s, char* arr):String(s)
{
	if (arr == nullptr)return;
	str = arr;
}

void String::Print()
{
	if (str == nullptr)return;
	cout << str << endl;
}

void String::Input()
{
	//cin.ignore();
	cout << "Your string: ";
	cin.getline(str, size);
	
}

int String::Counts()
{
	return counts;
}

String::~String()
{
	delete[] str;
}
