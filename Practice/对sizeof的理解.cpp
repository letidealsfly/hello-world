#include<iostream>
#include<string>

using namespace std;

int 对sizeof的理解()//sizeof «πÿº¸◊÷£°
{
	const char *a = "abc";
	char b[5] = "abc";
	char c[] = "abc";
	cout << "sizeof(*a): " << sizeof(*a) << endl;
	cout << "sizeof(a): " << sizeof(a) << endl;
	cout << "sizeof(b): " << sizeof(b) << endl;
	cout << "sizeof(c): " << sizeof(c) << endl;
	return 0;
}
