// Chap 7 q7.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<cctype>
#include <vector>
#include <iostream>
#include<algorithm>
#include<iterator>
using namespace std;

bool notspace(char c) {
	return !isspace(c);
}

bool space(char c) {
	return isspace(c);
}

template <class t>
void sorter(const string& s, t iter) {
	typedef string::const_iterator it;
	it iters= s.begin();
	while (iters != s.end()) {
		iters = find_if(iters, s.end(), notspace);
		it iters2 = find_if(iters, s.end(), space);
		if (iters != iters2) {
			(*iter) = string(iters, iters2);
			iter++;
		}
		iters = iters2;
	}
}

int main()
{	
	string s;
	vector<string> words;
	while (getline(cin, s)) {6
		
		/*(1) the line below me stores the words, before outputting them one by one in the for loop 
		
		sorter(s, back_inserter(words));

		*/
		//(2)the line below me does not store, it outputs the words as they pass through ostreamiterator
		sorter(s, ostream_iterator<string>(cout,"\n"));
	}
	
	/* for (vector<string>::const_iterator iter = words.begin(); iter != words.end(); iter++) {
		cout << *iter << endl;

	} */
    return 0;
}

