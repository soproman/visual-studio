// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"	
#include <iostream>
#include <string>
using std::cin; using std::cout; using std::string; using std::endl;
int main()
{
	cout << "what is your first name?" << endl;
	string name;
	cin >> name;
	int pad;
	const string greeting = "Hello, " + name + "!";
	cout << "please enter numebr of spacing" << endl;
	cin >> pad;
	
	
		int row = pad * 2 + 3;
		for (int r = 0; r != row; r++) {
			cout << endl;
			string::size_type col = greeting.size() + pad * 2 + 2;
			string::size_type c = 0;
			int greetingspace = 0;
			int padspace = 0;
			while (c != col) {
				if (r == pad + 1 && c == pad + 1) {
					cout << greeting;
					c += greeting.size();
				}
				else {
					if (c == 0 || r == 0 || r == row - 1 || c == col - 1) {
						cout << "*";
						c++;
					}
					else {

						if (r==(row-1)/2) {
							greetingspace++;
						}
						else padspace++;
						if (greetingspace == greeting.size() + pad * 2 && r != 0 && r != (row - 1) / 2 && r != row - 1) {
							c += greetingspace;
						}
						else {
							if(greetingspace==)
						}
					}
					
				}

			}

		
	}
	system("pause");
	return 0;
}
