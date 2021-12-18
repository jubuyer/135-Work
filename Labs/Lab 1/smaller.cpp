/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Mike Zamansky
Lab 1A

Takes user input of two integer numbers and prints the smaller
value of the two. 
*/

#include <iostream>
using namespace std;

int main () 
{
	int first, second;

	cout << "Enter the first number: ";
	cin >> first;

	cout << "\nEnter the second number: ";
	cin >> second;

	if (first > second)
		cout << "The smaller of the two is: " << second << endl;
	else
		cout << "The smaller of the two is: " << first << endl;

	return 0;
}