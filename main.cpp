#include <iostream>
#include "Problem3/Problem3.h"

/**
 * Entry point of the program
 * Will constantly be changed to run most recent problem
 * @return
 */
int main() {
    Problem3 p3 = Problem3();
    std::cout << p3.largestPrimeFactor() << std::endl;
    return 0;
}