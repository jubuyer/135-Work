#include <iostream>
#include <vector>

#include "vectors.h"

std::vector<int> makeVector(int n) {
  std::vector<int> vec;

  if (n < 0) {
    n = 1;
  }

  for(int i = 0; i < n; i++) {
    vec.push_back (i);
  }

  return vec;
}
