#include <iostream>
#include <cmath>

#include "funcs.h"
#include "coord3d.h"
// add functions here

/*
@param *p - address of a Coord3D pointer

@returns the length of the vector
*/
double length(Coord3D *p) {
	double x_val = p->x;
	double y_val = p->y;
	double z_val = p->z;

	double distance = sqrt((x_val*x_val) + (y_val*y_val) + (z_val*z_val));

	return round(distance * 10000.000) / 10000.000; //explained by ellen
}

/*
@param *p1 - address of a Coord3D pointer
@param *p1 - address of a Coord3D pointer

@returns the pointer to the Coord3D object that is further from
the origin
*/
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
	Coord3D * ans = p1;
	if (length(p1) > length(p2)) {
		ans = p1;
	} else {
		ans = p2;
	}

	return ans;
}


/*
@param *ppos - Coord3D pointer of an objects position
@param *pvel - Coord3D pointer of an objects velocity
@param dt - elasped time

Updates the ppos pointer with the new position coordinates
*/
void move(Coord3D *ppos, Coord3D *pvel, double dt) {
	ppos->x = (ppos->x + (pvel->x * dt));
	ppos->y = (ppos->y + (pvel->y * dt));
	ppos->z = (ppos->z + (pvel->z * dt));

	return;
}

/*
@param x - X coordinate in Coord3D object
@param y - Y coordinate in Coord3D object
@param z - Z coordinate in Coord3D object

@returns a Coord3D pointer with dynamically allocated memory
*/
Coord3D* createCoord3D(double x, double y, double z) {
	Coord3D *create = new Coord3D;
	create->x = x;
	create->y = y;
	create->z = z;

	return create;
}

/*
@param p - pointer to a Coord3D object

Deletes dynamically allocated memory
*/
void deleteCoord3D(Coord3D *p) {
	delete p;
	return;
}


// int main(int argc, char const *argv[]) {
// 	// Coord3D pointP = {10, 20, 30};
//  	// Coord3D pointQ = {-20, 21, -22};
//  	// std::cout << "tests for length\n";
// 	// std::cout << "Coord P: " << length(&pointP) << '\n';
// 	// std::cout << "Coord Q: " << length(&pointQ) << '\n' << '\n';

//  	// std::cout << "tests for fartherFromOrigin\n";
// 	// std::cout << "Address of P: " << &pointP << std::endl;
//  	// std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

//  	// Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);

//  	// std::cout << "ans = " << ans << std::endl;

//  	// std::cout << "tests for move\n";
// 	// Coord3D pos = {0, 0, 100.0};
//  	// Coord3D vel = {1, -5, 0.2};

//  	// move(&pos, &vel, 2.0); // object pos gets changed
//  	// std::cout << pos.x << " " << pos.y << " " << pos.z << '\n';
//  	// // prints: 2 -10 100.4

//  	double x = 10;
//  	double y = 20;
//  	double z = 30;
//     std::cout << "Enter position: ";
//     std::cout << x << y << z << '\n';
//     Coord3D *ppos = createCoord3D(x,y,z);

//     std::cout << "Enter velocity: ";
//     x = 5.5;
//     y = -1.4;
//     z = 7.77;
//     std::cout << x << y << z << '\n';
//     Coord3D *pvel = createCoord3D(x,y,z);

//     move(ppos, pvel, 10.0);

//     std::cout << "Coordinates after 10 seconds: "
//          << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

//     deleteCoord3D(ppos); // release memory
//     deleteCoord3D(pvel);

// 	return 0;
// }
