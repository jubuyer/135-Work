#include <iostream>
using namespace std;

int main () 
{
	int a, b;
	int result;
	int i;

	a = 5;
	b = 2;
	a = a + 1;
	result = a - b;

	cout << "Please enter an integer: ";
	cin >> i;

	result = 2 * i;

	cout << "Twice the value of " << i << " is: " << result;
	cout << "\n";

	return 0;
}