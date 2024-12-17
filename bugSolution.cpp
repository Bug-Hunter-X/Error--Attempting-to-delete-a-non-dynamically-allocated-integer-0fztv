#include <iostream>

int main() {
  int *dynamicInt = new int; // Dynamic allocation on heap
  *dynamicInt = 10;       // Assign value
  std::cout << *dynamicInt << std::endl; // Access value
  delete dynamicInt;   // Correctly delete dynamically allocated memory
  dynamicInt = nullptr; // Good practice: Set pointer to null after deletion
  return 0;
} 