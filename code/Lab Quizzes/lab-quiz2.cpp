#include <iostream> 

int main () {
	int x, y;

	std::cout << "Enter integer x: ";
	std::cin >>  x;

	std::cout << "Enter integer y: ";
	std::cin >> y;

	(x > y ? std::cout << x << "\n" : std::cout << y << "\n");
}