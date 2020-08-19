#ifndef _TRIANGLE
#define _TRIANGLE

#include "Shape.h"

class Triangle: public Shape {
 public:
  Triangle(double w, double d);
  ~Triangle();
  double GetArea(void);
  void PrintArea(std::ostream &s);  

 protected:

 private:
  double width, height;
  static int numTriangle;
};

#endif // _TRIANGLE


  
