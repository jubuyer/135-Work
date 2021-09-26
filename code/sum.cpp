/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Tong Yi
Project 1A

Reads a sequence of integers using cin from an example file
and reports the sum.
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
	int num;
	int sum = 0;

	while (cin >> num) {
		sum += num;
	}

	cout << sum << endl;
	return 0;
}