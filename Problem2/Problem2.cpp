#include "Problem2.h"

namespace Problem2 {

    //The list of terms in the Fibonacci Sequence
    std::vector<int> fibTerms = {1, 2};

    /**
     * Just adds a term to the Fibonacci Sequence of the current Problem2
     */
    void addFibTerm() {
        fibTerms.push_back(fibTerms[fibTerms.size() - 1] + fibTerms[fibTerms.size() - 2]);
    }

    /**
     * Generates the Fibonacci Sequence until the maxLimit is reached, and then sums all of the even terms
     */
    int sumOfEvenTermsLowerThanLimit() {
        //Generates all the Fibonacci terms that are below the maxLimit
        while (fibTerms[fibTerms.size() - 1] < maxLimit) {
            addFibTerm();
        }
        fibTerms.pop_back();
        //Sums all of the even Fibonacci terms
        int sum = 0;
        for (int term : fibTerms) {
            if (term % 2 == 1) {
                continue;
            }
            sum += term;
        }
        return sum;
    }

}