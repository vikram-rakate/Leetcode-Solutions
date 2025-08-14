class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        
        for (int i = 0; i + 2 < num.size(); i++) {
            // Take substring of length 3
            string sub = num.substr(i, 3);
            
            // Check if all three characters are same
            if (sub[0] == sub[1] && sub[1] == sub[2]) {
                // Compare lexicographically to keep largest
                if (sub > ans) {
                    ans = sub;
                }
            }
        }
        
        return ans;
    }
};
