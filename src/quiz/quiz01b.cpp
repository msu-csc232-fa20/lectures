/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
 * 
 * Quiz 1
 * 
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @file   quiz01.cpp
 */

#include <cstdlib>
#include <iostream>

#define FALSE 0
#define TRUE 1
#define USE_CODE_ON_QUIZ TRUE
#define USE_ANSWER FALSE

int main()
{
    // These were the assumptions listed in Question 1
    const int ARRAY_SIZE = 4;
    int i;
    int n;
    int data[ARRAY_SIZE];

#if USE_CODE_ON_QUIZ

    // To reveal the answer to Question 1, we repeat the code
    // in Question 2 here...
    i = 0;
    n = 4;
    while (i < n)
    {
        std::cout << "Enter data[" << i << "]: ";
        std::cin >> data[i];
        ++i;
    }

#endif 

// the following macro-guard is not part of the answer; it's
// just here prevent this code from executing
#if USE_ANSWER

    // an equivalent for loop is shown below (Question 2)
    for (i = 0, n = 4; i < n; ++i)
    {
        std::cout << "Enter data[" << i << "]: ";
        std::cin >> data[i];
    }

#endif

    // And now we're done
    return EXIT_SUCCESS;

}