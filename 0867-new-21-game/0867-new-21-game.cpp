class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if (k == 0 || n >= k + maxPts - 1) return 1.0; // Alice always wins

        vector<double> dp(n + 1, 0.0);
        dp[0] = 1.0;
        double windowSum = 1.0, result = 0.0;

        for (int i = 1; i <= n; i++) {
            dp[i] = windowSum / maxPts;

            if (i < k) { // still drawing
                windowSum += dp[i];
            } else { // game ends (score >= k)
                result += dp[i];
            }

            if (i - maxPts >= 0) { // shrink window
                windowSum -= dp[i - maxPts];
            }
        }

        return result;
    }
};
