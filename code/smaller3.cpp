/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Mike Zamansky
Lab 1B

Takes user input of three integer numbers and prints the smallest
integer of the three. 
*/

#include <iostream>
using namespace std;

int main () 
{
	int first, second, third, smallest;

	cout << "Enter the first number: ";
	cin >> first;

	cout << "\nEnter the second number: ";
	cin >> second;

	cout << "\nEnter the third number: ";
	cin >> third;

	if ((first < second) && (first < third))
		smallest = first;
	else if ((second < first) && (second < third))
		smallest = second;
	else
		smallest = third;

	cout << "The smallest of the three is " << smallest << endl;
	return 0;
}