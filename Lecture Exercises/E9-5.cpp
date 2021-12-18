//Description
/*
Jubayer Ahmed
Course: CSCI-13500
Instructor: Tong Yi
E9.5

rectangle states
*/

#include <iostream>

class Rectangle {
    public:
        Rectangle(double input_w, double input_h);
        double get_perimeter();
        double get_area();
        void resize(double factor);
    private:
        double width;
        double height;
};

Rectangle::Rectangle(double input_w, double input_h) {
  width = input_w;
  height = input_h;
}

double Rectangle::get_perimeter() {
  return (2*width + 2*height);
}

double Rectangle::get_area() {
  return (width * height);
}

void Rectangle::resize(double factor) {
  width *= factor;
  height *= factor;
}
