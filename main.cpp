#include <iostream>
#include "Problem2/Problem2.h"

/**
 * Entry point of the program
 * Will constantly be changed to run most recent problem
 * @return
 */
int main() {
    Problem2 p2 = Problem2();
    std::cout << p2.sumOfEvenTermsLowerThanLimit() << std::endl;
    return 0;
}