#include <iostream>
#include "Problem1/Problem1.h"
#include "Problem2/Problem2.h"
#include "Problem3/Problem3.h"
#include "Problem4/Problem4.h"
#include "Problem5/Problem5.h"
#include "Problem6/Problem6.h"
#include "Problem7/Problem7.h"

//Which problem to run the solution for
const int PROBLEM_TO_SOLVE = 7;

/**
 * Entry point of the program
 * Will constantly be changed to run most recent problem
 */
int main() {
    switch (PROBLEM_TO_SOLVE) {
        case 1:
            std::cout << Problem1::sumOfDivisibleUntilHighestNumber() << std::endl;
            break;
        case 2:
            std::cout << Problem2::sumOfEvenTermsLowerThanLimit() << std::endl;
            break;
        case 3:
            std::cout << Problem3::largestPrimeFactor() << std::endl;
            break;
        case 4:
            std::cout << Problem4::largestPalindromeFromProductOfThreeDigitNumbers() << std::endl;
            break;
        case 5:
            std::cout << Problem5::smallestEvenlyDivisiblyByAllUntilUpperBound() << std::endl;
            break;
        case 6:
            std::cout << Problem6::differenceBetweenSumSquaresAndSquareSum() << std::endl;
            break;
        case 7:
            std::cout << Problem7::findPrimeAtPrimeIndex() << std::endl;
            break;
        default:
            std::cout << "Nothing to run... ¯\\_(ツ)_/¯" << std::endl;
            break;
    }
    return 0;
}