#include "logic.h"

bool isPrime(const int& x) {
  for (int i = 2; i < x; i++) {
    if (x % i == 0) {
      return false;
    }
  }

  return true;
}
