#include "Problem6.h"

namespace Problem6 {

    /**
     * Finds (1 + 2 + 3 + ... + n) ^ 2 - (1 ^ 2 + 2 ^ 2 + 3 ^ 2 + ... + n ^ 2) where n is the upperSumBound
     * I'm only adding the terms unique to (1 + 2 + 3 + .. + n) ^ 2 that aren't in (1 ^ 2 + 2 ^ 2 + 3 ^ 2 + ... + n ^ 2)
     * (1 + 2 + 3 + .. + n) ^ 2 = (1 ^ 2 + 2 ^ 2 + 3 ^ 2 + ... + n ^ 2) + 2*1*2 + 2*1*3 + 2*1*4 + ... + 2*1*n + 2*2*3 + 2*2*4 + 2*2*5 + ... + 2*2*n + ... + 2n(n-1)
     */
    int differenceBetweenSumSquaresAndSquareSum() {
        int sum = 0;
        for (int i = 1; i < upperSumBound; i++) {
            for (int j = i + 1; j <= upperSumBound; j++) {
                sum += i * j;
            }
        }
        return 2 * sum;
    }

}