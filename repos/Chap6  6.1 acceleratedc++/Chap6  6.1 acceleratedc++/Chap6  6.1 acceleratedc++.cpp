// Chap6  6.1 acceleratedc++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cctype>
#include <vector>
#include <string>
#include<algorithm>
#include<iostream>

using namespace std;

// word splitter v2

bool notspace(char c) {
	return !isspace(c);
}

bool space(char c) {
	return isspace(c);
}
typedef string::const_iterator iter;

vector<string> words(const string& s) {
	vector<string> words;
	iter beg = s.begin();
	while (beg != s.end()) {
		 beg = find_if(beg, s.end(), notspace);

		iter back = find_if(beg, s.end(), space);
		if (beg != s.end()) {
			
			words.push_back(string(beg, back));
			beg = back;
		}
		
	}
	return words;
}

int main()
{
	string s;
	getline(cin, s);
	vector<string> word = words(s);
	for (int i = 0; i < word.size(); i++) {
		cout << word[i] << endl;
	}
    return 0;
}

