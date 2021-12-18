#include <iostream>


#include "funcs.h"

int main()
{
  std::cout << "This is the main program.\n";
  std::cout << "To see tests please use the Makefile to run tests.cpp.\n";
  std::cout << "Examples of tests include (isDivisbleby(4,2) == true) "; 
  (isDivisibleby(4,2)) ? std::cout << "-> Success!\n"  : std::cout << "-> Failed\n";
  std::cout << "Input 'make help' to see a list of targets.\n";
  return 0;
}
