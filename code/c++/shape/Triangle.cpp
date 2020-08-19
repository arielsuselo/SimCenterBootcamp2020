#include "Triangle.h"

int Triangle::numTriangle = 0;

Triangle::~Triangle() {
  numTriangle--;
  std::cout << "Triangle Destructor\n";
}

Triangle::Triangle(double w, double d)
  :Shape(),width(w), height(d)
{
  numTriangle++;
}

double
Triangle::GetArea(void) {
  return 0.5*width*height;
}

void 
Triangle::PrintArea(std::ostream &s) {
  s << "Triangle: " << 0.5*width*height  << " numTriangle: " << numTriangle << "\n";
}

