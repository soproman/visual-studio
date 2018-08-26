// acceleratedc++ chap14 (attempt 2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "student_info.h"
#include<vector>
#include<string>
#include <algorithm>
#include <iomanip>
#include<ios>
#include<iostream>


using std::vector; using std::endl; using std::cout; using std::string; using std::cin; using std::max; using std::setw; using std::domain_error;
int main()
{
	vector<student_info> students;
	student_info record;
	string::size_type maxlen = 0;
	//core*p1 = new core;

	cout << "please enter your name,followed bty all the crap, and end of file" << endl;

	while (record.read(cin)) {
		maxlen = max(maxlen, record.findname().size());
		students.push_back(record);
	}
	//sort(students.begin(), students.end(), student_info::compare);

	for (vector<student_info>::size_type i = 0; i < students.size(); i++) {
		cout << setw(maxlen + 1) << students[i].findname();
		cout << " ";
		try {
			double final_grade = students[i].grade();
			std::streamsize prec = cout.precision();

			cout << std::setprecision(3) << final_grade << std::setprecision(prec) << "  ";
			//for chap13 q 4
			cout << students[i].letter_grade();
		}
		catch (std::domain_error e) {
			cout << e.what();
		}
		cout << endl;
	}


	return 0;
}

