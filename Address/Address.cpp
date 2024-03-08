// Address.cpp : Defines the entry point for the console application.
/*
Dean Hartfield

10-21-2015

Module 03 Assignment - Pointer Examples

Program #2 Instructions:

1. Write another simple Address program to print the value of the memory addresses of the variables listed below:
		-a char
		-a string
		-an array of integers
		-an integer
		-a double
2. See the sample code below for an example of how your program output should look:
		
		Integer has memory address 0x434232
		String has memory address 0x434234
		Array has memory address 0x434320
		Array[1] has memory address 0x434322
		Array[2] has memory address 0x434324
		Array[3] has memory address 0x434326
		etc...
		etc...

3. Name the project: Address.cpp
*/


#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>


int main()
{
	char aChar = 'Z';
	std::string aString = "This is a string.";
	int aInts[5] = { 1, 2, 3, 4, 5 };
	int aInt = 34;
	double aDouble = 3.1415;

	std::cout << std::endl;
	std::cout << "Char has memory address " << static_cast<void *>(&aChar) << std::endl;
	std::cout << "String has memory address " << &aString << std::endl;
	
	std::cout << "Array has memory address " << &aInts << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "Array[" << i << "] has memory address " << &aInts[i] << std::endl;
	}

	std::cout << "Integer has memory address " << &aInt << std::endl;
	std::cout << "Double has memory address " << &aDouble << std::endl;
	std::cout << std::endl;

	return 0;
}
