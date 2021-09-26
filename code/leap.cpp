/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Mike Zamansky
Lab 1C

Takes user input of a calendar year and prints whether it is a 
common year or a leap year.
*/

#include <iostream>
using namespace std;

int main () 
{
	int year;

	cout << "Enter year: ";
	cin >> year;

	if ((year % 4) > 0)
		cout << "Common Year" << endl;
	else if ((year % 100) > 0)
		cout << "Leap Year" << endl;
	else if ((year % 400) > 0)
		cout << "Common Year" << endl;
	else
		cout << "Leap Year" << endl;

	return 0;
}