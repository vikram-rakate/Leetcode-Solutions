class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int right=nums.size()-1;
            int left=i+1;
            while(left<right)
            {
                int total=nums[i]+nums[right]+nums[left];
                int diff=int(target-total);
                if(abs(total-target)<abs(closest-target))
                {
                    closest=total;
                }
                if(total<target)
                {
                    left++;
                }
                else
                right--;
                
            }
        }
        return closest;
        
    }
};