#include <iostream>
#include <vector>

#include "pairwise.h"

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
  std::vector<int> vect1 (v1);
  std::vector<int> vect2 (v2);
  std::vector<int> output;
  int size1 = vect1.size();
  int size2 = vect2.size();

  if(size1 > size2) {
    for(int i = 0; i < size2; i++) {
      output.push_back(vect2[i]+vect1[i]);
    }
    for(int j = size2; j < size1; j++) {
      output.push_back(vect1[j]);
    }
  } else if(size2 > size1) {
      for(int k = 0; k < size1; k++) {
        output.push_back(vect2[k]+vect1[k]);
      }
      for(int l = size1; l < size2; l++) {
        output.push_back(vect2[l]);
      }
    }


  // for(int k = 0; k < size1; k++) {
  //   output.push_back(vect1[k]+vect2[k]);
  // }

  return output;
}
