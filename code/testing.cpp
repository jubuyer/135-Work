//September 27, 2021
//ways to test code

/*
 - cerr does not buffer and will print immediately 
 - cout has a buffer and theres a chance that it will not print due to crash
 - you can have 2 mains while utilizing makefile
 - libraries to support unit testing were created: search c++ doc test
 - github.com/onqtam/doctest
*/

#include <cstdio>
#include <iostream>

#define LOGGING

#ifdef LOGGING
	#define LOG(x) std::cerr << x << "\n"; 
#else
	#define LOG(x)
#endif

int main () {
	std::cout << "Start of program\n";
	LOG("this is going to cerr");
	std::cout << "this is cout\n";

	#undef LOGGING


	return 0;
}