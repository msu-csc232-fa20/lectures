#include <cstdlib>
#include <iostream>

int main()
{
	int nextValue{0};
	int sum{0};

	std::cout << "Enter a postive numbers to accumulate; 0 (or less) to end: ";
	std::cin >> nextValue;

	while (nextValue > 0)
	{
		sum += nextValue;
		std::cin >> nextValue;
	}

	/*
	 Using the fact that std::cin >> nextValue is true if the input operation
	 was successful and false otherwise coupled with the notion of short-circuit
	 evaluation the above loop could also be written as

	 while ( (std::cin >> nextValue) && (nextValue > 0) )
	     sum += nextValue;

	 This loop is difficult to maintain, and thus is not recommended.
	 */

	std::cout << "The accumulated sum is: " << sum << "\n";

	return EXIT_SUCCESS;
}
