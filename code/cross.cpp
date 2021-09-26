//Lab 4C
/*
Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 4C

Purpose: Takes user input of a size and prints a cross with that length and 
width
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main () {
  int size;
  int first = 0;
  int second;

  cout << "Input size: ";
  cin >> size;

  second = size - 1;

  cout << "\n" << "Shape:" << std::endl;
  for (int row = 0; row < size; row++) { //rows (top to bottom)
    for (int column = 0; column < size; column++) { //columns (left to right)
      if ((column == first) || (column == second)) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << std::endl;
    first++;
    second--;
  }

  return 0;
}
