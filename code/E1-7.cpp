//Description
/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Tong Yi
E1.7

This program allows the user to input three names and then outputs
them onto three separate lines.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name1, name2, name3;

	cout << "Enter the first name: ";
	cin >> name1;

	cout << "\nEnter the second name: ";
	cin >> name2;

	cout << "\nEnter the third name: ";
	cin >> name3;

	cout << name1 << endl;
	cout << name2 << endl;
	cout << name3 << endl;

	return 0;

}