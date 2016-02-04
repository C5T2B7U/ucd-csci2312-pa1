/*
 *
 * Point.cpp
 *
 * Implementation file for Point class
 *
 */


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
