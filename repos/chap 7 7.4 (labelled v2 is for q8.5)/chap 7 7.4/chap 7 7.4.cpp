// chap 7 7.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "sentencegen.h"
#include "grammar.h"
#include <string>
#include<map>
#include <iostream>
#include<iterator>
#include<list>
using namespace std;
//the user is limited to have all stored in second of grammar, used in the sentence. i had a misunderstanding of program
int main()
{
	// V1 vector<string> sentence = sengen(reader(cin));
	// V2.0 list<string> sentence;
	
	// V2 FOR TESTING DIFF CONTAINERS, BY CHANGING CODE LINE 17 and line 25
	// now implementing  for direct output to stream
	sengen(reader(cin), ostream_iterator<string>(cout," "));
	
	/* v1 except for usage of "lïst"

	list<string>::const_iterator iter = sentence.begin();
	cout << *iter;
	iter++;
	while( iter != sentence.end()) {
		
		cout << " " << *(iter++);
	}
	cout << endl;

	*/
    return 0;
}

