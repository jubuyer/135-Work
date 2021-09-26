//Lab 4D
/*
Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 4D

Purpose: Prints a triangle (Half of a square) with the dimensions of the input
side
*/
#include <iostream>

using std::cout;
using std::cin;

int main () {
	int side;

	cout << "Input side length: ";
	cin >> side;

	cout << "Shape: " << std::endl;
	for (int i = 0; i < side; i++){

		for (int f = 0; f < i; f++){
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}
