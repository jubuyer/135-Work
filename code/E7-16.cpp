//This is my answer
#include <iostream>
#include <cmath>

using namespace std;

//HW E7.16
class Point {
public:
	double x;
	double y;
};

double distance(Point a, Point b) {
	return sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
}

int main(int argc, char const *argv[])
{
	double c,d,e,f;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	Point a = {c, d};
	Point b = {e, f};

	cout << distance(a,b);


	return 0;
}