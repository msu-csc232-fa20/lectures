#include <cstdlib>
#include <iostream>
#include <vector>

int main()
{
	// Declaring vectors
	// 1. If you know how many elements you want, you can place the type
	//    of data it will hold in angle brackets and the number of elements
	//    in parentheses... this is just an initial size and can grow
	//    if and when needed
	std::vector<double> firstVector(10);
	std::vector<std::string> myVector(12);
	std::cout << "firstVector.size() = " << firstVector.size() << "\n";
	std::cout << "myVector.size() = " << myVector.size() << "\n";

	// 2. You can place initial values into a vector when you declare it
	//    by writing a second argument
	std::vector<int> intVector(5, -1); // Vector to hold 5 ints, initially -1
	std::cout << "intVector.size() = " << intVector.size() << "\n";

	// 3. Create an empty vector -- a vector with no elements -- by omitting
	//    its size
	std::vector<char> letterVector;
	std::cout << "letterVector.size() = " << letterVector.size() << "\n";

	firstVector.push_back(2.3);
	firstVector.push_back(3.4);

	for (double value : firstVector)
	{
		std::cout << value << "\n";
	}
	std::cout << "Is that what you expected?\n";

	myVector[3] = "This is a sample string";
	int length = myVector.size();
	myVector[length - 1] = "This is the end... my only friend, the end...";
	std::string last = myVector[length - 1];
	myVector.pop_back();
	std::cout << "last = \"" << last << "\"\n";
	std::cout << "myVector.size() = " << myVector.size() << "\n";

	return EXIT_SUCCESS;
}
