#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod);
long factorial(int n);

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
  if (n == 1) {
    std::cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << "." << std::endl;
  }
  else {
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    std::cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << "." << std::endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
  }
}

long factorial(int n) {
  if (n == 1) {
    return 1;
  }
  else {
    return n * factorial(n - 1);
  }
}
#endif