//E5.15
/*

Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Tong Yi

Assignment: E5.15

Takes a reference parameter a, b, and c and puts them in sorted order, ;east
to greatest.
*/
#include <iostream>

void sort2(int& a, int& b) {
  int temp;
  if (a > b) {
    temp = b; // hold value of b temporarily
    b = a; // b = a
    a = temp; //a = b
    return;
  } else {
    return;
  }
  return;
}

void sort3(int& a, int& b, int& c) {
  sort2(b, c);
  sort2(a, b);
  sort2(a, c);
  sort2(b, c);

  return;
}

int main() {
  int v = 3;
  int w = 4;
  int x = 1;
  sort3(v, w, x); // v is now 1, w is now 3, x is now 4

  std::cout << "v: " << v;
  std::cout << "\nw: " << w;
  std::cout << "\nx: " << x << std::endl;
  return 0;
}
