// Consol'eApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h" 
#include "iostream"
#include <string>

int main()
{
	std::cout << "Please input your first name.:";
	std::string name;
	std::cin >> name;
	std::string greeting = "Hello, " + name + "!";
	std::string size(greeting.size(), ' ');
	std::string line2 = "* " + size + " *";
	std::string line1(line2.size(), '*');
	std::string james = "* Hello, " + name + "!" + " *";
	

	std::cout << line1 << std::endl;
	std::cout << line2 << std::endl;
	std::cout << james << std::endl;
	std::cout << line2 << std::endl;
	std::cout << line1 << std::endl;

	system("pause");
	return 0;
}

