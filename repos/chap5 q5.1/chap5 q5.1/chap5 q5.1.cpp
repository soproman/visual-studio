// chap5 q5.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include<algorithm>
#include <iostream>
#include "lengthminuslastword.h"
#include "substractor.h"
#include "sorter.h"
using namespace std;

int main()
{
	string s;
	string::size_type maxlen = 0;
	vector<categorizer> collection;
	
	
	int index = 0;
	int i = 0;
	while (getline(cin, s)) {
		categorizer seperatedstring;
		maxlen = max(maxlen, lengthminuslast(s));
		substractor(s, seperatedstring.word);
		seperatedstring.line = i;
		collection.push_back(seperatedstring);
		i++;
	}
	// for the above code:each collection vector stores a different line of input, while having a line index .cout << collection[1].line;
	
	vector<categorizer2> indiwords = sorter(collection);

	for (int i = 0; i < indiwords.size(); i++) {
		int j = 0;
		//counting for a match between lines of ori and the words of listed in the ori lines
		while (indiwords[i].line2 != collection[j].line) {
			j++;
		}
		int q = 0;
		
		string::size_type length =0;

	
		//invariant: this is the index of the matching words
		while (indiwords[i].word2 != collection[j].word[q]) {
			length += collection[j].word[q].size() + 1;
			
			q++;
		}
		cout << string(maxlen - length +1 , ' ');
		for (int z = 0; z < q; z++) {
			cout << collection[j].word[z] + " ";
		}
		cout << "    ";
		while (q < collection[j].word.size()) {
			cout << collection[j].word[q] + " ";
			q++;
		}
		cout << endl;
	}



	/* checker
	
	for (int i = 0; i < dude.size(); i++) {
		cout << dude[i].word2 << " - " << dude[i].line2 << endl;
	}
	*/
    return 0;
}

