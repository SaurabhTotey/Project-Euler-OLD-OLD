#include "Problem1.h"

/**
 * Currently does a naive and inefficient solution of looping through all the numbers to get a sum
 * @return sum of all numbers that are divisible by the divisor
 */
int Problem1::sumOfDivisibleUntilHighestNumber() {
    int sum = 0;
    for (int i = 0; i < this->highestNumber; i++) {
        for (int divisor : this->divisors) {
            if (i % divisor != 0) {
                continue;
            }
            sum += i;
            break;
        }
    }
    return sum;
}