#include <iostream>

#include "recursion.h"

int main(int argc, char const *argv[]) {
  std::cout << "\x1B[35mtask a\033[0m" << '\n';
  std::cout << "range [-2,10]: " << printRange(-2, 10) << '\n';
  std::cout << "range [-3,7]: " << printRange(-3, 7) << '\n';
  std::cout << "range [12,10]: " << printRange(12, 10) << '\n';

  std::cout << "\x1B[35mtask b\033[0m" << '\n';
  std::cout << "range [-1,3]: " << sumRange(1, 3) << '\n';
  std::cout << "range [-2,10]: " << sumRange(-2, 10) << '\n';
  std::cout << "range [12,12]: " << printRange(12, 10) << '\n';

  std::cout << "\x1B[35mtask c\033[0m" << '\n';

  int size = 10;
  int *arr = new int[size]; // allocate array dynamically
  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  int sum1 = sumArray(arr, size); // Add all elements
  std::cout << "Sum is " << sum1 << '\n';  // Sum is 43

  int sum2 = sumArray(arr, 5); // Add up first five elements
  std::cout << "Sum is " << sum2 << '\n';  // Sum is 34

  delete[] arr;         // deallocate it

  std::cout << "\x1B[35mtask d\033[0m" << '\n';

  std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
  std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
  std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;  // false (0)
  std::cout << isAlphanumeric("a") << std::endl;  // false (1)

  std::cout << "\x1B[35mtask e\033[0m" << '\n';
  std::cout << nestedParens("((()))") << std::endl;      // true (1)
  std::cout << nestedParens("()") << std::endl;          // true (1)
  std::cout << nestedParens("") << std::endl;            // true (1)

  std::cout << nestedParens("(((") << std::endl;         // false (0)
  std::cout << nestedParens("(()") << std::endl;         // false (0)
  std::cout << nestedParens(")(") << std::endl;          // false (0)
  std::cout << nestedParens("a(b)c") << std::endl;       // false (0)
}
