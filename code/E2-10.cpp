/*

Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Tong Yi

Assignment: E2.10

Takes in the miles per gallon and cost of gas and returns 
the cost to travel 100 miles.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  double gallons; 
  double efficiency; 
  double price;

  cout << "Enter number of gallons in tank: ";
  cin >> gallons;

  cout << "Enter fuel efficiency (mi/gal): ";
  cin >> efficiency;

  cout << "\nEnter price of gas per gallon: ";
  cin >> price;

  double ratio = 100/efficiency;
  double chundred = price * ratio;

  double far = gallons * efficiency;

  cout << chundred;
  cout << far;
  //cout << "The cost per 100 miles is: " << chundred << endl;
  //cout << "You can go for "<< far << "more miles longer" << endl;

  return 0;
}
