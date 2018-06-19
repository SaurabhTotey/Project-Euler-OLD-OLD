#include <iostream>
#include "Problem1/Problem1.h"

/**
 * Entry point of the program
 * Will constantly be changed to run most recent problem
 * @return
 */
int main() {
    Problem1 p1 = Problem1();
    std::cout << p1.sumOfDivisibleUntilHighestNumber() << std::endl;
    return 0;
}