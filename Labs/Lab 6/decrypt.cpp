#include <iostream>
#include <string>
#include <cctype>
#include "decrypt.h"

std::string decryptCaesar(std::string ciphertext, int rshift) {
  for (int i = 0; i < ciphertext.length(); i++) {
    ciphertext[i] = decryptCaesarChar(ciphertext[i], rshift);
  }
  return ciphertext;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
  int key = 0;
  int max = keyword.length();
  for (int i = 0; i < ciphertext.length(); i++) {
    if(isalpha(ciphertext[i])) {
      ciphertext[i] = decryptVigenereChar(ciphertext[i], keyword[key]);
      key++;
    }
    if(key == max) {
      key = 0;
    }
  }
  return ciphertext;
}

char decryptCaesarChar(char c, int rshift) {
  char output = c;
  if (!isalpha(c)) { //return the same character if it is not a letter
    return output;
  }
  if (isalpha(c)) {
    if (isupper(c)) { //Range of A-Z is 65(A) to 90(Z)
      if ((c - rshift) < 65) { //if out of bounds
        output = 'A' + (c - rshift - 65 + 26); //Reroute Alphabet
      } else {
        output = c - rshift;
      }
    } else if (islower(c)) { //Range of a-z is 97(a) to 122(z)
      if ((c - rshift) < 97) { //if out of bounds
        output = 'a' + (c - rshift - 97 + 26); //Reroute Alphabet (Add 26)
      } else {
        output = c - rshift;
      }
    }
  }
  return output;
}

char decryptVigenereChar(char c, char key) {
  char output = c;
  if (!isalpha(c)) { //return the same character if it is not a letter
    return output;
  }
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
      if ((c - shift) < 65) { //if out of bounds
        output = 'A' + (c- shift - 65 + 26);
      } else {
        output = c - shift;
      }
    } else if (islower(c)) { //Range of a-z is 97(a) to 122(z)
      if ((c - shift) < 97) { //if out of bounds
        output = 'a' + (c - shift - 97 + 26);
      } else {
        output = c - shift;
      }
    }
  }
  return output;
}
