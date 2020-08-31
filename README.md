# lectures

A repository to supplement lectures in CSC232, Fall 2020 at Missouri State University as taught by Jim Daehn

## Week 3

Week 3 is all about some of the finer details of C++: the concept of l-values, r-values and references, parameter passing and return passing mechanisms as well as what we refer to as the "Big-Five" operations (copy constructor, move constructor, copy assignment operator, move assignment operator and the destructor) all which "come for free" in C++ but under certain scenarios, must be dealt with by the programmer.

Topic       | Reading   | Example Code
------------|-----------|-------------
C++ Details | Weiss 1.5 | [Figure 1.11: Program that uses pointers to IntCell (there is no compelling reason to do this)](src/weiss/fig1-11.cpp), [Figure 1.16: Data member is a pointer; defaults are no good](src/weiss/fig1-16.h), [Figure 1.17: Simple function that exposes problems in Figure 1.16](src/weiss/fig1-17.cpp), [Figure 1.18: Data member is a pointer, big-five is written]

## Week 2

Topic                             | Reading           | Example Code
----------------------------------|-------------------|-------------
Classes, Libraries & Namespaces   | Appendix A.9-A.11 | [Sphere.h](src/review/Sphere.h), [Sphere.cpp](src/review/Sphere.cpp), [SphereInColor.h](src/review/SphereInColor.h), [SphereInColor.cpp](src/review/SphereInColor.cpp), [SphereDriver.cpp](src/review/SphereDriver.cpp)
A Brief Introduction to Recursion | Weiss 1.3         | [recur.cpp](src/weiss/recur.cpp)
C++ Classes                       | Weiss 1.4         | [Figure 1.5: A complete declaration of an IntCell class](src/weiss/fig1-5.h), [Figure 1.6: IntCell class with revisions](src/weiss/fig1-6.h), [Figure 1.7: IntCell class interface in file IntCell.h](src/weiss/fig1-7.h), [Figure 1.8: IntCell class implementation in file IntCell.cpp](src/weiss/fig1-8.cpp), [Figure 1.9: Program that uses IntCell in file TestIntCell.cpp](src/weiss/fig1-9.cpp), [Figure 1.10: Using the vector class](src/weiss/fig1-10.cpp)

In Week 2, we also had our first quiz. Below are links to sample code that is related to the quiz:

1. Section 01 (Tuesday Lab): [quiz01a.cpp](src/quiz/quiz01a.cpp)
1. Section 02 (Thursday Lab): [quiz01b.cpp](src/quiz/quiz01b.cpp)

## Week 1

Topic                            | Reading          | Example Code
---------------------------------|------------------|-------------
Language Basics                  | Appendix A.1-A.3 | [Figure A-1: A simple C++ program (pg. 715)](src/review/fig-a1.cpp), [Listing A-1: A program that contains a function declaration (pg. 727)](src/review/listing-a1.cpp)
Selection & Iteration Statements | Appendix A.4-A.5 | [Selection with if statements (pg. 728)](src/review/selection_if.cpp), [Selection with switch statement (pg. 729)](src/review/selection_switch.cpp), [Iteration with while statements (pg. 730)](src/review/iteration_while.cpp), [Iteration with for statements (pp. 730-731)](src/review/iteration_for.cpp), [Iteration with do statements (pp. 731-732)](src/review/iteration_do.cpp)
Arrays, Strings & Vectors        | Appendix A.6-A.8 | [One-Dimensional Arrays (pp. 732-733)](src/review/one_d_array.cpp), [Multidimensional Arrays (pp. 732-735)](src/review/multi_d_array.cpp), [Strings (pp. 735-737)](src/review/strings.cpp), [Vectors (pp. 737-738)](src/review/vectors.cpp)
