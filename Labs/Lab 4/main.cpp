//Lab 4
/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 4

Each functions description can be found in shapes.h
*/

#include <iostream>
#include <string>
#include "shapes.h"

using std::cout;
using std::cin;
using std::endl;

int main () {
  std::string seperator = "\n_________________________________________\n";
  std::string mini_sep = "===================\n";

  cout << "\nFunctions use width, length input (width x length)\n";

  //Tests for functions from lab 4
  //4A
  cout << seperator;
  cout << "                TASK A                  " << seperator;
  cout << "Box test: 5x4\n";
  cout << box(5,4);
  cout << mini_sep << "Box test: 4x6\n";
  cout << box(4,6);
  cout << mini_sep << "Box test: 5x3\n";
  cout << box(5,3);

  //4B
  cout << seperator;
  cout << "                TASK B                  " << seperator;
  cout << "Checkerboard test: 11x6\n";
  cout << checkerboard(11,6);
  cout << mini_sep << "Checkerboard test: 9x8\n";
  cout << checkerboard(9,8);
  cout << mini_sep << "Checkerboard test: 5x4\n";
  cout << checkerboard(5,4);

  //4C
  cout << seperator;
  cout << "                TASK C                  " << seperator;
  cout << "Cross test: 8\n";
  cout << cross(8);
  cout << mini_sep << "Cross test: 5\n";
  cout << cross(5);
  cout << mini_sep << "Cross test: 7\n";
  cout << cross(7);

  //4D
  cout << seperator;
  cout << "                TASK D                  " << seperator;
  cout << "Lower test: 8\n";
  cout << lower(8);
  cout << mini_sep << "Lower test: 5\n";
  cout << lower(5);
  cout << mini_sep << "Lower test: 6\n";
  cout << lower(6);

  //4E
  cout << seperator;
  cout << "                TASK E                  " << seperator;
  cout << "Upper test: 5\n";
  cout << upper(5);
  cout << mini_sep << "Upper test: 3\n";
  cout << upper(3);
  cout << mini_sep << "Upper test: 6\n";
  cout << upper(6);

  //4F
  cout << seperator;
  cout << "                TASK F                  " << seperator;
  cout << "Trapezoid test: 12x5\n";
  cout << trapezoid(12,5); //gives trapezoid
  cout << mini_sep << "Trapezoid test: 5x3\n";
  cout << trapezoid(5,3); //gives triange
  cout << mini_sep << "Trapezoid test: 12x7\n";
  cout << trapezoid(12,7); //gives error message

  //4G
  cout << seperator;
  cout << "                TASK G                  " << seperator;
  cout << "Checkerboard3x3 test: 16x11\n";
  cout << checkerboard3x3(16,11);
  cout << mini_sep << "Checkerboard3x3 test: 27x27\n";
  cout << checkerboard3x3(27,27);
  cout << mini_sep << "Checkerboard3x3 test: 18x13\n";
  cout << checkerboard3x3(18,13);

  return 0;
}
