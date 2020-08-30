/**
 * @file Sphere.cpp
 */

#include "Sphere.h" // Include the header file

Sphere::Sphere()
{
    theRadius = 1.0;
} // end default constructor

Sphere::Sphere(double intialRadius)
{
    setRadius(intialRadius); // Sphere:: not needed here
} // end initializing constructor

void Sphere::setRadius(double newRadius)
{
    if (newRadius > 0)
    {
        theRadius = newRadius;
    }
    else
    {
        theRadius = 1.0;
    }
} // end setRadius

double Sphere::getRadius() const
{
    return theRadius;
} // end getRadius

double Sphere::getDiameter() const
{
    return 2.0 * theRadius;
} // end getDiameter

double Sphere::getCircumference() const
{
    return PI * getDiameter();
} // end getCircumference

double Sphere::getArea() const
{
    return 4.0 * PI * theRadius * theRadius;
} // end getArea

double Sphere::getVolume() const
{
    double radiusCubed = theRadius * theRadius * theRadius;
    return (4.0 * PI * radiusCubed) / 3.0;
} // end getVolume
// End of implementation file
