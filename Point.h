// EDITED BY C5T2B7U
// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double newX, double newY, double newZ);    // three-argument constructor

    // Mutator methods
    void setX(double newX) {x = newX;};
    void setY(double newY) {y = newY;};
    void setZ(double newZ) {z = newZ;};

    // Accessor methods
    double getX() const {return x;};
    double getY() const {return y;};
    double getZ() const {return z;};


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
    double distanceTo(const Point& otherPoint) const;

};


#endif // __POINT_H
