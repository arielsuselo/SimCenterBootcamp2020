#include "Circle.h"

int Circle::numCirc=0;

Circle::~Circle() {
  numCirc--;
  std::cout << "Circle Destructor\n";
}

Circle::Circle(double d) {
  diameter = d;
}

double
Circle::GetArea(void) {
  return this->GetPI() * diameter * diameter/4.0;
}

void 
Circle::PrintArea(std::ostream &s) {
  s << "Circle: " << GetPI()*diameter*diameter/4.0 << " numCirc: " << numCirc << "\n";
}

double
Circle::GetPI(void) {
  return 3.14159;
}
