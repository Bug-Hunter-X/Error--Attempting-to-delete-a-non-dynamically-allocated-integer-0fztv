# C++ Bug: Deleting a Non-Dynamically Allocated Integer

This repository demonstrates a common C++ error: attempting to use the `delete` operator on a variable that wasn't allocated using `new`.  This can lead to unpredictable behavior and crashes.

## Bug Description

The `bug.cpp` file contains code that attempts to delete an integer variable. Integers are allocated on the stack, not the heap, so the `delete` operator is not applicable in this context.  This results in undefined behavior.

## Solution

The `bugSolution.cpp` file demonstrates the correct way to handle memory allocation and deallocation. Dynamic memory allocation with `new` and deallocation with `delete` are used for objects only allocated on the heap.

## How to Reproduce

1. Clone this repository.
2. Compile the `bug.cpp` file (using a C++ compiler like g++): `g++ bug.cpp -o bug`
3. Run the executable: `./bug` (You might see seemingly correct behavior, or a crash.  The outcome is undefined).
4. Compile and run the `bugSolution.cpp` file to observe the correct usage of dynamic memory management.