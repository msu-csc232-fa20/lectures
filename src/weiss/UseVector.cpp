#include <iostream>
#include <vector>

int main()
{
    std::vector<int> squares( 100 );

    for( int i = 0; i < squares.size( ); ++i )
        squares[ i ] = i * i;

    for( int i = 0; i < squares.size( ); ++i )
        std::cout << i << " " << squares[ i ] << std::endl;

    return 0;
}