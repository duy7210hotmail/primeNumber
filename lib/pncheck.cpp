#include "pncheck.h"
#include <iostream>

const bool isValid(int& x, int& y) {
  if ( x < 0 || y < 0) {
    std::cerr << "User input numbers contain negative value\n";
    return false;
  }

  if (x > y) {
    std::cerr << "The second number must be large than the first number\n";
    return false;
  }

  return true;
}
