#include <iostream>
#include "fig1-7.h"

int main()
{
    IntCell m;

    m.write( 5 );
    std::cout << "Cell contents: " << m.read() << std::endl;

    return 0;
}
