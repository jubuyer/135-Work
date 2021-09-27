#include <iostream>
#include <string>

std::string middle (std::string str) {
	std::string output = "";
	bool even = false;
	bool odd = false;
	int len = str.length();

	(((len % 2) == 0) ? (even = true) : (odd = true));

	if (odd) {
		output += str.substr((len / 2), 1);
	} else if (even) {
		output += str.substr(((len/2) - 1), 2);
	}

	return output;
}

int main () {
	std::cout << "\ntest even:\n";
	std::cout << middle("follow");
	std::cout << "\ntest odd:\n";
	std::cout << middle("jubayer") << "\n";
	return 0;
}