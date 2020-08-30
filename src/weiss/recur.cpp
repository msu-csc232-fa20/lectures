/**
 * When writing recursive routines, it is crucial to keep in mind the four basic rules
 * of recursion:
 * 
 * 1. Base cases. You must always have some base cases, which can be solved without
 *    recursion.
 * 2. Making progress. For the cases that are to be solved recursively, the recursive
 *    call must always be to a case that makes progress toward a base case.
 * 3. Design rule. Assume that all the recursive calls work.
 * 4. Compound interst rule. Never duplicate work by solving the same instance of a 
 *    problem in separate calls.
 * 
 * @brief Some sample code from Weiss, Section 1.3 A Brief Introduction to Recursion
 * @file  recur.cpp
 */

#include <cstdlib>
#include <iostream>

/**
 * Figure 1.2 A recursive function
 */
int f( int x )
{
    if ( x == 0 )
        return 0;
    else
        return 2 * f( x - 1 ) + x * x;
}

/**
 * Figure 1.3 A nonterminating recursive function.
 */
int bad( int n )
{
    if ( n == 0 )
        return 0;
    else
        return bad( n / 3 +  1 ) + n  - 1;
    
}

void printDigit( int n )
{
    std::cout << n;
}

void printOut( int n ) // Print nonnegative n
{
    if ( n >= 10 )
        printOut( n / 10 );
    printDigit( n % 10 );   
}

int main()
{
    printOut(76234);
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
