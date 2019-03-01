#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class MyString 
{
private:
	char *pointer;

public:
	MyString(); // default constructor
	MyString(const char*); // constructor that initializes MyString
	~MyString(); // deconstructor
	MyString(const MyString&); // copy constructor
	MyString operator=(const MyString&); // overloaded assignment operator
	MyString operator+(const MyString&); // overloaded + operator for string cat
	const char* string()const; // getter function
	bool operator == (const MyString&); // overloaded == operator
};

ostream &operator << (ostream &output, const MyString &strng); // overloaded << operator