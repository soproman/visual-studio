// accelerated c++ chap 12.cpp : Defines the entry point for the console application.
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
	std::cout << damn <<std::endl;
	std::vector<str> bro;
	str q10 = str(jay.begin(), jay.end());
	std::cout << q10 << std::endl;
	//works
	str q6;
	if (!q6) std::cout << "it is empty";
	
	int foo[3] = { 0,50,60 };
	vec<int> testing;

	testing.assign(foo,3);

	std::cout << testing[1];


	

	//inifinity loops
	while(q6.getline())
	std::cout << q6 << std::endl;
	while (std::cin >> sir) bro.push_back(sir);
	for (std::vector<str>::iterator i = bro.begin(); i < bro.end(); i++) std::cout << *i << std::endl;
	


    return 0;
}

