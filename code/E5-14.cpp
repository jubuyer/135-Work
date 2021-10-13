//E5.14
/*

Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Tong Yi

Assignment: E5.14

Takes a reference parameter a and b, with a and be swapped if a > b or staying
the same otherwise
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

int main() {
  int u = 2;
  int v = 3;
  int w = 4;
  int x = 1;
  sort2(u, v); // u is still 2, v is still 3
  sort2(w, x); // w is now 1, x is now 4

  std::cout << "u: " << u;
  std::cout << "\nv: " << v;
  std::cout << "\nw: " << w;
  std::cout << "\nx: " << x << std::endl;
  return 0;
}
