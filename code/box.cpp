//Lab 4A
/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 4A

The program takes user input of a width and height and makes a box in those
dimensions.
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main () {
  int width, height;
  cout << "Input Width: ";
  cin >> width;

  cout << "\nInput Height: ";
  cin >> height;

  cout << "\n" << "Shape:" << std::endl;
  for (int h = height; h > 0; h--) {
    for (int w = width; w > 0; w--) {
      cout << "*";
    }
    cout << std::endl;
  }

  return 0;
}
