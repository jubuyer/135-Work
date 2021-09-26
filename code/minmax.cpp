/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Mike Zamansky
Lab 3B

The program finds the minimum and maximum storage in East basin in 2018.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

int main () {

  std::string date;
  double eastSt, eastEl, westSt, westEl, minStorage, maxStorage;
  int placeholder = 0;

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string junk;        // new string variable
  getline(fin, junk); // read one line from the file

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
      // this loop reads the file line-by-line
      // extracting 5 values on each iteration

    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                            //ignoring the remaining columns

    if (placeholder == 0) {
      minStorage = eastSt;
      maxStorage = eastSt;
      placeholder++;
    }

    if (eastSt < minStorage) {
      minStorage = eastSt;
    } else if (eastSt > maxStorage) {
      maxStorage = eastSt;
    }

  }



  fin.close();

  std::cout << "The minimum storage in East basin: " << minStorage;
  std::cout << " billion gallons" << std::endl;
  std::cout << "The maximum storage in East basin: " << maxStorage;
  std::cout << " billion gallons" << std::endl;

  return 0;
}
