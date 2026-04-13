#include <climits> // Required for INT_MAX and INT_MIN

class Solution {
public:
    int reverse(int x) {
        int reversed_num = 0;
        
        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            
            // Check for potential overflow BEFORE the multiplication
            if (reversed_num > INT_MAX / 10 || (reversed_num == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return 0; // Overflow occurred
            }
            if (reversed_num < INT_MIN / 10 || (reversed_num == INT_MIN / 10 && digit < INT_MIN % 10)) {
                return 0; // Underflow occurred
            }
            
            // Append the current digit
            reversed_num = reversed_num * 10 + digit;
        }
        
        return reversed_num;
    }
};
