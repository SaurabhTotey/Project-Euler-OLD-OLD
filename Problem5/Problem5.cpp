#include <map>
#include <cmath>
#include "Problem5.h"

namespace Problem5 {

    /**
     * Gets the least amount of primes to make every number until upperDivisibleBound and multiplies them all together to get the smallest evenly divisible number
     */
    int smallestEvenlyDivisiblyByAllUntilUpperBound() {
        //Initializes primeCountMap: a map of all primes until the upperDivisibleBound mapped to the minimum amount of all of them needed to make any number until upperDivisibleBound
        std::map<int, int> primeCountMap;
        //Just set all the keys for primeCountMap
        for (int i = 2; i <= upperDivisibleBound; i++) {
            if (isPrime(i)) {
                primeCountMap[i] = 1;
            }
        }
        //Add all the counts for all of the primes
        for (int i = 2; i <= upperDivisibleBound; i++) {
            if (primeCountMap.count(i)) {
                continue;
            }
            for (int j = 2; j <= sqrt(i); j++) {
                if (!primeCountMap.count(j)) {
                    continue;
                }
                int composite = i;
                int count;
                for (count = 0; composite % j == 0; count++) {
                    composite /= j;
                }
                if (primeCountMap[j] < count) {
                    primeCountMap[j] = count;
                }
            }
        }
        //Multiply all the primes together and multiply each prime in for as many counts as it had
        int total = 1;
        for (auto const& [prime, count] : primeCountMap) {
            total *= pow(prime, count);
        }
        return total;
    }

    /**
     * Returns whether a number is prime by checking divisibility by all possible factors
     */
    bool isPrime(int num) {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

}