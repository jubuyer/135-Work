//HI
/*
LAB QUIZ 4
JUBAYER AHMED
CSCI 135


 Open and read a file called "data.txt", which contains lines of text with names
 of colors and their RGB values, like this: red FF0000 etc... Read and print
 each line. Close the file after processing it.
*/

#include <fstream>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::string line;

  std::ifstream file;
  file.open("data.txt");

  if(file.is_open()) {
    while(std::getline(file, line)) {
      std::cout << line << "\n";
    }
  } else {
    std::cerr << "Unable to open file\n";
  }

  file.close();

  return 0;
}
