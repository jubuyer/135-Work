//E7.1
/*

Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Tong Yi

Assignment: E7.1

Receives two pointers and sorts the values to which they point.

*/
#include <iostream>

void sort2(double* p, double* q) {
  double temp_p = *p;

  if (*p > *q) {
    *p = *q;
    *q = temp_p;
  } else if ((*p < * q) || (*p == *q)) {
    return;
  }

  return;
}
//
// int main(int argc, char const *argv[]) {
//   double a = 4.12;
//   double b = 4.1;
//
//   double* x = &a;
//   double* y = &b;
//
//   sort2(x,y);
//   std::cout << *x << '\t' << *y << '\n';
//   return 0;
// }
