#include "Problem2.h"

/**
 * Just adds a term to the Fibonacci Sequence of the current Problem2
 */
void Problem2::addFibTerm() {
    this->fibTerms.push_back(this->fibTerms[this->fibTerms.size() - 1] + this->fibTerms[this->fibTerms.size() - 2]);
}

/**
 * Generates the Fibonacci Sequence until the maxLimit is reached, and then sums all of the even terms
 */
int Problem2::sumOfEvenTermsLowerThanLimit() {
    //Generates all the Fibonacci terms that are below the maxLimit
    while (this->fibTerms[this->fibTerms.size() - 1] < this->maxLimit) {
        this->addFibTerm();
    }
    this->fibTerms.pop_back();
    //Sums all of the even Fibonacci terms
    int sum = 0;
    for (int term : this->fibTerms) {
        if (term % 2 == 1) {
            continue;
        }
        sum += term;
    }
    return sum;
}