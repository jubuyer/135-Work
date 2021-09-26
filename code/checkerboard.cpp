//Lab 4B
/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 4B

The program takes user input of a width and height and makes a checkerboard in
those dimensions.
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
  for (int h = 0; h < height; h++) { //loop for the rows to be printed
    for (int w = 0; w < width; w++) { //loop for stars and spaces in each row
      if ((h % 2) != 0) { //checks if even/odd row, prints either space or star
        if ((w % 2) != 0) { //checks if even/odd column, prints space/star
          cout << "*"; //if odd row, odd column
        } else if ((w % 2) == 0){
          cout << " "; //if odd row, even column
        }
      } else {
        if ((h % 2) == 0) {
          if ((w % 2) != 0) {
            cout << " "; //if even row, odd column
          } else if ((w % 2) == 0) {
            cout << "*"; //if even row, even column
          }
        }
      }
    }
    cout << std::endl;
  }

  return 0;
}
