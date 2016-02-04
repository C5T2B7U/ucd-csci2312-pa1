//
// area.cpp
//
// Implement computeArea() function
//


#include <iostream>     // FOR cout
#include <cmath>        // FOR sqrt()
using namespace std;

#include "Point.h"      // include Point class

double computeArea(const Point &a, const Point &b, const Point &c)
{
    // which takes by reference three constant Point objects,
    // computes the area within the triangle defined by these points
    // (hint: use Heron's Formula), and returns it as a
    // double-precision floating point number.

    // HERON'S FORMULA:  A = ((1/4) * sqrt( (x+y+z) * (y+z-x) * (x+z-y) * (x+y-z) ));
        // SUCH THAT x,y, and z express the length of the sides
        // of a triangle comprised of three points

    // DEFINE LENGTHS OF SIDES OF TRIANGLE
    double x, y, z;
    z = y = x = 0.0;

    x = a.distanceTo(b);
    y = b.distanceTo(c);
    z = c.distanceTo(a);

    cout << "  AREA = " << ((1.0/4.0) * sqrt( (x+y+z) * (y+z-x) * (x+z-y) * (x+y-z) )) << "  ";

    return ((1.0/4.0) * sqrt( (x+y+z) * (y+z-x) * (x+z-y) * (x+y-z) ));

}
