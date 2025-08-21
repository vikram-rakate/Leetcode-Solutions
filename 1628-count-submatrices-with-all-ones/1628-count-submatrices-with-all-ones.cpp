class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> height(m, 0);
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            // Build histogram for row i
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) height[j] = 0;
                else height[j] += 1;
            }
            
            // Count submatrices ending at row i
            for (int j = 0; j < m; j++) {
                int minH = height[j];
                for (int k = j; k >= 0 && minH > 0; k--) {
                    minH = min(minH, height[k]);
                    ans += minH;
                }
            }
        }
        return ans;
    }
};
