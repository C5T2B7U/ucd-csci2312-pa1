/*
 *
 * Point.cpp
 *
 * Implementation file for Point class
 *
 */


#include <cmath>
using namespace std;

#include "Point.h"      // included Point class header


// Constructors
Point::Point()                                 // default constructor
{
    x = 0.0;
    y = 0.0;
    z = 0.0;
}


Point::Point(double newX, double newY, double newZ)     // three-argument constructor
{
    x = newX;
    y = newY;
    z = newZ;
}



/*
 * Add a new member function to Point called distanceTo.
 * This member function should accept as an argument a
 * const Point & (a reference to a constant Point), and
 * it should return a double that approximates the
 * distance between the two points. Note that distanceTo
 * is a constant member function.
 */

// PRECOND. Argument to function is a reference to a const
// Point object.
// POSTCOND. Function returns double that approximates
// distance between two points.
double Point::distanceTo(const Point& otherPoint) const
{
    // FORMULA IS: sqrt( ((x2-x1)^2) + ((y2-y1)^2) + ((z2-z1)^2) );
    // NOTE:  EXPRESSION FOR SQUARE ROOT MUST BE > 0
        // IF EXPRESSION = 0 THEN RETURN 0;
        // IF EXPRESSION < 0 THEN RETURN sqrt(abs(EXPRESSION));


    return 1.0;

}
