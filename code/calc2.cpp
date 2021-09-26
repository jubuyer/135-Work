//Description
/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Tong Yi
Project 1C

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

	while (cin >> integer >> op) 
	{
		//prematurely adds the first integer to the total
		// then continues as normal for the following integers in formula
		if (prev == '+')
			total += integer;
		else if (prev == '-')	
			total -= integer;

		//will recognize end of formula and print the total
		//resets total to the next number in next forumla
		if (prev == ';')	
		{
			cout << total << endl;
			total = integer;
		}

		prev = op;	//stores next operation
	}

	
	//UNNECESSARY?
	// if (prev == '+')
	// 	total += integer;
	// else if (prev == '-')
	// 	total -= integer;
	
	
	//outputs should be 15, 39, 3

	cout << total << endl;
	return 0;

}