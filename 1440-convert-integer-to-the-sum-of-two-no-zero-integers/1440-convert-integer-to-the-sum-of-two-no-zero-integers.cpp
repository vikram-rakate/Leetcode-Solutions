class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for (int a = 1; a < n; a++) {
            int b = n - a;
            if (isNoZero(a) && isNoZero(b)) {
                return {a, b};
            }
        }
        return {}; // though problem guarantees answer exists
    }

private:
    bool isNoZero(int x) {
        while (x > 0) {
            if (x % 10 == 0) return false; // contains 0
            x /= 10;
        }
        return true;
    }
};
