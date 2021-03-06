// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <ios>
#include<iomanip>
#include<string>
#include<vector>

using std::cin;		using std::vector;	using std::sort;
using std::cout; using std::streamsize;
using std::string;
using std::endl;
int main()
{
	cout << "please enter your full name:";
	string name;
	cin >> name;
	cout << "Hello " + name + "!" << endl;
	
	// CURIOUS WHAT WILL happen to output display since i did not end with endl  //the input will start on the same line if no endl
	cout << "please enter your midterm and final exam grades: "<<endl;
	double midterm, final;
	cin >> midterm >> final;

	cout << "enter all your homework grades:"
		"followed by end-of-file" <<endl;
	vector<double> homework;
	double x;
	while (cin >> x) homework.push_back(x);
	
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	if (size == 0) {
		cout << "you must enter your homework grades."
			"please try again!!" << endl;
		return 1;
	}
	
	sort(homework.begin(), homework.end());
	double median;
	vec_sz mid = size / 2;
	median = (size % 2 == 0) ? (homework[mid] + homework[mid - 1]) / 2
		: homework[mid];

	streamsize prec = cout.precision(3);
	//SEE THE DIFF OF USING "<<" AND JUST + LATER       // it displats them like stings instead if u use <<
	cout << "your final grade is " << median << midterm << final << endl;
	cout.precision(prec);



    return 0;
}

