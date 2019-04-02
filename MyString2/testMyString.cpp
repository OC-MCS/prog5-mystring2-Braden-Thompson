// main goes in this file

#include "MyString.h"
#include <iostream>

using namespace std;

int main()
{
	MyString s1 = "Braden";
	MyString s2 = "Thompson";
	MyString s3 = s2;
	//MyString s4 = (s1 == s2); 
	MyString s5 = s1 + s2;
	MyString s6, s7;

	cout << "String literal" << endl;
	cout << "==============" << endl;
	cout << s1 << " " << s2 << endl;

	cout << "String Copy Func" << endl;
	cout << "================" << endl;
	cout << s3 << endl;

	cout << "String Concatenation" << endl;
	cout << "====================" << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s1 and s2: " << s5 << endl;

	cout << "Weird assignment Prof Harbert\n";
	cout << "said we probably wouldn't use\n";
	cout << "===============================" << endl;
	s7 = s6 = s2;
	cout << "s6: " << s6 << endl;
	cout << "s7: " << s7 << endl;

	return 0;
}