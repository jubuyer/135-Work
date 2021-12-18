#include <iostream>
#include "funcs.h"

// add functions here
//Task A
bool isDivisibleby(int n, int d) {
	// std::string error = "Please enter a number that is not 0. ";
	bool divisble;
	if (d == 0) {
		// cout << error;
		return false;
	}
	(((n % d) == 0) ? divisble = true: divisble = false);

	return divisble;
}

//Task B
bool isPrime(int n) {
	//std::string error = "Please enter a number greater than 1. ";
	int divisble = 0;
	bool prime;
	int tester = n;
	//Checks if input will ruin code
	if (n < 1) {
	 	//cout << error;
	 	return false;
 	} else if (n == 1) {
		return false;
	}

	//Tests if n is divisble by any number all the way to 1
	while (tester > 1) {
		if (isDivisibleby(n, tester-1)) {
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

	while(!isPrime(n+temp)) {
		temp++;
	}

	next = n + temp;

	return next;
}

//Task D
int countPrimes(int a, int b) {
	int previous = a;
	int primes = 0;

	while (previous <= b) {
		if (isPrime(previous))
			primes++;
		previous++;
	}

	return primes;
}

//Task E
bool isTwinPrime(int n) {
	if (n <= 2) {
		return false;
	} else if (!isPrime(n)) {
		return false;
	} else if (isPrime(n-2) || isPrime(n + 2)) {
		return true;
	} else {
		return false;
		}
}

//Task F
int nextTwinPrime(int n) {
	int temp = 1;

	while (!isTwinPrime(n + temp)) {
		temp++;
	}

	int next = n + temp;

	return next;
}

//Task G
int largestTwinPrime (int a, int b) {
	int largest = -1;
	for (int i = a; i <= b; i++) {
		if (isTwinPrime(i)) {
			if (i > largest) {
				largest = i;
			}
		}
	}

	return largest;
}