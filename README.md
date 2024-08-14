Sorting Algorithms
This project is part of the curriculum for learning and implementing fundamental sorting algorithms in C. The focus is on understanding algorithm efficiency, coding standards, and best practices. Specifically, we have implemented the Bubble Sort algorithm and explored its time complexity.

Table of Contents
Overview
Files
Bubble Sort Algorithm
Big O Notation
How to Use
Betty Coding Style
Testing
Author
Overview
In this project, we implemented a sorting algorithm from scratch in C, adhering strictly to coding standards and avoiding the use of global variables and the standard C library (unless specified). The primary focus was on Bubble Sort, a simple comparison-based algorithm, and understanding its time complexity under different conditions.

Files
The project contains the following key files:

0-bubble_sort.c: Implementation of the Bubble Sort algorithm.
sort.h: Header file containing function prototypes and type definitions.
print_array.c: Utility function to print arrays, used for debugging and visualization.
0-main.c: Main file to test the Bubble Sort implementation.
0-O: File containing the Big O notation for Bubble Sort's time complexity.
README.md: Project documentation (this file).
Bubble Sort Algorithm
Bubble Sort is a straightforward sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process repeats until the list is sorted.

How It Works:
Comparison: Compare each pair of adjacent elements.
Swap: If they are in the wrong order (i.e., the first is greater than the second), swap them.
Repeat: Continue the process for each element until the entire array is sorted.
Example:
Given the array: [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]

The array after the first pass might look like: [19, 48, 71, 13, 52, 96, 73, 86, 7, 99]

This process repeats until the array is fully sorted.

Big O Notation
The time complexity of Bubble Sort is as follows:

Best Case: O(n) - Occurs when the array is already sorted.
Average Case: O(n^2) - Occurs when the elements are in random order.
Worst Case: O(n^2) - Occurs when the array is sorted in reverse order.
These notations are documented in the 0-O file.

How to Use
Compilation
To compile the project, use the following command:


gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble

