#pragma once

//prototype of box (4A)
//The function box() takes user input of a width and height and returns a box
//in those dimensions.
std::string box(int width, int height);

//prototype of checkerboard (4B)
//The function checkerboard() takes user input of a width and height and returns
//a checkerboard in those dimensions.
std::string checkerboard(int width, int height);

//prototype of cross (4C)
//cross() takes and int size as a parameter and returns a cross with a height
//and with in that size
std::string cross(int size);

//prototype of lower (4D)
//Returns a triangle half of a square) with the dimensions of the parameter
std::string lower(int side);

//prototype of upper (4E)
//Returns a triangle (Half of a square) with right side indentation with
//the dimensions of the parameter.
std::string upper(int side);

//protype of trapezoid (4F)
//Takes parameter of width and height and returns an inverted trapezoid or
//triangle depending on the params. Will return "Impossible shape!" if the shapes
//cannot be created from the given params.
std::string trapezoid(int width, int height);

//protype of checkerboard3x3 (4G)
//Returns 3x3 sets of stars and spaces to create a checkerboard of the
//given length and width
std::string checkerboard3x3(int width, int height);
