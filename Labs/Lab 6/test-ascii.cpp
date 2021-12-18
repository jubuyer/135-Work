#include <iostream>
#include <cctype>
#include <string>

std::string convert(std::string str) {
  std::string output;
  char c;
  for(int i = 0; i < str.length(); i++) {
    output += str[i];
    output += "\t";
    c = char(str[i]);
    output += std::to_string((int)str[i]);
    output += "\n";
    /*
    THIS METHOD WORKS ALSO
    std::cout << str[i];
    std::cout << "\t";
    c = str[i];
    std::cout << (int)str[i];
    std::cout << "\n";
    */
  }

  return output;
}

int main() {
  std::cout << "Test 1" << '\n';
  std::cout << convert("Hello") << '\n';
  std::cout << "Test 2" << '\n';
  std::cout << convert("Does it work?") << '\n';
  std::cout << "Test 3" << '\n';
  std::cout << convert("it sh0uld") << '\n';

  return 0;
}
