class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes.
        // Also, if last digit is 0, number must be 0.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // When length is odd, we can get rid of the middle digit by revertedNumber/10
        // For example when input is 12321, at the end of the loop we get x = 12, revertedNumber = 123,
        // since the middle digit doesn't matter in palindrome(it will always equal itself), 
        // we can simply get rid of it.
        return x == revertedNumber || x == revertedNumber / 10;
    }
};
