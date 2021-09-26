/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Mike Zamansky
Lab 3D

*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

int main () {

  std::string date; //file-read date
  std::string earlierDate, laterDate; //for user input start and end interval
  double eastSt, eastEl, westSt, westEl; //file-read information (elev/stor)
  int index = 0; //variable to allow data to be read into array
  int indexS, indexE; //variable to hold start/end interval index in array
  double elevW[365]; //array to hold all West elevetions
  std::string dates[365]; //array to hold all the dates

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }

  std::string junk;   // new string variable
  getline(fin, junk); // read one line from the file

  //get dates of interval from user
  std::cout << "Enter earlier date: ";
  std::cin >> earlierDate;

  std::cout << "Enter later date: ";
  std::cin >> laterDate;

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {
      // this loop reads the file line-by-line
      // extracting 5 values on each iteration

    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                               //ignoring the remaining columns

    elevW[index] = westEl;
    dates[index] = date;
    index++;
  }

  //first loop to find indeces of the date interval
  for(int x = 364; x >= 0; x--) {
    if(dates[x] == earlierDate) {
      indexS = x;
    }
    if(dates[x] == laterDate) {
      indexE = x;
    }
  }

  //TEST:::::check if index is going through <-- GOES THROUGH!!
  // std::cout << indexE << " " << dates[indexE] << std::endl;
  // std::cout << indexS << " " << dates[indexS] << std::endl;

  //second loop to actually print the interval (backwards)
  for(int y = indexE; y >= indexS; y--) {
    std::cout << dates[y] << " " << elevW[y] << " ft" << std::endl;
  }

  /*****************************************************************
                          TEST INTERVALS
  ******************************************************************
  Ex. earlier date: 05/29/2018
  Ex. later date: 06/02/2018

  expected output:
  06/02/2018  590.32 ft
  06/01/2018  590.26 ft
  05/31/2018  590.24 ft
  05/30/2018  590.23 ft
  05/29/2018  590.22 ft
  *****************************************************************/

  fin.close();
  return 0;

}
