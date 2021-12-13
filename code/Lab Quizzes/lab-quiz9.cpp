//HI
/*
LAB QUIZ 9
JUBAYER AHMED
CSCI 135


BRACKETS
*/

#include <iostream>

using namespace std;

int unbalanced_brackets(string input) {
  int open = 0;
  int closed = 0;

  for(int i = 0; i < input.length(); i++) {
    if(input[i] == '{') {
      open++;
    } else if (input[i] == '}') {
      closed++;
    }
  }

  return (open - closed);
}
