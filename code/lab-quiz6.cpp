//HI
/*
LAB QUIZ 6
JUBAYER AHMED
CSCI 135


returns the maximum of a, b, and c.
*/
#include <iostream>

int max3(int a, int b, int c) {
  if ((a > b) && (a > c)) {
    return a;
  } else if ((b > a) && (b > c)) {
    return b;
  } else {
    return c;
  }

  return a;
}

//TESTING
// int main(int argc, char const *argv[]) {
//   std::cout << max3(3,5,3) << '\n';
//   return 0;
// }
