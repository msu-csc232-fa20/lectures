/**
 * @brief Figure 1.11 Program that uses pointers to IntCell (there is no compelling reason to do this)
 * @file fig1-11.cpp
 */

#include <cstdlib>
#include <iostream>
#include "fig1-7.h"

int main()
{
    IntCell *m;

    m = new IntCell{ 0 };
    m->write( 5 );
    std::cout << "Cell contents: " << m->read() << std::endl;

    delete m;
    return EXIT_SUCCESS;
}
