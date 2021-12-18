#include <iostream>
#include <string>
#include <cctype>
#include "caeser.h"

// add functions here
char shiftChar(char c, int rshift) {
  char output = c;
  if (!isalpha(c)) { //return the same character if it is not a letter
    return output;
  }
  if (isalpha(c)) {
    if (isupper(c)) { //Range of A-Z is 65(A) to 90(Z)
      if ((c+rshift) > 90) { //if out of bounds
        output = 'A' + (c+rshift-91);
      } else {
        output = c + rshift;
      }
    } else if (islower(c)) { //Range of a-z is 97(a) to 122(z)
      if ((c + rshift) > 122) { //if out of bounds
        output = 'a' + (c+rshift - 123);
      } else {
        output = c + rshift;
      }
    }
  }
  return output;
}

std::string encryptCaesar(std::string plaintext, int rshift) {
  for (int i = 0; i < plaintext.length(); i++) {
    plaintext[i] = shiftChar(plaintext[i], rshift);
  }
  return plaintext;
}
