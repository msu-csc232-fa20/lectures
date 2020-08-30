/**
 * @file SphereDriver.cpp
 */

#include <iostream>
#include "Sphere.h"
#include "SphereInColor.h"

void useSphereInColor();

int main()
{
    Sphere unitSphere;       // Radius is 1.0
    Sphere mySphere(5.1);    // Radius is 5.1
    mySphere.setRadius(4.2); // Resets radius to 4.2
    std::cout << mySphere.getDiameter() << std::endl;

    useSphereInColor();
    
    return 0;
}

void useSphereInColor()
{
    SphereInColor ball(RED);
    ball.setRadius(5.0);
    std::cout << "The ball diameter is " << ball.getDiameter() << std::endl;
    ball.setColor(BLUE);
    // etc., etc.
}
