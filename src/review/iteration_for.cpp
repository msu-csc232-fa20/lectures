#include <cstdlib>
#include <iostream>

int main()
{
	int n;
	std::cout << "Enter an upper bound for a counter: ";
	std::cin >> n;
	for (int counter{1}; counter <= n; counter++)
		std::cout << counter << " ";
	std::cout << std::endl; // This statement is always executed

	/*
	 The for-loop is just syntactic sugar for a while loop. 
	 The above for-loop is equivalent to

	 int counter{1};
	 while (counter <= n)
	 {
	     std::cout << counter << " ";
	     counter++;
	 }
	 std::cout << std::endl; // This statement is always executed
	 */

	/*
	 In general, the logic of a for statement is equivalent to

	 initialize;
	 while (test)
	 {
	     statement(s);
	     update;
	 }

	 i.e., compared to 

	 for (initialize; test; update)
	 {
	     statement(s);
	 }

	 The initialize and update portions of a for statement can
	 contain several expressions separated by commas, thus 
	 performing more than one action as shown below
	 */

	int x;
	double power;
	int expon;
	std::cout << "Enter a value for x: ";
	std::cin >> x;
	for (power = 1.0, expon = 1; expon <= n; expon++)
		power *= x;

	std::cout << "x^n = " << power << "\n";
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
