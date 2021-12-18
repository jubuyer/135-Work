#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
#include "funcs.h"

// add functions here
std::string solve(std::string encrypted_string) {
  // int key; //correct rotation to dencrypt
  std::string rotation = "";
  std::string output = "";
  std::vector<double> currentFreq(26); //vector to hokd frequency of each rotation
  double closest = 0.0;

  //CONSTANT array to hold frequency of letters in English language based off
  //http://cs.wellesley.edu/~fturbak/codman/letterfreq.html
  const double ENGLISH_FREQ[26] = {.084966, .020720, .045388, .033844, .111607,
  .018121, .024705, .030034, .075448, .001964, .011016, .054893, .030129,
  .066544, .071635, .031671, .001962, .075809, .057351, .069509, .036308,
  .010074, .012899, .002902, .017779, .002722};

  //for all rotations, find the one closes to ENGLISH_FREQ
  for(int i = 0; i < 26; i++) {
    rotation = decryptCaesar(encrypted_string, i);
    currentFreq = calcFreq(rotation);
    double distance = 0;

    //find the distance between the rotation and ENGLISH_FREQ
    for (int j = 0; j < 26; j++) {
      distance += pow((currentFreq[j] - ENGLISH_FREQ[j]), 2);
    }

    if (closest == 0.0) {
      closest = distance;
      output = rotation;
    }

    //if new lower distance found store the information
    if (distance < closest) {
      closest = distance;
      // key = i;
      output = rotation;
    }
    // std::cout << "closest: " << closest << '\n';
    // std::cout << "key: " << key << '\n';
  }

  return output;
}

std::vector<double> calcFreq(std::string ciphertext) {
  std::vector<double> freq (26, 0.0);
  int len = ciphertext.length();

  //get number of each letter in the string
  for(int i = 0; i < len; i++) {
    if (isalpha(ciphertext[i])) { //Explained by Eric Li
      int index = 0;

      if (isupper(ciphertext[i])) {
        //if uppercase/lowercase, make the index correspond to index of the letter
        index = int(ciphertext[i]) - 65; //int('A') is 65
      } else {
        index = int(ciphertext[i]) - 97; //int('a') is 97
      }

      freq[index] += 1;
    }
  }

  //get the frequency by dividing by length of string
  for(int i = 0; i < 26; i++) {
    freq[i] /= len;
    // std::cout << freq[i] << '\n';
  }

  return freq;
}

std::string decryptCaesar(std::string ciphertext, int rshift) {
  int cipher_len = ciphertext.length();
  for (int i = 0; i < cipher_len; i++) {
    ciphertext[i] = decryptCaesarChar(ciphertext[i], rshift);
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

/*
int main(int argc, char const *argv[]) {

  // test
  // If he had anything confidential to say, he wrote it in cipher, that is, by so
  // changing the order of the letters of the alphabet, that not a word could be
  // made out.
  std::string test = "Pm ol ohk hufaopun jvumpkluaphs av zhf, ol dyval pa pu "
  "jpwoly, aoha pz, if zv johunpun aol vykly vm aol slaalyz vm aol hswohila, "
  "aoha uva h dvyk jvbsk il thkl vba.";

  // test 2
  // I'm not sure if this works so im going to write 3alot with mistakes and
  // see if theres any issues 921 because i couldnt' figue out the issue
  std::string test2 = "P't uva zbyl pm aopz dvyrz zv pt nvpun av dypal 3hsva "
  "dpao tpzahrlz huk zll pm aolylz huf pzzblz 921 iljhbzl p jvbskua' mpnbl "
  " vba aol pzzbl";

  std::string test3 = "This is to test whether or not my program can handle "
  "being given normal text and simply returning this text again";

  std::cout << solve(test3) << '\n';

  return 0;
}
*/
