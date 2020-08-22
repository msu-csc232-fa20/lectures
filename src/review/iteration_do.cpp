#include <cstdlib>
#include <cctype>
#include <iostream>

int main()
{
	char response;
	do
	{
		std::cout << "I'm doing something... at least once ;-)\n";
		std::cout << "Play it again? (y or n)? ";
		std::cin >> response;
	} while ( tolower(response) == 'y');

	std::cout << "Assuming no error, this is always printed...\n";
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
