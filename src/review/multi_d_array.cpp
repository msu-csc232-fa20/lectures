#include <cstdlib>
#include <iostream>

const int NUM_ROWS{2};
const int NUM_COLUMNS{3};

int getLowestEntry(int data[][NUM_COLUMNS], int numRows);

int main()
{
	
	int table[NUM_ROWS][NUM_COLUMNS]
	{  
	// Using lots of whitespace to label entries visually
	//  {col 0, col 1, col 2}
		{1,     2,     3    }, // row 0
		{4,     5,     6    }  // row 1
	};

	std::cout << "The lowest entry in the table is: "
	          << getLowestEntry(table, NUM_ROWS);

	return EXIT_SUCCESS;
}

int getLowestEntry(int data[][NUM_COLUMNS], int rows)
{
	// Initially, assume the lowest entry is in the first row,
	// first column of the array
	int lowestEntry{data[0][0]};
	for (int rowIndex{0}; rowIndex < rows; rowIndex++)
		for (int colIndex{0}; colIndex < NUM_COLUMNS; colIndex++)
			if (lowestEntry > data[rowIndex][colIndex])
				lowestEntry = data[rowIndex][colIndex];
	return lowestEntry;
}
