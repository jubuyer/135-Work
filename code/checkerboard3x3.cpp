//Lab 4G
/*
Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 4G

Purpose: prints 3x3 sets of stars and spaces to create a checkerboard of the
input length and width
*/

//  g++ -Wall checkerboard3x3.cpp -o checkerboard3x3
//  ./checkerboard3x3
#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main () {
  int width, height;
  int col_flag = 0;
  int row_flag = 0;

  cout << "Input width: ";
  cin >> width;

  cout << "Input height: ";
  cin >> height;

  cout << "Shape: " << "\n";
  for (int row = 1; row <= height; row++) { //rows (top to bottom)
    for (int col = 0; col < width; col++) { //columns (left to right)
      if ((col % 3) == 0) {
        col_flag++;
      }

      if (((col_flag % 2) == 1) && ((row_flag % 2) == 0)) {
        cout << "*";
      }
      else if (((col_flag % 2) == 0) && ((row_flag % 2) == 0)) {
        cout << " ";
      } else if (((col_flag % 2) == 1) && ((row_flag % 2) == 1)) {
          cout << " ";
        } else if (((col_flag % 2) == 0) && ((row_flag % 2) == 1)) {
            cout << "*";
        }
    }
    if ((row % 3) == 0) {
        row_flag++;
      }
    col_flag = 0;
    cout << "\n";
  }
  return 0;
}
