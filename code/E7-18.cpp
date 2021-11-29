//This is my answer
#include <iostream>
#include <cmath>

using namespace std;

//HW E7.18
class Point {
public:
	double x;
	double y;
};

class Triangle {
public:
	Point a;
	Point b;
	Point c;
};

double distance(Point a, Point b) {
	return sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
}

double perimeter(Triangle tri) {
	return (distance(tri.a,tri.b)+distance(tri.b,tri.c)+distance(tri.a,tri.c));
}

int main(int argc, char const *argv[])
{
	double c,d,e,f,g,h;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cin >> g;
	cin >> h;

	Point a = {c, d};
	Point b = {e, f};
	Point x = {g,h};

	Triangle trig = {a,b,x};
	cout << perimeter(trig);


	return 0;
}