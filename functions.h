#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod);
long factorial(int n);

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
  if (n == 1) {
    std::cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << "." << std::endl;
  }
}
#endif