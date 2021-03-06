#include "fig1-7.h"

/**
 * Construct the IntCell with initialValue
 */
IntCell::IntCell( int initialValue ) : storedValue{ initialValue }
{
    // Intentionally empty; initialization list utilized for initialization
}

/**
 * Return the stored value.
 */
int IntCell::read() const
{
    return storedValue;

}

/**
 * Store x.
 */
void IntCell::write( int x )
{
    storedValue = x;
}
