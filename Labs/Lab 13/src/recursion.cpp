#include <iostream>
#include <string>
#include <cctype>

#include "recursion.h"

std::string printRange(int left, int right) {
  if(left <= right) {
    return std::to_string(left) + " " + printRange(left+1, right);
  } else if (left > right) {
    return "";
  }
  return "";
}

int sumRange(int left, int right) {
  if (left > right) {
    return 0;
  } else if(left <= right) {
    return left + sumRange(left+1, right);
  }

  return 0;
}

int sumArray(int *arr, int size) {
  if(size > 0) {
    return arr[size-1] + sumArray(arr, size-1);
  }
  return 0;
}

bool isAlphanumeric(std::string s) {
  if(s == "") {
    return true;
  } else if (isalnum(s[0])) {
    return isAlphanumeric(s.substr(1,s.length()));
  } else {
    return false;
  }

  return false;
}

bool nestedParens(std::string s) {
  if(s == "") {
    return true;
  } else if ((s[0] == '(') && (s[(s.length())] == ')')) {
    return nestedParens(s.substr(1,s.length()-1));
  } else if (((s.length() % 2) == 1) || isalpha(s[0]) || (s[0] == ')')) {
    return false;
  }

  return true;
}
