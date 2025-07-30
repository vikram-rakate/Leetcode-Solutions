class Solution {
public:

    bool  fun(vector<int>& nums, int threshold,int mid)
    {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            res+=((nums[i]+mid-1)/mid);
        }
        return (res<=threshold);
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1;
        int right=*max_element(nums.begin(),nums.end());

        while(left<=right)
        {
            int mid=(left+right)/2;
            if(fun(nums,threshold,mid))
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }

        }
        return left;
        
    }
};