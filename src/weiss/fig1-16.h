/**
 * @brief Figure 1.16 Data member is a pointer; defaults are no good
 * @file  fig1-16.h
 */

#ifndef IntCellDefaultNoGood_H
#define IntCellDefaultNoGood_H


class IntCell
{
public:
    explicit IntCell( int initialValue = 0 )
    {
        storedValue = new int{ initialValue };
    }

    int read() const
    {
        return *storedValue;
    }

    void write( int x )
    {
        *storedValue = x;
    }
private:
    int *storedValue;
};

#endif // IntCellDefaultNoGood_H
