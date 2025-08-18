class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> nums(cards.begin(), cards.end());
        return solve(nums);
    }

private:
    bool solve(vector<double>& nums) {
        int n = nums.size();
        if (n == 1) {
            return fabs(nums[0] - 24) < 1e-6;
        }

        // try every pair
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                vector<double> next;
                // push the other numbers except i, j
                for (int k = 0; k < n; k++) {
                    if (k != i && k != j) next.push_back(nums[k]);
                }

                // try all operations on nums[i], nums[j]
                for (double val : compute(nums[i], nums[j])) {
                    next.push_back(val);
                    if (solve(next)) return true;
                    next.pop_back();
                }
            }
        }
        return false;
    }

    vector<double> compute(double a, double b) {
        vector<double> res;
        res.push_back(a + b);
        res.push_back(a - b);
        res.push_back(b - a);
        res.push_back(a * b);
        if (fabs(b) > 1e-6) res.push_back(a / b);
        if (fabs(a) > 1e-6) res.push_back(b / a);
        return res;
    }
};
