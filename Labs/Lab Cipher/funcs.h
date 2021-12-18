#pragma once
#include <vector>

// add prototypes here
std::string decryptCaesar(std::string ciphertext, int rshift);

char decryptCaesarChar(char c, int rshift);

std::vector<double> calcFreq(std::string ciphertext);

std::string solve(std::string encrypted_string);
