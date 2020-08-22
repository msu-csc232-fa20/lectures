#include <cstdlib>
#include <iostream>

enum Day {SUN, MON, TUE, WED, THU, FRI, SAT};

void printDayOfWeek(int day);
double getAverageTemperature(const double temperatures[], int n);

int main()
{
	const int DAYS_PER_WEEK{7};
	double maxTemps[DAYS_PER_WEEK] = {82.0, 71.5, 61.8, 75.0, 88.3, 80.0, 81.2};
	
	std::cout << "Max temperatures for the week:\n";
	for (int dayIndex = SUN; dayIndex <= SAT; dayIndex++)
	{
		std::cout << maxTemps[dayIndex] << std::endl;
	}

	for (int dayIndex{SUN}; dayIndex <= SAT; dayIndex++)
	{
		std::cout << "Enter the high temperature for ";
		printDayOfWeek(dayIndex);
		std::cout << ": ";
		std::cin >> maxTemps[dayIndex];
	}

	std::cout << "The average temperature for the week is: "
	          << getAverageTemperature(maxTemps, 7)
	          << std::endl;

	return EXIT_SUCCESS;
}

void printDayOfWeek(int day)
{
	switch (day)
	{
		case SUN:
			std::cout << "Sunday";
			break;
		case MON:
			std::cout << "Sunday";
			break;
		case TUE:
			std::cout << "Sunday";
			break;
		case WED:
			std::cout << "Sunday";
			break;
		case THU:
			std::cout << "Sunday";
			break;
		case FRI:
			std::cout << "Sunday";
			break;
		case SAT:
			std::cout << "Sunday";
			break;
		default:
			std::cout << "?";
	}
}

double getAverageTemperature(const double temperatures[], int n)
{
	double sum{0};
	for (int index{0}; index < n; index++)
	{
		sum += temperatures[index];
	}
	return sum / n;
}