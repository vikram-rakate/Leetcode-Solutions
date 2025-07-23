class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto &pair: mp)
        {
            if(pair.second>(n/3))
            {
                result.push_back(pair.first);
            }

        }    
        return result;
    }
};