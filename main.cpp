#include <iostream>
#include "functions.h"

int main() {
  std::cout << "The factorial of 10 is " << factorial(10) << "." << std::endl;
  std::cout << "This is how to solve the Tower of Hanoi for 5 disks:" << std::endl;
  towerOfHanoi(5, 'A', 'C', 'B');
  return 0;
}