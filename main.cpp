#include <iostream>
#include "Problem5/Problem5.h"

/**
 * Entry point of the program
 * Will constantly be changed to run most recent problem
 */
int main() {
    Problem5 p5 = Problem5();
    std::cout << p5.smallestEvenlyDivisiblyByAllUntilUpperBound() << std::endl;
    return 0;
}