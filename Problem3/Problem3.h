#ifndef PROJECT_EULER_PROBLEM3_H
#define PROJECT_EULER_PROBLEM3_H

/**
 * Attempt for Problem 3 on Project Euler
 */
class Problem3 {
public:
    //The composite number that will be separated into its prime factors
    unsigned long composite = 600851475143;

    /**
     * Gets the largest prime factor of the composite
     */
    unsigned long largestPrimeFactor();
};

#endif //PROJECT_EULER_PROBLEM3_H
