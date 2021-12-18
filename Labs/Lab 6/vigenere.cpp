#include <iostream>
#include <string>
#include <cctype>
#include "vigenere.h"

char shiftChar(char c, char key) {
  char output = c;
  int temp = (int)key;
  int shift;
  if(islower(key)) {
    shift = temp - 97;
  }
  if (isupper(key)) {
    shift = temp - 65;
  }

  if (isalpha(c)) {
    if (isupper(c)) { //Range of A-Z is 65(A) to 90(Z)
      if ((c+shift) > 90) { //if out of bounds
        output = 'A' + (c+shift-91);
      } else {
        output = c + shift;
      }
    } else if (islower(c)) { //Range of a-z is 97(a) to 122(z)
      if ((c + shift) > 122) { //if out of bounds
        output = 'a' + (c+shift - 123);
      } else {
        output = c + shift;
      }
    }
  }
  return output;
}

std::string encryptVigenere(std::string plaintext, std::string keyword) {
  int key = 0;
  int max = keyword.length();
  for (int i = 0; i < plaintext.length(); i++) {
    if(isalpha(plaintext[i])) {
      plaintext[i] = shiftChar(plaintext[i], keyword[key]);
      key++;
    }
    if(key == max) {
      key = 0;
    }
  }
  return plaintext;
}
