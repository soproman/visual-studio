// chap 6 6.2 accelerated c++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "student_info.h"
#include "grade.h"
#include "sorter.h"
#include"write_analysis.h"
#include <vector>
#include <string>



using namespace std;

int main()
{
	vector<student_info> students;
	student_info solo;
	while (read(cin, solo)) {
		students.push_back(solo);
	}

	vector<student_info> did, didnot;
	//define splitter of do all hw, versus rest. classified into second and third parameter
	sorter(students,did,didnot);

	
	//analyse triplet(functions defined outside), and output
	//write_analysis function defined outside
	write_analysis("Median of all(unmarked = 0, but included in calc of hw median)",median_analysis, cout, did, didnot);
	write_analysis("Average",average_analysis, cout, did, didnot);
	write_analysis("Median of only homework turned in", medianhw_only, cout, did, didnot);
	cout << endl;
	

    return 0;
}

