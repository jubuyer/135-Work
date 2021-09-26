/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Mike Zamansky
Lab 3C

Asks the user to input two dates (the beginning and the end of the interval).
Program checks each day in the interval and reports which basin had
higher elevation on that day by printing “East” or “West”, or printing
“Equal” if both basins are at the same level.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

int main () {

  std::string date; //file-read date
  std::string startDate, endDate; //for user input start and end interval
  double eastSt, eastEl, westSt, westEl; //file-read information (elev/stor)
  int temp = 0; //temp variable to start and end printing of dates

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string junk;   // new string variable
  getline(fin, junk); // read one line from the file

  //get dates of interval from user
  std::cout << "Enter starting date: ";
  std::cin >> startDate;

  std::cout << "Enter ending date: ";
  std::cin >> endDate;

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
      // this loop reads the file line-by-line
      // extracting 5 values on each iteration

    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                               //ignoring the remaining columns

    //allows dates from the start of the interval to start printing
    //the greater elevation via loops utilizing temp
    if (startDate == date) {
      temp = 1;
    }

    //allows loops to break when the program reads the end date
    if (endDate == date) {
      temp = 2;
    }

    //will print all dates in interval except the last date
    //prints the date and and which elevation is higher
    //uses temp to verify that it is printing within the interval of
    //start date and stops printing when program reads the end date
    if ((eastEl > westEl) && (temp == 1)) {
      std::cout << date << " " << "East" << std::endl;
    } else if ((westEl > eastEl) && (temp == 1)) {
      std::cout << date << " " << "West" << std::endl;
    }

    //prints the last date and higher elevation in the interval
    if ((eastEl > westEl) && (endDate == date)) {
      std::cout << date << " " << "East" << std::endl;
    } else if ((westEl > eastEl) && (endDate == date)) {
      std::cout << date << " " << "West" << std::endl;
    }
  }
  /*****************************************************************
                          TEST INTERVALS
  ******************************************************************
  Ex. starting date: 09/13/2018   |   Ex. starting date: 01/10/2018
  Ex. ending date: 09/17/2018     |   Ex. ending date: 01/14/2018
                                  |
  expected output:                |   expected output:
  09/13/2018 West                 |   01/10/2018 East
  09/14/2018 West                 |   01/11/2018 East
  09/15/2018 West                 |   01/12/2018 West
  09/16/2018 West                 |   01/13/2018 West
  09/17/2018 West                 |   01/14/2018 West
  *****************************************************************/

  fin.close();
  return 0;

}
