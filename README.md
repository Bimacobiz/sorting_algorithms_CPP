# Sorting Algorithms & Big O

This repository contains implementations of various sorting algorithms in C++, along with explanations of their time complexity analysis using Big O notation.

## Sorting Algorithms Implemented

1. **Bubble Sort**: Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, indicating that the list is sorted.

2. **Insertion Sort**: Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

3. **Selection Sort**: Selection sort is a simple in-place comparison-based sorting algorithm. The algorithm divides the input list into two parts: the left subarray, which is already sorted, and the right subarray, which is unsorted.

4. **Merge Sort**: Merge sort is an efficient, stable, and comparison-based sorting algorithm. It uses a divide-and-conquer approach to sort an array or list.

## Big O Notation

For each sorting algorithm, we analyze its time complexity using Big O notation. Big O notation describes the upper bound of the growth rate of an algorithm's time complexity concerning the input size. Common Big O complexities include O(1), O(log n), O(n), O(n log n), O(n^2), and more.

## Usage

You can explore the source code for each sorting algorithm in the respective directories. Each algorithm is implemented in both C and C++.

To compile and run the programs, use the following commands:

For C++:
```bash
g++ -o name_of_program C++_source_files_to_compile
