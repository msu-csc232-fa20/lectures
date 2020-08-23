#include <cstdlib>
#include <iostream>
#include <string>

int main()
{
	std::string title; // Initialization is set by string's default constructor
	std::string author{"Jim Daehn"}; // initialized with string literal
	title = "The Book of Camping";

	// Strings are "like" arrays, namely an array of characters
	std::cout << "The first character in the title " << title
	          << " is '" << title[0] << "'\n";

	// You can compare strings with relational operators; the ordering of
	// strings is analagous to alphabetic ordering, using the ASCII table
	// instead of the alphabet
	if (author > title)
	{
		std::cout << author << " > " << title << "\n";
	}
	else
	{
		std::cout << title << " >= " << author << "\n";
	}

	// You can concatenate strings
	std::cout << title + " by " + author << "\n";

	// You can access part of a string with substr(position, length)
	// where position specifies the beginning of the substring
	// and length is the length of the substring to extract, e.g.
	std::cout << "title.substr(2, 3) = \"" << title.substr(2, 3) << "\"\n";

	// Compare the result of the following two cin statements
	// by entering "CSC232 - Data Structures" (without the quotes)
	// when prompted
	std::cout << "What course are you taking? ";
	std::string input;
	std::cin >> input;
	std::cout << "You're taking: " << input << "\n";

	getline(std::cin, input); // remove this to see what happens ;-)

	std::cout << "Let's try this again... What course are you taking? ";
	std::string secondInput;
	getline(std::cin, secondInput);
	std::cout << "So what you're telling me is " << secondInput << "\n";

	std::cout << std::endl;
	return EXIT_SUCCESS;
}
