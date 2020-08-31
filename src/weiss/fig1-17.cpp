/**
 * @brief Figure 1.17 Simple function that exposes problems in Figure 1.16
 * @file  fig1-17.cpp
 */

#include <cstdlib>
#include <iostream>
#include "fig1-16.h"

int f( )
{
    IntCell a{ 2 };
    IntCell b = a;
    IntCell c;

    c = b;
    a.write( 4 );
    std::cout << a.read( ) << std::endl << b.read( ) << std::endl << c.read( ) << std::endl;

    return 0;
}

int main()
{
    return f( );
}



