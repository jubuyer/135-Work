//E6.20
/*

Author: Jubayer Ahmed

Course: CSCI-135

Instructor: Tong Yi

Assignment: E6.20

Sorts two merged vectors (that were pre-sorted)
*/
#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> append(std::vector<int> a, std::vector<int> b) {
	std::vector<int> v = a;
	for(int i = 0; i < b.size(); i++) {
		v.push_back (b[i]);
	}

	return v;
}

std::vector<int> merge_sorted(std::vector<int> a, std::vector<int> b) {
	int indexA = 0;
	int indexB = 0;
	std::vector<int> v;
	bool sorted = false;

	v = append(a,b);
	std::sort (v.begin(), v.end());
	// while(!sorted) {
	// 	if((a[indexA] < b[indexB]) && (indexA < a.size())) {
	// 		v.push_back(a[indexA]);
	// 		indexA++;
	// 		std::cout << "append a\n";
	// 	} else {
	// 		v.push_back(b[indexB]);
	// 		if (indexB < b.size())
	// 			indexB++;
	// 		std::cout << "append b\n";
	// 	}

	// 	if(v.size() == (a.size() + b.size())) {
	// 		if(a[a.size()-1] > b[b.size()-1]) {
	// 			v[v.size()-1] = a[a.size()-1];
	// 			std::cout << "APPEND a\n";
	// 		} else {
	// 			v[v.size()-1] = b[b.size()-1];
	// 			std::cout << "APPEND b\n";
	// 		}
	// 		sorted = true;
	// 	}
	// }

	return v;
}

int main(int argc, char const *argv[])
{
	std::vector<int> v = {1,4,9,16};
	std::vector<int> v2 = {4,7,9,9,11};
	std::vector<int> v3 = merge_sorted(v,v2);
	for(int j = 0; j < v3.size(); j++) {
		std::cout << v3[j] << " ";
	}
	std::cout << std::endl;
	return 0;
}