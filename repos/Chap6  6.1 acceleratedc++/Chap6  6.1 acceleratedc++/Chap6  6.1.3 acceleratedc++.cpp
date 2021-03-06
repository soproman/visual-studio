// Chap6  6.1 acceleratedc++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cctype>
#include <vector>
#include <string>
#include<algorithm>
#include<iostream>
#include "url_beg.h"
#include "url_end.h"

using namespace std;

//THE continuous string regardless line creator
string cont(istream& cin) {
	string s;
	string z = string();
	while (getline(cin, s)) {
		//counts new line as SPACE
		s += " ";
		
		z.append(s);
	}
	return z;
}



int main()
{
	string text = cont(cin);
	vector<string> url;
	typedef string::const_iterator iter;

	iter beg = text.begin();     iter end = text.end();
	while (beg != text.end()) {
		// url_beg verifies a url is present(if url is not present, regardless whether theyre at the end, assign beg to end), and identifies its beginning, assigning that iter value to beg
		beg = url_beg(beg, end);
		iter q =beg;
		if (beg != end) {
			q = url_end(q, end);
			// I think using the string constructor by using iterators of an existing string is pretty genius.
			url.push_back(string(beg, q));
			beg = q;
		}

	}
	
	/* tester
	vector<string> word = words(s); */
	for (int i = 0; i < url.size(); i++) {
		cout << url[i] << endl;
	}

	// THE FOLLOWING is code for chap 6 last question. vector string concatenation 

	vector<string>::const_iterator iters = url.begin();
	string s;
	while (iters != url.end()) {
		copy((*iters).begin(), (*iters).end(), back_inserter(s));
		iters++;
	}
	cout << s;
    
	
	return 0;

	
}

