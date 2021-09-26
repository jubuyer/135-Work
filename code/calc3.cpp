//Description
/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Tong Yi
Project 1D

Taking an input of a file with one formula, the program will 
compute it taking into account integers and operations (+, -, ^).
*/

#include <iostream>
using namespace std; 

int main () 
{
	int integer;
	int total = 0;
	char op;
	char prev = '+';

	while (cin >> integer >> op) 
	{
		//check if first op is or is not square
		if (op != '^')
		{
			if (prev == '+')
				total += integer;
			else if (prev == '-')
				total -= integer;
		}

		if (op == '^') 
		{
			if (prev == '+')
				total += (integer * integer);
			else if (prev == '-')
				total -= (integer * integer);
		
		cin >> op;
		prev = op;

		}
		else
			prev = op;

		if (op == ';')	
		{
			cout << total << endl;
			total = 0;
			op = '+';
			prev = '+';
		}

		prev = op;
	}
	
	//outputs should be 25, 1012

	//cout << total << endl;
	return 0;

}