#include <iostream>
#include <string>

using std::cout;

bool isDivisbleby(int n, int d) {
	bool divisble;
	(((n % d) == 0) ? divisble = true: divisble = false);

	return divisble;
}

int main () {
	cout << "Test with 4 and 2:\n";
	(isDivisbleby(4,2) ? cout << "True" << "\n" : cout << "True" << "\n");
	return 0;
}