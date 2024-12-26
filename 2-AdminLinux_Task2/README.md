# Binary Search Program

This C program demonstrates the implementation of the binary search algorithm to find the position of an element in a sorted array. The program allows the user to input the element to be searched and returns the index if found, or a message indicating the element is not in the array.

## Features

- *Binary Search Algorithm*: Efficiently searches for an element in a sorted array.
- *User Input*: Allows the user to input the element to be searched.
- *Clear Output*: Displays the index of the element if found, or a message if not found.

## How Binary Search Works

Binary search is a divide-and-conquer algorithm that splits the search range in half with each iteration. It requires a sorted array to function correctly.

1. Compare the target element with the middle element of the array.
2. If the target is equal to the middle element, the search is complete.
3. If the target is smaller than the middle element, search the left half.
4. If the target is larger, search the right half.
5. Repeat until the target is found or the range is empty.

## Prerequisites

- A C compiler such as gcc.
- Basic understanding of arrays and binary search.

## Compilation and Execution

### Step 1: Save the Code

Save the program code in a file, for example: binary_search.c.

### Step 2: Compile the Code

Compile the program using a C compiler:

```bash
gcc -o binary_search binary_search.c
```
### Step 3: Run the Program

Run the executable and provide input when prompted:

```bash
./binary_search
```
