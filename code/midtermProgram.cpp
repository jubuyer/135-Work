#include <iostream>
#include <string>

int main() {
  int size;
  std::cout << "Enter a pos int: ";
  std::cin >> size;

  while ((size <= 0)) {
    std::cout << "Enter valid";
    std::cin >> size;
  }
  int space = size - 1;

  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {
      if (col < space) {
        std::cout << " ";
      } else if (col >= space) {
        std::cout << "*";
      }
    }
    space--;
    std::cout << '\n';
  }

  return 0;
}
