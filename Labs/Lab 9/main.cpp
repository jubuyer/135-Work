#include <iostream>
#include <cmath>

#include "coord3d.h"
#include "funcs.h"

int main(int argc, char const *argv[])
{
  //Task A
	Coord3D pointP = {10, 20, 30};
 	Coord3D pointQ = {-20, 21, -22};
  std::cout << "\x1B[31mTest for length [TASK A]\n\033[0m";
	std::cout << "Length of Coord P: " << length(&pointP) << '\n';
	std::cout << "Length of Coord Q: " << length(&pointQ) << '\n' << '\n';

  //Task B
 	std::cout << "\x1B[31mTest for fartherFromOrigin [TASK B]\n\033[0m";
	std::cout << "Address of P: " << &pointP << std::endl;
 	std::cout << "Address of Q: " << &pointQ << std::endl;

 	Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);

 	std::cout << "ans = " << ans << '\n';
  (ans == &pointQ) ? (std::cout << "Point Q is further"):
  (std::cout << "\x1B[35mPoint P is further\033[0m");

  //Task C
 	std::cout << "\n\n\x1B[31mTests for move [TASK C]\n\033[0m";
	Coord3D pos = {0, 0, 100.0};
 	Coord3D vel = {1, -5, 0.2};
  std::cout << "ORIGINAL POSITON: " << "0 0 100.0" << '\n';
 	move(&pos, &vel, 2.0); // object pos gets changed
 	std::cout << "UPDATED POSITION: " << pos.x << " " << pos.y
            << " " << pos.z << "\n\n";
 	// prints: 2 -10 100.4

  //Task E
 	double x = 10;
 	double y = 20;
 	double z = 30;
  std::cout << "\x1B[31mTests for createCoord3D/deleteCoord3D [TASK E]\n\033[0m";
  std::cout << "Position Vector: ";
  std::cout << x << ' ' << y << ' ' << z << '\n';
  Coord3D *ppos = createCoord3D(x,y,z);

  std::cout << "Velocity Vector: ";
  x = 5.5;
  y = -1.4;
  z = 7.77;
  std::cout << x << ' ' << y << ' ' << z << '\n';
  Coord3D *pvel = createCoord3D(x,y,z);

  move(ppos, pvel, 10.0);

  std::cout << "\x1B[36mCoordinates after 10 seconds\033[0m: "
       << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);

	return 0;
}
