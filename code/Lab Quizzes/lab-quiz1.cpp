//My name is Jubayer.
#include <iostream>
#include <string>
using namespace std; 

int main () {
	string str = "I love C++";
 	int line;
 
 	cout << "How many lines do you want?";
	cin >> line; 

	while (line > 0) {
		cout << str << endl;
 		line--;
 	}

 	return 0;
}