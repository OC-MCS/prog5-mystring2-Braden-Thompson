// member function implementations go in this file
#include "MyString.h"
#include <iostream>
#include <cstring>

using namespace std;

//================================
// order of functions
// 1) Default Constructor
// 2) Initialization Constructor
// 3) Deconstructor
// 4) Copy Costructor
// 5) Overloaded Assignment Operator
// 6) Overloaded + Operator
// 7) Getter Function
// 8) Overloaded == Operator
// 9) Overloaded << Operator
//================================

// 1)
MyString::MyString()
{
	pointer = new char[0];
}

// 2)
MyString::MyString(const char* strng)
{
	int size = strlen(strng) + 1;
	pointer = new char[size];
	strncpy_s(pointer, size, strng, size);
}

// 3)
MyString::~MyString()
{
	delete[] pointer;
}

// 4) 
MyString::MyString(const MyString& strng)
{
	int size = strlen(strng.pointer) + 1;
	pointer = new char[size];
	strncpy_s(pointer, size, strng.pointer, size);
}

// 5)
MyString MyString::operator=(const MyString& strng)
{
	delete[] pointer;
	int size = strlen(strng.pointer) + 1;
	pointer = new char[size];
	strncpy_s(pointer, size, strng.pointer, strlen(strng.pointer) + 1);

	return *this;
}

// 6)
MyString MyString::operator+(const MyString& strng)
{
	MyString temp;
	delete[] temp.pointer;
	const int size = strlen(pointer) + strlen(strng.pointer) + 1;
	temp.pointer = new char[size];
	strncpy_s(temp.pointer, size, pointer, strlen(pointer) + 1);
	strcat_s(temp.pointer, size, strng.pointer);

	return temp;
}

// 7) 
const char* MyString::string()const
{
	return pointer;
}

// 8)
bool MyString::operator==(const MyString& strng)
{
	if (this->pointer == strng.pointer)
	{
		return true;
	}

	else
	{
		return false;
	}
}

// 9)
ostream &operator << (ostream& output, const MyString& strng)
{
	output << strng.string();
	return output;
}