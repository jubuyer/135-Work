/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Mike Zamansky
Lab 1D

Takes user input of a calendar year and month and prints the
number of days in that month
*/

#include <iostream>
using namespace std;

int main () {
	int year, month, leap, after;

	cout << "Enter year: ";
	cin >> year;
	cout << "\nEnter month: ";
	cin >> month;

	if ((year % 4) > 0)
		leap = 0;                   //common year
	else if ((year % 100) > 0)
		leap = 1;                   //leap year
	else if ((year % 400) > 0)
		leap = 0;                   //common year
	else
		leap = 1;                   //leap year

	if (month > 7)
		after = month - 7;
	else
		after = month;

	while (!(month == 2))
	{
		if (((after % 2) == 0))
		{
			cout << "30 days" << endl;
			return 0;
		}
		else
		{
			cout << "31 days" << endl;
			return 0;
		}
	}

	if ((month == 2) && (leap == 1))
		cout << "29 days" << endl;
	else
		cout << "28 days" << endl;

	return 0;
}