#include <iostream>

/** Returns the larger of two given integers.
 * @param x An integer.
 * @param y An integer.
 * @return The larger of x and y.
 */
int maxOf(int x, int y);           // A function declaration

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "Please enter two integers: ";
    std::cin >> a >> b;

    int largerAB = maxOf(a, b);
    std::cout << "The larger of " << a << " and " << b
              << " is " << largerAB << ".\n";

    return 0;
} // end main

// A function definition
int maxOf(int x, int y)
{
    return (x > y) ? x : y;
} // end maxOf
