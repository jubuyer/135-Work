//E8.1
/*

Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Tong Yi

Assignment: E8.1

Opens a file and inputs a line, closes it and reads out the line.

*/
#include <iostream>
#include <fstream>

int main() {
  std::string line;
  std::string example = "Hello, World!";

  std::fstream file;
  file.open("hello.txt");
  if(file.is_open()) {
    file << example;
    file.close();
  } else {
    std::cout << "Can't open";
  }

  file.open("hello.txt");
  if(file.is_open()) {
    while(std::getline(file, line)) {
      std::cout << line << "\n";
      file.close();
    }
  } else {
    std::cerr << "Unable to open file\n";
  }


  // std::ofstream out_file;
  // out_file.open("hello.txt");
  // if(out_file.is_open()) {
  //   out_file << "Hello, World!";
  //   out_file.close();
  // }
  //
  // std::ifstream in_file;
  // in_file.open("hello.txt");
  // if (in_file.is_open()) {
  //   std::string line;
  //   while (std::getline(in_file, line)) {
  //     std::cout << line << '\n';
  //   }
  //   in_file.close();
  // }
  // else {
  //   std::cerr << "Unable to open file\n";
  // }

  return 0;
}
