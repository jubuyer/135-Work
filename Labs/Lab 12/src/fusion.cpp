#include <iostream>
#include <vector>

#include "fusion.h"

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
  int vegetaSize = vegeta.size();
  for(int i = 0; i < vegetaSize; i++) {
    goku.push_back (vegeta[i]);
  }
  vegeta.clear();

  return;
}
