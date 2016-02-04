/*
 *
 * Point.cpp
 *
 * Implementation file for Point class
 *
 */


#include <iostream>     // FOR cout
#include <cmath>        // FOR pow(), sqrt()
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
    // NOTE:  EXPRESSION FOR SQUARE ROOT IS INHERENTLY > 0
        // IF EXPRESSION = 0 THEN RETURN 0;
        // ELSE RETURN sqrt(EXPRESSION);
    double innerExpression = 0.0;

    innerExpression = (
                        pow((x-otherPoint.getX()),2) +
                        pow((y-otherPoint.getY()),2) +
                        pow((z-otherPoint.getZ()),2)
                      );

    cout << "  DIST = " << sqrt(innerExpression) << "  ";

    if (innerExpression == 0.0)
        return 0.0;
    else
        return sqrt(innerExpression);
}

