/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab02-D

Uses an array of integers to compute and print the first Fibonacci number
to the 60th Fibonacci number.
*/

#include <iostream>
using namespace std;

int main () {
  int fib[60];

  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i < 60; i++) {
    fib[i] = fib[i-1] + fib [i-2];
  }

  /****************************************************************
  The Fibonacci sequence diverges from what we would expect at
  fib[47], when the numbers reach the two billions.
  The exact math going as fib[] approaches fib[47] is
  fib [46] + fib [45] --> 1836311903 + 1134903170.
   Maybe due to space limitations the code is unable to store the
  full correct value of what would be expected from the Fibonacci
  sequence. Due to the bit limitation of the normal int the bits of
  a number of over two billions do not fit. Using long int could
  possibly solve the issue.
  ****************************************************************/

  for (int a = 0; a < 60; a++) {
    cout << fib[a] << endl;
  }

  return 0;
}
