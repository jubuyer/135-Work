#include <iostream>

#include "funcs.h"

int main()
{
  std::cout << "This is the main program.\n";
  std::cout << "To see tests please use the Makefile to run tests.cpp.\n";
  std::cout << "The categories of tests are: Basic, Short, and Plaintext\n";
  std::cout << "Ex. solve(\"Ocdn dn ojj ncjmo, ndm!\") == \"This is too "
  "short, sir!\"";
  solve("Ocdn dn ojj ncjmo, ndm!") == "This is too short, sir!" ?
    std::cout << " -> Success!\n" : std::cout << "-> Failure!\n";
  std::cout << "Input 'make help' to see a list of targets.\n";

  return 0;
}
