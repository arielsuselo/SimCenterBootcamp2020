#include "Square.h"

int Square::numSquare = 0;

Square::~Square() {
  numSquare--;
  std::cout << "Square Destructor\n";
}

Square::Square(double w)
<<<<<<< HEAD
  :Shape(), width(w)
{
=======
  :Shape(),width(w)
{
  //  width = w;
>>>>>>> upstream/master
  numSquare++;
}

double
Square::GetArea(void) {
  return width*width;
}

<<<<<<< HEAD
void 
Square::PrintArea(std::ostream &s) {
  s << "Square: " << width * height << " numRect: " << numRect << "\n";
=======

void 
Square::PrintArea(std::ostream &s) {
  s << "Square: " << width*width  << " numSquare: " << numSquare << "\n";
>>>>>>> upstream/master
}

