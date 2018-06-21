#include "Problem7.h"

/**
 * Keeps finding primes until the prime at primeIndex is found
 */
unsigned long Problem7::findPrimeAtPrimeIndex() {
    unsigned long primes[primeIndex] = { 2 };
    int currentIndex = 1;
    for (unsigned long i = 3; primes[primeIndex - 1] == 0; i+= 2) {
        bool isPrime = true;
        for (int j = 0; j < currentIndex; j++) {
            if (i % primes[j] == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) {
            continue;
        }
        primes[currentIndex] = i;
        currentIndex++;
    }
    return primes[primeIndex -1];
}