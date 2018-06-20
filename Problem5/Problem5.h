#ifndef PROJECT_EULER_PROBLEM5_H
#define PROJECT_EULER_PROBLEM5_H

/**
 * Attempt for Problem 5 on Project Euler
 */
class Problem5 {
public:
    //All positive integers from 2 to upperDivisibleBound need to be able to evenly divide the solution
    int upperDivisibleBound = 20;

    /**
     * The smallest integer that is evenly divisible by all positive integers until the upperDivisibleBound
     */
    int smallestEvenlyDivisiblyByAllUntilUpperBound();

    /**
     * Returns whether the given number is prime
     */
    bool isPrime(int num);
};

#endif //PROJECT_EULER_PROBLEM5_H
