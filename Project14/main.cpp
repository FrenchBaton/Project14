#include<iostream>
#include "String.h"
using namespace std;

int main() {
	cout << String::Counts() << endl;

	char* str = new char[5] {'H','i','<',':','\0'};

	String s1;
	String s2(2);
	String s3(5, str);

	cout << String::Counts() << endl;
	s1.Input();
	s2.Input();

	s1.Print();
	s2.Print();
	s3.Print();

	delete[]str;
	return 0;
}