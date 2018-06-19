#ifndef PROJECTEULER_PROBLEM1_H
#define PROJECTEULER_PROBLEM1_H

/**
 * Naive attempt at Problem 1 on Project Euler
 */
class Problem1 {
public:
    //To what number to go to to find the sum
    int highestNumber = 1000;
    //What the current number needs to be divisible by to be added to the sum
    int divisors[2] = {3, 5};

    /**
     * The method that goes from 1 to the highestNumber and adds all numbers that are divisible by the divisors to the sum
     */
    int sumOfDivisibleUntilHighestNumber();
};

#endif //PROJECTEULER_PROBLEM1_H
