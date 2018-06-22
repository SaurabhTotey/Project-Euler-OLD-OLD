#include <string>
#include "Problem4.h"

namespace Problem4 {

    /**
     * Finds the largest multiple of two 3 digit numbers that is a palindrome
     */
    int largestPalindromeFromProductOfThreeDigitNumbers() {
        int largestPalindrome = 0;
        for (int i = 999; i > 1; i--) {
            for (int j = i; j > 1; j--) {
                int multiple = i * j;
                if (multiple < largestPalindrome) {
                    break;
                }
                if (isPalindrome(multiple) && multiple > largestPalindrome) {
                    largestPalindrome = multiple;
                }
            }
        }
        return largestPalindrome;
    }

    /**
     * Turns the given number into a string and then checks whether the string is the same backwards and forwards
     */
    bool isPalindrome(int num) {
        std::string numString = std::to_string(num);
        return numString == std::string(numString.rbegin(), numString.rend());
    }

}