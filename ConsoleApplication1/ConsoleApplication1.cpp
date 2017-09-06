// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int myAge = 39;
	char myGrade = 'A';

	string name = "Marcelo";
	cout << name << endl;

	cout << "Size of int: " << sizeof(myAge) << endl;
	cout << "Size of char: " << sizeof(myGrade) << endl;
	cout << "myAge is located at " << &myAge << endl;
	cout << "Hello world" << endl;

	for (size_t i = 0; i < 5; i++) {
		cout << i << endl;
	}
	return 0;
}

