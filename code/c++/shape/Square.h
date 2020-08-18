<<<<<<< HEAD
#ifndef _RECTANGLE
#define _RECTANGLE

#include "Shape.h"

class Rectangle: public Shape {
 public:
  Rectangle(double w, double h);
  ~Rectangle();
=======
#ifndef _SQUARE
#define _SQUARE

#include "Shape.h"

class Square: public Shape {
 public:
  Square(double w);
  ~Square();
>>>>>>> upstream/master
  double GetArea(void);
  void PrintArea(std::ostream &s);  

 protected:

 private:
<<<<<<< HEAD
  double width, height;
  static int numRect;
};

#endif // _RECTANGLE
=======
  double width;
  static int numSquare;
};

#endif // _SQUARE
>>>>>>> upstream/master

  
