/** @file Sphere.h */

#ifndef __SPHERE__H__
#define __SPHERE__H__

const double PI = 3.14159;

/** Definition of a class of Spheres. */
class Sphere
{
private:
    double theRadius; // The sphere's radius
public:
    /** 
     * Default constructor: Creates a sphere and initializes its radius
     * to a default value.
     * Precondition: None.
     * Postcondition: A sphere of radius 1 exists.
     */
    Sphere();

    /**
     * Initializing constructor: Creates a sphere and initalizes its radius.
     * Precondition: initialRadius is the desired radius.
     * Postcondition: A sphere of radius initialRadius exists.
     */
    Sphere(double initialRadius);

    /**
     * Sets (alters) the radius of this sphere.
     * Precondition: newRadius is the desired radius.
     * Postcondition: The sphere's radius is newRadius.
     */
    void setRadius(double newRadius);

    /**
     * Gets this sphere's radius.
     * Precondition: None.
     * Postcondition: Returns the radius
     */
    double getRadius() const;

    /**
     * Get this sphere's diameter.
     * Precondition: None.
     * Postcondition: Returns the diameter.
     */
    double getDiameter() const;

    /**
     * Get this sphere's circumference.
     * Precondition: None.
     * Postcondition: Returns the circumference.
     */
    double getCircumference() const;

    /**
     * Get this sphere's area.
     * Precondition: None.
     * Postcondition: Returns the surface area.
     */
    double getArea() const;

    /**
     * Get this sphere's volume.
     * Precondition: None.
     * Postcondition: Returns the volume.
     */
    double getVolume() const;

    // The compiler-generated destructor is sufficient
}; // end Sphere

#endif // __SPHERE__H__
// End of header file
