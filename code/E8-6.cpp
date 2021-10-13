//E8.6
/*

Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Tong Yi

Assignment: E8.6

Program that checks whether two arrays have the same elements in the same order.

*/

bool equals(int a[], int a_size, int b[], int b_size) {
  if (a_size != b_size) {
    return false;
  }

  for (int i = 0; i < a_size; i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }

  return true;
}
