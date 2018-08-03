// chap 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iterator>
#include <algorithm>
#include<vector>
#include<iostream>
using namespace std;

template <class it>
void swapper(it begin, it end) {
	while (begin != end) {
		end--;
		if (begin != end) {
			 /*   Both this and the code proceeding this work
				 
				 typename it::value_type bro;

			 */
			typename iterator_traits<it>::value_type bro;
				
 //SO even though value type definition is: the type of the values that can be obtained by deferecnging the iterator 
     // the value type becomes a variable , and does not stay as a type??? wow
			bro = *end;

			*end = *begin;
			*begin++ = bro;
		}
	}
}

int main()
{
	vector<double> bro = { 5,4,3,2,1 };
	swapper(bro.begin(), bro.end());
	for (vector<double>::const_iterator iter = bro.begin(); iter != bro.end(); iter++) {
		cout << *iter << endl;
	}

    return 0;
}

