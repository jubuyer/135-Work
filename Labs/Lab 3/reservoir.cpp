// add your code
/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 3A-3C

get_east_storage() will return the East Storage on the day of the date passed to
it in the parameter.

get_min_east() will return the lowest level of East storage in the year 2018

get_max_east() will return the highest level of East storage in the year 2018

compare_basins() will return the greater level of storage (East or West) on the
date passed in the parameter, returning Equal if the storages are equal.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

double get_east_storage(std::string date) {
  std::string input = date;
  std::string day;
  double eastSt, eastEl, westSt, westEl;

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string junk;   // arbitrary string variable
  getline(fin, junk); // read the first line from the file

  while(fin >> day >> eastSt >> eastEl >> westSt >> westEl) {
      // this loop reads the file line-by-line
      // extracting 5 values on each iteration

    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                            //ignoring the remaining columns

    if (input == day) {
      return eastSt;
      fin.close();
    }

  }


  return 0.0;
}

double get_min_east() {
  std::string day;
  double eastSt, eastEl, westSt, westEl;
  double minStorage;
  int placeholder = 0;

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string junk;        // new string variable
  getline(fin, junk); // read one line from the file

  while(fin >> day >> eastSt >> eastEl >> westSt >> westEl) {
      // this loop reads the file line-by-line
      // extracting 5 values on each iteration

    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                            //ignoring the remaining columns

    //places first instance of storage into the variable to compare
    //all other storages to to find minimum
    if (placeholder == 0) {
      minStorage = eastSt;
      placeholder++;
    }

    if (eastSt < minStorage) {
      minStorage = eastSt;
    }

  }

  fin.close();

  return minStorage;
}

double get_max_east() {
  std::string day;
  double eastSt, eastEl, westSt, westEl;
  double maxStorage;
  int placeholder = 0;

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string junk;        // new string variable
  getline(fin, junk); // read one line from the file

  while(fin >> day >> eastSt >> eastEl >> westSt >> westEl) {
      // this loop reads the file line-by-line
      // extracting 5 values on each iteration

    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                            //ignoring the remaining columns

    if (placeholder == 0) {
      maxStorage = eastSt;
      placeholder++;
    }

    if (eastSt > maxStorage) {
      maxStorage = eastSt;
    }

  }

  fin.close();

  return maxStorage;
}

std::string compare_basins(std::string date) {
  std::string day; //file-read date
  double eastSt, eastEl, westSt, westEl; //file-read information (elev/stor)

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string junk;   // new string variable
  getline(fin, junk); // read one line from the file

  while(fin >> day >> eastSt >> eastEl >> westSt >> westEl) {
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration
    //skips to the end of line, ignore the remaining columns
    fin.ignore(INT_MAX, '\n');

    if ((eastEl > westEl) && (date == day)) {
      return "East";
    } else if ((westEl > eastEl) && (date == day)) {
        return "West";
      } else if ((westEl == eastEl) && (date == day)) {
        return "Equal";
      }
    }

  return "";
}
