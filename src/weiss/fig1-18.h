/**
 * @brief Figure 1.18 Data member is a pointer; big-five is written.
 * @file  fig1-18.h
 */

#ifndef INT_CELL_H__
#define INT_CELL_H__

#include <utility>

class IntCell
{
public:
    explicit IntCell( int initialValue = 0 )
    {
        storedValue = new int{ initialValue };
    }

    /**
     * Destructor.
     */
    ~IntCell( )
    {
        delete storedValue;
    }

    /**
     * Copy constructor.
     * @param rhs a const l-value reference to the object being used to 
     *            construct this IntCell
     */
    IntCell( const IntCell & rhs )
    {
        storedValue = new int{ *rhs.storedValue };
    }

    /**
     * Move constructor.
     * @param rhs an r-value reference to the object being used to
     *            construct this IntCell.
     */
    IntCell( IntCell && rhs ) : storedValue{ rhs.storedValue }
    {
        rhs.storedValue = nullptr;
    }

    /**
     * Copy assignment operator.
     * @param rhs a const l-value reference to the object being used to
     *            assign state to this IntCell.
     * @return a reference to this IntCell.
     */
    IntCell & operator= ( const IntCell & rhs )
    {
        if( this != &rhs )
            *storedValue = *rhs.storedValue;
        return *this;
    }

    /**
     * Move assignment operator.
     * @param rhs an r-value reference to the object being used to
     *            assign state to this IntCell.
     * @return a reference to this IntCell.
     */
    IntCell & operator= ( IntCell && rhs )
    {
        std::swap( storedValue, rhs.storedValue );
        return *this;
    }
private:
    int *storedValue;
};

#endif // INT_CELL_H__
