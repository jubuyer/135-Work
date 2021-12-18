#include <iostream>
#include <vector>

#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"

int main(int argc, char const *argv[]) {
  //Task A
  std::cout << "\x1B[31mTest for makeVector [TASK A]\n\033[0m";
  std::vector<int> vect1 = makeVector(5);
  std::vector<int> vect2 = makeVector(-5);

  std::cout << "First Vector:" << '\n';
  int sized1 = vect1.size();
  for(int i = 0; i < sized1; i++) {
    std::cout << vect1[i] << '\t';
  }
  std::cout << "\n";
  std::cout << "Example of makeVector with negative parameter:" << '\n';
  int sized2 = vect2.size();
  for(int j = 0; j < sized2; j++) {
    std::cout << vect2[j] << '\t';
  }
  //Task B
 	std::cout << "\n\x1B[31mTest for optimism [TASK B]\n\033[0m";
  std::vector<int> vect3 {1,2,-1,3,4,-1,6};
  std::vector<int> vect4 (goodVibes(vect3)); // returns [1,2,3,4,6]
  std::cout << "Calling goodVibes()" << '\n';
  int sized3 = vect4.size();
  for(int k = 0; k < sized3; k++) {
    std::cout << vect4[k] << '\t';
  }
  //Task C
 	std::cout << "\n\x1B[31mTests for fusion [TASK C]\n\033[0m";
  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};

  gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.

  std::cout << "Calling gogeta()" << '\n';
  int size1 = v1.size();
  for(int l = 0; l < size1; l++) {
    std::cout << v1[l] << '\t';
  }
  int size2 = v2.size();
  for(int m = 0; m < size2; m++) {
    std::cout << v2[m] << '\t';
  }

  //Task D
  std::cout << "\n\x1B[31mTests for pairwise [TASK D]\n\033[0m";
  std::vector<int> v3{1,2,3};
  std::vector<int> v4{4,5};

  std::vector<int> v5 = sumPairWise(v3, v4); // returns [5, 7, 3]

  std::cout << "Calling sumPairWise()" << '\n';
  int size5 = v5.size();
  for(int n = 0; n < size5; n++) {
    std::cout << v5[n] << '\t';
  }
  std::cout << '\n';
	return 0;
}
