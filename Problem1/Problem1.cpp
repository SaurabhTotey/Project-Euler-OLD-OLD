#include "Problem1.h"

namespace Problem1 {

    /**
     * Currently does a naive and inefficient solution of looping through all the numbers to get a sum
     * @return sum of all numbers that are divisible by the divisor
     */
    int sumOfDivisibleUntilHighestNumber() {
        int sum = 0;
        for (int i = 0; i < highestNumber; i++) {
            for (int divisor: divisors) {
                if (i % divisor != 0) {
                    continue;
                }
                sum += i;
                break;
            }
        }
        return sum;
    }

}