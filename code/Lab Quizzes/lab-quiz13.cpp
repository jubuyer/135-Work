//HI
/*
LAB QUIZ 13
JUBAYER AHMED
CSCI 135


VECTOR
*/
#include <iostream>
#include <vector>

using namespace std;

std::vector<int> makeVector(int n) {
	std::vector<int> v;
	if (n > 0) {
		for(int i = 0; i < n; i++) {
			v.push_back(i);
		}
	}

	return v;
}