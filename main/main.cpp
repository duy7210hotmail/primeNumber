#include "logic.h"
#include "pncheck.h"
#include <iostream>
#include <vector>

int main() {
  //Declare two variables
  int startingRange;
  int endingRange;

  std::cout << "Program count prime number appear in console\n";
  std::cout << "You must enter two number to start program\n";

  //User input value
  std::cout << "Input the number from starting range: ";
  std::cin >> startingRange;
  std::cout << "Input the number from ending range: ";
  std::cin >> endingRange;

  /** Checking if value is valid 
   * */
  //isValid(int& x, int& y) {
  isValid(startingRange, endingRange);
  /*
  if (isValid(startingRange, endingRange)) {
    std::vector<int> primeNumberLists = {};

    for (startingRange; startingRange <= endingRange; startingRange++) {
      if (isPrime(startingRange)) {
        primeNumberLists.push_back(startingRange);
       }
    }

    for (int primeNumber : primeNumberLists) {
      std::cout << primeNumber << '\t';
    }
  }
  */

  /*
  if (startingRange > endingRange) {
    std::swap (startingRange, endingRange);
    std::cout << startingRange << '\n';
    std::cout << endingRange << '\n';
  }
  */

  return 0;
}
