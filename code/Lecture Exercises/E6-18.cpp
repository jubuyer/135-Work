//E6.18
/*

Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Tong Yi

Assignment: E6.18

Appends vector b to a, and return a vector
*/
#include <iostream>
#include <vector>

std::vector<int> append(std::vector<int> a, std::vector<int> b) {
	std::vector<int> v = a;
	for(int i = 0; i < b.size(); i++) {
		v.push_back (b[i]);
	}

	return v;
}

int main(int argc, char const *argv[])
{
	std::vector<int> v = {1,2,3,4};
	std::vector<int> v2 = {5, 6, 7};
	std::vector<int> v3 = append(v,v2);
	for(int j = 0; j < v3.size(); j++) {
		std::cout << v3[j] << " ";
	}
	std::cout << std::endl;
	return 0;
}