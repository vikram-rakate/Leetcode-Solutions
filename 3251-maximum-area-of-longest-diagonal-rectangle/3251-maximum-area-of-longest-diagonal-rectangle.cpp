class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonal = 0;
        int maxArea = 0;

        for (auto &d : dimensions) {
            int l = d[0], w = d[1];
            int diagonalSq = l * l + w * w; 
            int area = l * w;

            if (diagonalSq > maxDiagonal || (diagonalSq == maxDiagonal && area > maxArea)) {
                maxDiagonal = diagonalSq;
                maxArea = area;
            }
        }

        return maxArea;
    }
};
