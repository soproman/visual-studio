// chap10 various.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define _SCL_SECURE_NO_WARNINGS 
#include<string>
#include<iostream>
#include<cstring>

using namespace std;
//following function for 10.3
string lettergrade(double grade) {
	static const double numbers[] =
	{
		90 ,80 ,70, 60, 50, 40, 0
	};
	static const char* alpha[] = 
	{
		"A+", "A", "B", "C" , "D", "E", "F"
	};
	static const size_t ngrades = sizeof(numbers) / sizeof(*numbers);
	for (size_t i = 0; i < ngrades; i++) {
		if (grade >= numbers[i]) return alpha[i];
	}
	return "\?\?\?";
}
	
char* newarray(const char* init) {
	size_t length = strlen(init) + 1;
	char* newt = new char[length];
	copy(init, init + length, newt);
	return newt;
}
int main() {
	const char bruh[] = { 's','b','\0' };
	char* sir = newarray(bruh);
	for (size_t i = 0; i < strlen(sir)+1; i++) {
		cout << *(sir++);
	}

	
	return 0;
}

/* const char* bro[] = {"bro", "sir","yolo" };
const int num = 3; 

int main(int num, char**bro)
{	
	if (num > 1) {
		int i = 1;
		for (i; i < num - 1; i++) {
			cout << bro[i] << " ";
		}
		cout << bro[i] << endl;
	}
    return 0;
}

*/
