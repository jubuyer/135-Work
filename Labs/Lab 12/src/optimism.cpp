#include <iostream>
#include <vector>

#include "optimism.h"

std::vector<int> goodVibes(const std::vector<int>&v) {
  std::vector<int> vect;
  int vectSize = v.size();
  for(int i = 0; i < vectSize; i++) {
    if(v[i] > 0) {
      vect.push_back (v[i]);
    }
  }

  return vect;
}
