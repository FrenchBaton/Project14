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
	strcpy_s(str, s, arr);
}

String::String(const String& s) {
	size = s.size;
	str = new char[size+1];
	for (int i = 0; i < size; i++) {
		str[i] = s.str[i];
	}
	str[size] = '\0';
	counts++;
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

String String::operator*(String& s)
{
	if (str == nullptr || s.str == nullptr) {  return String();}
	char* temp = new char[80];
	int tempIdx = 0;
	for (int i = 0; i < strlen(str); i++) {
		for (int j = 0; j < strlen(s.str); j++) {
			if (str[i] == s.str[j]) { temp[tempIdx] = str[i]; tempIdx++; j = 0; i++; }
		}
	}
	temp[tempIdx] = '\0';
	char* reztemp = new char[strlen(temp)+1];
	strcpy_s(reztemp, strlen(temp)+1, temp);
	delete[] temp;

	String rez(tempIdx+1, reztemp);

	return rez;
}

String::~String()
{
	delete[] str;
}
