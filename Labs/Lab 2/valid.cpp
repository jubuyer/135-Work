/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab02-A

Takes user input of an integer in the range of 0-100, asking user
to reinput an integer if it is not within that range. After the number
is validated, the integer is squared and printed.
*/

#include <iostream>
using namespace std;

int main () {
  int n, square;

  cout << "Please enter an integer: ";
  cin >> n;

  while ((n >= 100) || (n <= 0)) {
    cout << "Please re-enter: ";
    cin >> n;
  }

  square = n * n;
  cout << "Number squared is " << square << endl;

  return 0;
}
