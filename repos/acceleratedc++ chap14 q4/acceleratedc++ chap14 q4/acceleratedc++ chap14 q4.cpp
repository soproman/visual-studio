// acceleratedc++ chap14 q4.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "str.h"	
#include <iostream>
#include<vector>


int main()
{
	//test
	str sir;
	sir = "you gay";
	str jay = "yolo man";
	str damn = sir + jay;
	if (sir > jay)
		std::cout << sir << std::endl;
	std::cout << damn << std::endl;
	std::vector<str> bro;
	str q10 = str(jay.begin(), jay.end());
	std::cout << q10 << std::endl;
	//works
	str q6;
	if (!q6) std::cout << "it is empty";

	int foo[3] = { 0,50,60 };
	vec<int> testing;

	testing.assign(foo, 3);

	std::cout << testing[1];




	return 0;
}


