#ifndef _CIRCLE
#define _CIRCLE

#include "Shape.h"

class Circle: public Shape {
 public:
  Circle(double d);
  ~Circle();
  double GetArea(void);
  void PrintArea(std::ostream &s);

 private:
  double diameter;
  double GetPI(void);
  static int numCirc;
};

#endif // _CIRCLE
  
