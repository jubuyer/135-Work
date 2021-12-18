#include <iostream>

#include "imageio.h"
#include "funcs.h"

int main()
{
	invert("image1.pgm", "taskA.pgm");
	std::cout << "taskA.pgm created.\n";

	invertHalf("inImage.pgm", "taskB.pgm");
	std::cout << "taskB.pgm created.\n";

	box("image1.pgm", "taskC.pgm");
	std::cout << "taskC.pgm created.\n";

	frame("image1.pgm", "taskD.pgm");
	std::cout << "taskD.pgm created.\n";

	scale("inImage.pgm", "taskE.pgm");
	std::cout << "taskE.pgm created.\n";
	
	pixelate("inImage.pgm", "taskF.pgm");
	std::cout << "taskF.pgm created.\n";

	return 0;
}
