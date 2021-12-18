#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
//Task A
TEST_CASE("isDivisibleby Tests") {
	SUBCASE("Base") {
		CHECK(isDivisibleby(2,1) == true);
		CHECK(isDivisibleby(1,2) == false);
		CHECK(isDivisibleby(1,0) == false);
	}
	SUBCASE("Extreme") {
		CHECK(isDivisibleby(21243243,123) == false);
		CHECK(isDivisibleby(-1,2) == false);
	}
}

//Task B
TEST_CASE("isPrime Tests") {
	SUBCASE("Base") {
		CHECK(isPrime(0) == false);
		CHECK(isPrime(1) == false);
		CHECK(isPrime(3) == true);
	}
	SUBCASE("Extreme") {
		CHECK(isPrime(-3) == false);
		CHECK(isPrime(3083) == true);
	}
}

//Task C
TEST_CASE("nextPrime Tests") {
	SUBCASE("Base") {
		CHECK(nextPrime(0) == 2);
		CHECK(nextPrime(1) == 2);
		CHECK(nextPrime(3) == 5);
	}
	SUBCASE("Extreme") {
		CHECK(nextPrime(-3) == 2);
		CHECK(nextPrime(3083) == 3089);
	}
}

//Task D
TEST_CASE("countPrimes Tests") {
	SUBCASE("Base") {
		CHECK(countPrimes(0,5) == 3);
		CHECK(countPrimes(1,4) == 2);
		CHECK(countPrimes(20,45) == 6);
	}
	SUBCASE("Extreme") {
		CHECK(countPrimes(5,0) == 0);
		CHECK(countPrimes(1000,2000) == 135);
	}
}

//Task E
TEST_CASE("isTwinPrime Tests") {
	SUBCASE("Base") {
		CHECK(isTwinPrime(1) == false);
		CHECK(isTwinPrime(5) == true);
		CHECK(isTwinPrime(15) == false);
	}
	SUBCASE("Extreme") {
		CHECK(isTwinPrime(-3) == false);
		CHECK(isTwinPrime(4127) == true);
	}
}

//Task F
TEST_CASE("nextTwinPrime Tests") {
	SUBCASE("Base") {
		CHECK(nextTwinPrime(3) == 5);
		CHECK(nextTwinPrime(0) == 3);
		CHECK(nextTwinPrime(20) == 29);
	}
	SUBCASE("Extreme") {
		CHECK(nextTwinPrime(-3) == 3);
		CHECK(nextTwinPrime(20983) == 21011);
	}
}

//Task G
TEST_CASE("largestTwinPrime Tests") {
	SUBCASE("Base") {
		CHECK(largestTwinPrime(0,18) == 17);
		CHECK(largestTwinPrime(1,31) == 31);
		CHECK(largestTwinPrime(14,16) == -1);
	}
	SUBCASE("Extreme") {
		CHECK(largestTwinPrime(1000,2000) == 1999);
		CHECK(largestTwinPrime(-1,-21) == -1);
	}
}
