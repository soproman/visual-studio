// Chapter 4 accelerated c++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#define _SCL_SECURE_NO_WARNINGS
#include "grade.h"
#include "student_info.h"
#include <algorithm>
#include <iomanip>
#include<ios>
#include <map>
#include"passfailclass q9.5-9.6.h"

#include "graderange.h"
using namespace std;

using std::vector; using std::endl; using std::cout; using std::string; using std::cin; using std::max; using std::setw; using std::domain_error;
using std::left;
int main()
{

	
	vector<student_info> students;
	student_info record;
	string::size_type maxlen;
	
	maxlen = 0;

	
	cout << "please enter your name,followed bty all the crap, and end of file" << endl;
	
	//NOT SURE IF THE ABOVE WOJULD WORK
	
	/* 2ND constructor in student_info.h tester
	- it takes the first line of input into it, while giving the rest to the 'record'

	student_info bro;
	bro = student_info(cin);

	*/ 
	

	while (record.read(cin)) {
		
			maxlen = max(maxlen, record.findname().size());
			students.push_back(record);
		
		 
	}
	sort(students.begin(), students.end(), compare);

	gradestorage stored;
	vector<char> stored2;
	for (vector<student_info>::size_type i = 0; i < students.size(); i++) {
		cout << left << setw(maxlen + 1) << students[i].findname();
		
		/* V1
		
		try {
			double final_grade = students[i].grade();
			static_cast <int> (final_grade);
			//store(stored, gradediscern(final_grade));
			
			store2(stored2, final_grade);
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade << setprecision(prec);
		}
		catch (domain_error e) {
			cout <<e.what();
		}
		*/
		
			double final_grade = students[i].showgrade();
			static_cast <int> (final_grade);
			//store(stored, gradediscern(final_grade));
			//string letter = lettergrade(final_grade);

			store2(stored2, final_grade);
			streamsize prec = cout.precision();

			if (final_grade != 0) 
			cout << setprecision(3) << final_grade << setprecision(prec);
				
		else cout << setprecision(3) << students[i].errorstate << setprecision(prec);
	//below this is orginal v1	
		cout << endl;
	}
	// gradestorage::key_compare stored =
	 store(stored, stored2);

	for (gradestorage::const_iterator iter = stored.begin(); iter != stored.end(); iter++) {
		cout << (*iter).first << " : " << (*iter).second << endl;
	}
	 // uncomment this for testing 2nd constructor        cout << bro.findname();
	
	passfail dudes = passfail(students);
	vector<string> pass = dudes.passreader();
	vector<string>fail = dudes.failreader();

	for (vector<string>::const_iterator iter = pass.begin(); iter != pass.end(); iter++) {
		cout << *iter << " : " << "P" << endl;
	}
	for (vector<string>::const_iterator iter = fail.begin(); iter != fail.end(); iter++) {
		cout << *iter << " : " << "F" << endl;
	}

    return 0;
}

