// chap11 accelerated c++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vec.h"
#include<iostream>
#include<string>
#include<memory>
using std::string;
/*
bool space(const char& c) {
	return isspace(c);
}

bool notspace(const char& c) {
	return !isspace(c);
}
*/
/*vec<std::string> splitter(const std::string& s) {
	vec<string> words;
	string::const_iterator iter = s.begin();
	while (iter != s.end()) {
		iter = find_if(iter, s.end(), notspace);
		string::const_iterator spaceiter = find_if(iter, s.end(), space);
		if (iter != s.end())
			words.pushback(string(iter, spaceiter));
		iter = spaceiter;
	}
	return words;
	
}*/
int main()
{	//vec<string>::const_iterator
	vec<int> bro;
	bro.pushback(5);
	bro.pushback(1000);
	bro.pushback(6700);
	
	//vec<int>::iterator point = bro.begin();
	//bro.~vec();
	// bro.destroy(&bro[0]);

	bro.erase(&bro[0]);
	std::cout << (bro[1]) << std::endl;
	std::cout << bro.size();
    return 0;
}

