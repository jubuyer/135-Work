//September 27, 2021
//ways to test code

#include <cstdio>
#include <iostream>

#define LOG(x) std::cerr << x << "\n";

int main () {
	std::cout << "Start of program\n";
	LOG("this is going to cerr");
	std::cout << "this is cout\n";
	abort();

	return 0;
}