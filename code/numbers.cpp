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

//Task B
bool isPrime(int n) {
	std::string error = "Please enter a number greater than 1. ";
	int divisble = 0;
	bool prime;
	int tester = n;
	//Checks if input will ruin code
	if (n < 1) {
	 	cout << error;
	 	return false;
 	} else if (n == 1) {
		return false;
	}

	//Tests if n is divisble by any number all the way to 1
	while (tester > 1) {
		if (isDivisbleby(n, tester-1)) {
			divisble++;
		}
		tester--;
	}

	((divisble > 1) ? prime = false : prime = true);

	return prime;
}

//Task C
int nextPrime(int n) {
	int temp = 1;
	int next = 0;

	while(true) {
		if (isPrime(n + temp)) {
			next = n + temp;
			return next;
		} else {
			temp++;
		}
	}

	return next;
}

int main () {
	// cout << "-----------TESTS FOR TASK A-----------\n";
	// cout << "Test with 4 and 2: ";
	// (isDivisbleby(4,2) ? cout << "Divisble\n" : cout << "Not divisible\n");
	// cout << "Test with 4 and 0: ";
	// (isDivisbleby(4,0) ? cout << "Divisble\n" : cout << "Not divisible\n");
	// cout << "Test with 4 and 1: ";
	// (isDivisbleby(4,1) ? cout << "Divisble\n" : cout << "Not divisible\n");
	//
	// cout << "-----------TESTS FOR TASK B-----------\n";
	// cout << "Test with 1: ";
	// (isPrime(1) ? cout << "Prime\n" : cout << "Not Prime\n");
	// cout << "Test with 14: ";
	// (isPrime(14) ? cout << "Prime\n" : cout << "Not Prime\n");
	// cout << "Test with 21: ";
	// (isPrime(21) ? cout << "Prime\n" : cout << "Not Prime\n");
	// cout << "Test with 41: ";
	// (isPrime(41) ? cout << "Prime\n" : cout << "Not Prime\n");

	cout << "-----------TESTS FOR TASK C-----------\n";
	cout << "\nTest with 2: ";
	cout << "\nThe prime after 2 is " << nextPrime(2);
	cout << "\nTest with 19: ";
	cout << "\nThe prime after 19 is " << nextPrime(19);
	cout << "\nTest with 20: ";
	cout << "\nThe prime after 20 is " << nextPrime(20);
	cout << "\nTest with 41: ";
	cout << "\nThe prime after 41 is " << nextPrime(41) << "\n";
	return 0;
}
