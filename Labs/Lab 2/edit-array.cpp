/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab02-C

The program creates an array of 10 integers and provides the user
with an interface to edit any of it's elements. Makes sure that
the inputted index is within the range of the array.
*/

#include <iostream>
using namespace std;

int main () {
  int myData[10];
  int i, v;
  for (int c = 0; c < 10; c++) {
    myData[c] = 1;
  }
  do {
    for (int d = 0; d < 10; d++) {
      cout << myData[d] << " ";
    }

    cout << "\nInput index: ";
    cin >> i;

    cout << "\nInput value: ";
    cin >> v;

    if ((i >= 0) && (i < 10)) {
      myData[i] = v;
    }
  } while ((i >= 0) && (i < 10));

  return 0;
}
