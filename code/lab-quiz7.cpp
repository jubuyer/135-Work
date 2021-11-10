//HI
/*
LAB QUIZ 7
JUBAYER AHMED
CSCI 135


REMOVE LETTER
*/

#include <iostream>

using namespace std;

void remove_e(string& sentence) {
  int len = sentence.length();
  std::string final = "";
  for (int i = 0; i < len; i++) {
    if (sentence[i] != 'e') {
      final += sentence[i];
    }
  }
  sentence = final;

  return;
}

//TESTING
// int main(int argc, char const *argv[]) {
//   std::string str = "eyeeheaw";
//   remove_e(str);
//   std::cout << str << '\n';
//   return 0;
// }
