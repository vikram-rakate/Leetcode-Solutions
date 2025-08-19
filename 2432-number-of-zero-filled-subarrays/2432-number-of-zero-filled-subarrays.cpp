class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0; // result
        long long zeros = 0; // consecutive zeros counter
        
        for(int num : nums) {
            if(num == 0) {
                zeros++;            // extend the zero segment
                count += zeros;     // add subarrays ending at this zero
            } else {
                zeros = 0;          // reset when non-zero found
            }
        }
        
        return count;
    }
};
