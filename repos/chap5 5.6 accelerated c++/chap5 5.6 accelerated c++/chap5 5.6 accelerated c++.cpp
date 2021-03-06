// chap5 5.6 accelerated c++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "substractor.h"
#include "frame.h"
using namespace std;

int main()
{
	string s;
	vector<string> collection;
	while (getline(cin, s)) {
		
		substractor(s, collection);
		
	}

	vector<string> frame;
	string::size_type size;
	frame = framer(collection,size);
	
	vector<string>combo;

	typedef vector<string>::const_iterator it;

	it iter1 = frame.begin();
	it iter2 = collection.begin();
	
	while(iter1 != frame.end() || iter2 != collection.end()) {
		string temp;
		if (iter2 == collection.end() && iter1 != frame.end()) {
			temp = string(size + 1, ' ');
		}
		if (iter2 != collection.end()) {
			temp = *iter2 +string(size- (*iter2).size() +1, ' ');
			iter2++;
		}
		
		
		if (iter1 != frame.end()) {
			temp += *(iter1++);
		}
		combo.push_back(temp);

	}


	
	

	/* the following is code for section 5.6, for reading out to console */
	vector<string>::const_iterator i = combo.begin();
	while (i != combo.end()) {
		cout << *i << endl;
		i++;
	}
	
    return 0;
}

