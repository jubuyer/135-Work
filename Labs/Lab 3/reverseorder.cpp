/*
Author: Jubayer Ahmed
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 3D

The function reverse_order will take 2 dates in its parameter and return the
dates and West basin elevation in reversed order.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

void reverse_order(std::string date1, std::string date2) {
  std::string day; //file-read date
  double eastSt, eastEl, westSt, westEl; //file-read information (elev/stor)
  int index = 0; //variable to allow data to be read into array
  int indexS, indexE; //variable to hold start/end interval index in array
  double elevW[365]; //array to hold all West elevations
  std::string dates[365]; //array to hold all the dates

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

    elevW[index] = westEl;
    dates[index] = day;
    index++;
  }

  //first loop to find indeces of the date interval
  for(int x = 364; x >= 0; x--) {
    if (dates[x] == date1) {
      indexS = x;
    }
    if (dates[x] == date2) {
      indexE = x;
    }
  }

  //second loop to actually print the interval (backwards)
  for(int y = indexE; y >= indexS; y--) {
    std::cout << dates[y] << " " << elevW[y] << " ft" << std::endl;
  }

  fin.close();
  return;

}
