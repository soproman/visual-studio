
#include "stdafx.h"
#include <iostream>
#include "Squarecalculator.h"
#include <algorithm>
#include "integerreader.h"
#include <iomanip>
using namespace std; 

int main()
{
	cout << "Please enter a chain of integers (up till int=100), calculate its square" << endl;
	vector<double> num;
	vector<string> character;
	int maxlen;
	vector<double> containcrap;
	
	maxlen = reader(cin, num, character,containcrap);
	//dont know if mixing two types in the vector will mean g can hold the size of both types, or it means g can hold size of vector that consists of these two types
	double g;
	int z = 0;
	int y = 0;
	bool dude = true;
	g = num.size() + character.size();
	for (double i = 0; i < g; i++) {
		for (vector<double>::size_type j = 0; j < containcrap.size(); j++) {
			if (containcrap[j] == i) {
				cout << left << setw(maxlen + 1) << character[z];
				z++;
				cout << "This is not a number" << endl;
				dude = false;
			}
		}if (dude == true) {
			cout << left << setw(maxlen + 1) << num[y];
			
			try {
				double x = square(num[y]);
				cout << x;
			}
			catch (domain_error e) {
				cout << e.what();

			}
			cout << endl;
			y++;
		}
		}
		

		
	
    return 0;
}

