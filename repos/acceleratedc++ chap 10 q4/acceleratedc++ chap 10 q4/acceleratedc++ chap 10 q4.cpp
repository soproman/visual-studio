// acceleratedc++ chap 10 q4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stringlist.h"
#include <iostream>
int main()
{	
	stringlist bro;
	
	bro.pushback("sir u gay");
	bro.pushback("lol");
	stringlist::iterator  sir = bro.begin();
	for(stringlist::iterator i =bro.begin();i!=bro.end();i++)
	std::cout << *i << std::endl;
	//std::cout << *(sir+1 )<< std::endl;

    return 0;
}

