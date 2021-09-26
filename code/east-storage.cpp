/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Mike Zamansky
Lab 3A

The program takes the user to input a string representing the date
(in MM/DD/YYYY format), and prints out the East basin storage on that day.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

int main () {

  std::string date, input;
  double eastSt, eastEl, westSt, westEl;

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string junk;        // new string variable
  getline(fin, junk); // read one line from the file

  std::cout << "Enter date: ";
  std::cin >> input;

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
      // this loop reads the file line-by-line
      // extracting 5 values on each iteration

    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                            //ignoring the remaining columns

    if (input == date) {
      std::cout << "East basin storage: " << eastSt << " billion gallons";
      std::cout << std::endl;
    }

  }

  fin.close();
  return 0;

}
