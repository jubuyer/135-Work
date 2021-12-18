#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"
#include "doctest.h"

TEST_CASE("TASK A TESTS") {
  SUBCASE("Regular") {
    std::vector<int> v1 = makeVector(5);
    std::vector<int> v2{0,1,2,3,4};
    std::vector<int> v3 = makeVector(10);
    std::vector<int> v4{0,1,2,3,4,5,6,7,8,9};

    int size1 = v1.size();
    for (int i = 0;i < size1;i++) {
      CHECK(v1[i]==v2[i]);
    }
    int size2 = v3.size();
    for (int j = 0; j < size2;j++) {
      CHECK(v3[j]==v4[j]);
    }
  }
  SUBCASE("Parameter Testing") {
    std::vector<int> v5 = makeVector(-10);
    std::vector<int> v6{0};
    std::vector<int> v7= makeVector(-10124123);
    std::vector<int> v8{0};

    int size3 = v5.size();
    for (int k = 0;k < size3;k++) {
      CHECK(v5[k]==v6[k]);
    }
    int size4 = v7.size();
    for (int l = 0; l < size4;l++) {
      CHECK(v7[l]==v8[l]);
    }
  }
}

TEST_CASE("TASK B TESTS") {
  std::vector<int> v9 {1,2,-1,3,4,-1,6};
  std::vector<int> v10 (goodVibes(v9)); // returns [1,2,3,4,6]
  int arr1[] = {1,2,3,4,6};
  std::vector<int> v11 {52,2,-1,3,-12312,0,1232,4,-1,6,4};
  std::vector<int> v12 (goodVibes(v11)); // returns [52,2,3,1232,4,6,4]
  int arr2[] = {52,2,3,1232,4,6,4};

  int size5 = v10.size();
  for (int m = 0;m < size5;m++) {
    CHECK(v10[m]==arr1[m]);
  }
  int size6 = v12.size();
  for (int n = 0; n < size6;n++) {
    CHECK(v12[n]==arr2[n]);
  }
}

TEST_CASE("TASK C TESTS") {
  std::vector<int> v13{1,2,3};
  std::vector<int> v14{4,5};
  int arr3[] = {1,2,3,4,5};
  gogeta(v13, v14); // v1 is now [1,2,3,4,5] and v2 is empty.
  std::vector<int> v15{1,53,62,124};
  std::vector<int> v16{0,123,62,-1};
  int arr4[] = {0,123,62,-1,1,53,62,124};
  gogeta(v16, v15);

  int size7 = v13.size();
  for (int n = 0; n < size7;n++) {
    CHECK(v13[n]==arr3[n]);
  }
  CHECK(v14.empty());
  int size8 = v16.size();
  for (int o = 0; o < size8;o++) {
    CHECK(v16[o]==arr4[o]);
  }
  CHECK(v15.empty());

}

TEST_CASE("TASK D TESTS") {
  std::vector<int> v17{1,2,3};
  std::vector<int> v18{4,5};
  std::vector<int> v19 = sumPairWise(v17, v18); // returns [5, 7, 3]
  int arr5[] = {5,7,3};

  int size9 = v19.size();
  for(int p = 0; p < size9; p++) {
    CHECK(v19[p]==arr5[p]);
  }

  std::vector<int> v20{-1,2,3,1293,-4,-6,12,-12};
  std::vector<int> v21{4,63,25,-1290};
  std::vector<int> v22 = sumPairWise(v20, v21);
  int arr6[] = {3,65,28,3,-4,-6,12,-12};

  int size10 = v22.size();
  for(int q = 0; q < size10; q++) {
    CHECK(v22[q]==arr6[q]);
  }

  std::vector<int> v23{-1,2,-4,-6,12,-12,2113};
  std::vector<int> v24{4,63,25,-1290,3,1293};
  std::vector<int> v25 = sumPairWise(v23, v24);
  int arr7[] = {3,65,21,-1296,15,1281,2113};

  int size11 = v25.size();
  for(int r = 0; r < size11; r++) {
    CHECK(v25[r]==arr7[r]);
  }
}
