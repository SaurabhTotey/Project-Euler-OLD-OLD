#ifndef PROJECT_EULER_PROBLEM2_H
#define PROJECT_EULER_PROBLEM2_H

#include <vector>

/**
 * Attempt for Problem 2 on Project Euler
 */
class Problem2 {
public:
    //The list of terms in the Fibonacci Sequence
    std::vector<int> fibTerms = {1, 2};
    //The maximum number that will be allowed for the stored fibonacci sequence
    int maxLimit = 4000000;

    /**
     * Adds a number to the fibTerms
     */
    void addFibTerm();

    /**
     * Gets the sum of all of the even fibonacci terms that are lower than the maxLimit
     */
    int sumOfEvenTermsLowerThanLimit();

};

#endif //PROJECT_EULER_PROBLEM2_H
