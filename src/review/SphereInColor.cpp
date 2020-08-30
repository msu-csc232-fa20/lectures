#include "SphereInColor.h"

SphereInColor::SphereInColor(Color initialColor) : Sphere()
{
    sphereColor = initialColor;
} // end constructor

SphereInColor::SphereInColor(Color initialColor, double initialRadius) : Sphere(initialRadius)
{
    sphereColor = initialColor;
} // end constructor

void SphereInColor::setColor(Color newColor)
{
    sphereColor = newColor;
} // end setColor

Color SphereInColor::getColor() const
{
    return sphereColor;
} // end getColor
