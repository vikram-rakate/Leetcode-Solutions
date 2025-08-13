class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false; // Negative or zero can't be powers of 3
        while (n % 3 == 0) {     // Keep dividing while divisible by 3
            n /= 3;
        }
        return n == 1;           // If we end at 1, it's a power of 3
    }
};
