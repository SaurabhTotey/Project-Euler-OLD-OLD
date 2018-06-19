#include <cmath>
#include "Problem3.h"

/**
 * Gets the largest prime factor for the problem's composite number
 * Does this by continually dividing the current composite by numbers until it cannot be divided anymore (it becomes prime)
 */
unsigned long Problem3::largestPrimeFactor() {
    unsigned long currentComposite = this->composite;
    for (unsigned long i = 2; i < sqrt(currentComposite); i++) {
        while (currentComposite % i == 0) {
            currentComposite /= i;
        }
    }
    return currentComposite;
}