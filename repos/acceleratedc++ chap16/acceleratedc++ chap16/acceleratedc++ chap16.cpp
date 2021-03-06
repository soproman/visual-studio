// acceleratedc++ chap16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"picture.h"
#include<iostream>
#include"student_info.h"
#include<algorithm>

int main()
{
	vector<student_info> students;
	student_info s;

	while (s.read(std::cin)) students.push_back(s);
	std::sort(students.begin(), students.end(), student_info::compare);


	picture grades = histogram(students);

	std::cout << grades;
    return 0;
}

