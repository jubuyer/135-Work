#include <iostream>
#include "caeser.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  std::cout << "This is the main program.\n";
  std::cout << "To see tests please use the Makefile to run tests.cpp.\n";
  std::cout << "Examples of tests include (encryptCaesar(\"Way to Go!\",5) == \"Bfd yt Lt!\") ";
  (encryptCaesar("Way to Go!",5) == "Bfd yt Lt!") ? std::cout << "-> Success!\n"  : std::cout << "-> Failed\n";
  std::cout << "Input 'make help' to see a list of targets.\n";

  return 0;
}
