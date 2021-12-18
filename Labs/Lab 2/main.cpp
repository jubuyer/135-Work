/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab02-B

Utilizes the print_interval function prototyped and created in funcs.h
and funcs.cpp respectively to print the interval of numbers given the
lower (L) and upper (U) bounds. The program will print all numbers x, for
L <= x < U.
*/

#include <iostream>
#include "funcs.h"

int main () {
  print_interval(1, 10);
  std::cout << "\n";
  // should print 1 2 3 4 5 6 7 8 9
  print_interval(-6, 6);
  std::cout << "\n";
  // should print -6 -5 -4 -3 -2 -1 0 1 2 3 4 5
  print_interval(100,114);
  // should print 100 101 102 103 104 105 106 107 108 109 110 111 112 113
  std::cout << std::endl;

  return 0;
}
