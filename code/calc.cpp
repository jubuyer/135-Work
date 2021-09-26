//Description
/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Tong Yi
Project 1B

Taking an input of a file with one formula, the program will 
compute it taking into account integers and operations.
*/

#include <iostream>
using namespace std; 

int main () {
	int integer;
	int total = 0;
	char op;
	char prev = '+';

	while (cin >> integer >> op) {
		if (prev == '+')
			total += integer;
		else
			total -= integer;

		prev = op;
	}

	//cin >> integer;
	if (prev == '+')
		total += integer;
	else
		total -= integer;

	cout << total << endl;
	return 0;

}