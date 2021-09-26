//Lab 4E
/*
Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 4E

Purpose: Prints a triangle (Half of a square) with right side indentation with
the dimensions of the input size.
*/
#include <iostream>

using std::cout;
using std::cin;

int main () {
	int side;
  int space = 0;

	cout << "Input side length: ";
	cin >> side;

	cout << "Shape: " << std::endl;
  for (int i = 0; i < side; i++) {
    for (int j = 0; j < side; j++) {
      if (j < space) {
        cout << " ";
      } else if (j >= space) {
        cout << "*";
      }
    }
    space++;
    cout << "\n";
  }

	return 0;
}
