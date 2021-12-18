#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "recursion.h"

TEST_CASE("TASK A TESTS") {
  CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ");
  CHECK(printRange(-3, 7) == "-3 -2 -1 0 1 2 3 4 5 6 7 ");
  CHECK(printRange(12, 10) == "");
  CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ");
}

TEST_CASE("TASK B TESTS") {
  CHECK(sumRange(1, 3) == 6);
  CHECK(sumRange(-2, 10) == 52);
  CHECK(sumRange(12, 12) == 12);
  CHECK(sumRange(12, 1) == 0);
  CHECK(sumRange(-30, 13) == -374);
}

TEST_CASE("TASK C TESTS") {
  int size = 10;
  int *arr = new int[size]; // allocate array dynamically
  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  CHECK(sumArray(arr, size) == 43);
  CHECK(sumArray(arr, 5) == 34);
  CHECK(sumArray(arr, 7) == 46);
  CHECK(sumArray(arr, 2) == 29);

  delete[] arr;
}

TEST_CASE("TASK D TESTS") {
  CHECK(isAlphanumeric("ABCD") == true);
  CHECK(isAlphanumeric("Abcd1234xyz") == true);
  CHECK(isAlphanumeric("KLMN 8-7-6") == false);
  CHECK(isAlphanumeric(" ") == false);
  CHECK(isAlphanumeric("*@!(#&!") == false);
}

TEST_CASE("TASK E TESTS") {
  CHECK(nestedParens("((()))") == true);
  CHECK(nestedParens("()") == true);
  CHECK(nestedParens("") == true);
  CHECK(nestedParens("(((") == false);
  CHECK(nestedParens("(()") == false);
  CHECK(nestedParens(")(") == false);
  CHECK(nestedParens("a(b)c") == false);
}
