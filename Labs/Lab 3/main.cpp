// add your code as appropriate
/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 3

Tests the functions created in reservoir.cpp and reverseorder.cpp
*/

#include <iostream>

#include "reservoir.h"
#include "reverseorder.h"

int main()
{
  //Task A
  std::cout << "______TASK A (EAST STORAGE) TEST______" << "\n";
  //expect 80.96 billion gallons
  std::cout << "Test 1: 05/20/2018" << "\n";
  std::cout << get_east_storage("05/20/2018") << " billion gallons" << "\n";
  //expect 59.89 billion gallons
  std::cout << "Test 2: 01/03/2018" << "\n";
  std::cout << get_east_storage("01/03/2018") << " billion gallons" << "\n";

  //Task B
  std::cout << "\n" << "______TASK B (MIN/MAX STORAGE) TEST______" << "\n";
  //expect 59.88 billion gallons
  std::cout << "Minimum storage in East basin: " << get_min_east();
  std::cout << " billion gallons" << "\n";
  //expect 81.07 billion gallons
  std::cout << "Maximum storage in East basin: " << get_max_east();
  std::cout << " billion gallons" << "\n";

  //Task C
  std::cout << "\n" << "______TASK C (COMPARE STORAGE) TEST______" << "\n";
  //expect West
  std::cout << "09/13/2018 " << compare_basins("09/13/2018") << "\n";
  //expect West
  std::cout << "01/12/2018 " << compare_basins("01/12/2018") << "\n";
  //expect East
  std::cout << "01/10/2018 " << compare_basins("01/10/2018") << "\n";

  //Task D
  std::cout << "\n" << "______TASK D (REVERSE ORDER) TEST______" << "\n";
  std::cout << "Test Interval: 05/29/2018 to 06/02/2018" << "\n";
  reverse_order("05/29/2018", "06/02/2018");
  std::cout << "Test Interval: 08/15/2018 to 08/25/2018" << "\n";
  reverse_order("08/15/2018", "08/25/2018");

  return 0;
}
