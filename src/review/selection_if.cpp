#include <climits>
#include <cstdlib>
#include <iostream>

int main()
{
	int a{INT_MIN};
	int b{INT_MIN};

	std::cout << "Enter values for a and b (separated by a space): ";
	std::cin >> a >> b;

	if (a > b)
		std::cout << a << " is larger than " << b << ".\n";
	std::cout << "This statement is always executed.\n";

	int largerAB{INT_MIN};

	if (a > b)
	{
		largerAB = a;
		std::cout << a << " is larger than " << b << ".\n";
	}
	else
	{
		std::cout << b << " is larger than " << a << ".\n";
		largerAB = b;
	} // end if-else

	std::cout << largerAB << " is the larger value.\n";

	int c{INT_MIN};
	int largest{INT_MIN};
	std::cout << "Enter another int (c): ";
	std::cin >> c;

	if ((a >= b) && (a >= c))
		largest = a;
	else if (b >= c)
		largest = b;
	else
		largest = c;

	std::cout << "The largest value entered was " << largest << "\n";
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
