#include <iostream>
#include<cstdio>
#include <string>

using std::cout;

//TASK A
bool isDivisbleby(int n, int d) {
	std::string error = "Please enter a number that is not 0. ";
	bool divisble;
	if (d == 0) {
		cout << error;
		return false;
	}
	(((n % d) == 0) ? divisble = true: divisble = false);

	return divisble;
}

bool isPrime(int n) {
	std::string error = "Please enter a number greater than 1. ";
	int divisble = 0;
	bool prime;
	int tester = n;
	if (n <= 1) {
	 	cout << error;
	 	return false;
 	}

	while (tester > 1) {
		if (isDivisbleby(n, tester-1)) {
			divisble++;
		}
		tester--;
	}

	((divisble > 1) ? prime = false : prime = true);

	return prime;
}

int main () {
	cout << "-----------TESTS FOR TASK A-----------\n";
	cout << "Test with 4 and 2: ";
	(isDivisbleby(4,2) ? cout << "Divisble\n" : cout << "Not divisible\n");
	cout << "Test with 4 and 0: ";
	(isDivisbleby(4,0) ? cout << "Divisble\n" : cout << "Not divisible\n");
	cout << "Test with 4 and 1: ";
	(isDivisbleby(4,1) ? cout << "Divisble\n" : cout << "Not divisible\n");

	cout << "-----------TESTS FOR TASK B-----------\n";
	cout << "Test with 2: ";
	(isPrime(2) ? cout << "Prime\n" : cout << "Not Prime\n");
	cout << "Test with 4: ";
	(isPrime(4) ? cout << "Prime\n" : cout << "Not Prime\n");
	cout << "Test with 2: ";
	(isPrime(7) ? cout << "Prime\n" : cout << "Not Prime\n");
	cout << "Test with 1: ";
	(isPrime(1) ? cout << "Prime\n" : cout << "Not Prime\n");

	return 0;
}
