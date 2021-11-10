//HI
/*
LAB QUIZ 5
JUBAYER AHMED
CSCI 135


RECTANGLE
*/

#include <iostream>

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 9; j++) {

      if((j % 2) != 0) {
        std::cout << " ";
      } else if (j % 2 == 0) {
        std::cout << "*";
      }
    }
    std::cout << '\n';
  }

  return 0;
}
