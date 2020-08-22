#include <cctype>
#include <cstdlib>
#include <iostream>

int main()
{
	int month{0};
	int daysInMonth{0};

	std::cout << "Enter a month (by number, e.g., 1 for Jan., 2 for Feb., etc.): ";
	std::cin >> month;

	switch (month)
	{
		// 30 days hath Sept., Apr., June, and Nov.
		case 9:
		case 4:
		case 6:
		case 11:
			daysInMonth = 30;
			break;
		// All the rest have 31
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			daysInMonth = 31;
			break;
		// Except Feb
		case 2:
			char leapYearResponse;
			std::cout << "Is this a leap year? (y or n): ";
			std::cin >> leapYearResponse;
			if (tolower(leapYearResponse) == 'y')
				daysInMonth = 29;
			else
				daysInMonth = 28;
			break;
		default:
			std::cout << "Incorrect value for month.\n";
	} // end switch

	if ((daysInMonth > 0) && (daysInMonth < 32))
		std::cout << "The days in the month entered are: " << daysInMonth << "\n";
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
