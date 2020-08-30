#include "Sphere.h"

#ifndef __SPHERE_IN_COLOR__H__
#define __SPHERE_IN_COLOR__H__

enum Color {RED, BLUE, GREEN, YELLOW};
class SphereInColor : public Sphere
{
private:
    Color sphereColor;
public:
    SphereInColor(Color initialColor);
    SphereInColor(Color initialColor, double initialRadius);
    void setColor(Color newColor);
    Color getColor() const;
}; // end SphereInColor

#endif // __SPHERE_IN_COLOR__H__
