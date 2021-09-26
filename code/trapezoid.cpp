//Lab 4F
/*
Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 4F

Purpose: Given a height and width, program prints an inverted trapezoid, unless
the shape is impossible.
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main () {
  int height, width;
  int spaces;
  int stars;
  int temp = 0;

  cout << "Input width: ";
  cin >> width;

  cout << "\nInput height: ";
  cin >> height;

  spaces = 0;
  stars = width;

  if ((width % 2) == 0) {
    if (height > (width / 2)) {
      cout << "Impossible shape!" << std::endl;
      return 0;
    }
  } else {
    if (height > ((width / 2) + 1)) {
      cout << "Impossible shape!" << std::endl;
      return 0;
    }
  }

  cout << "\n" << "Shape:" << std::endl;
  for (int row = 0; row < height; row++) { //rows (top to bottom)
    for (int column = 0; column < width; column++) { //columns (left to right)
      if (column < spaces)  {
        cout << " ";
      }
      if ((column >= spaces) && (temp < stars)) {
        cout << "*";
        temp++;
      }
    }
    cout << std::endl;
    temp = 0;
    spaces++;
    stars -= 2;
  }

  return 0;
}
