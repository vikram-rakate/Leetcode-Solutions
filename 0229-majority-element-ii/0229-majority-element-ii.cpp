class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int min=n/3;
        vector<int> result;
        int cnt1=0,cnt2=0;
        int ele1=INT_MIN;
        int ele2=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ele1)
            {
                cnt1++;
            } 
            else if(nums[i]==ele2)
            {
                cnt2++;
            }  
            else if(cnt1==0)
            {
                cnt1++;
                ele1=nums[i];
            }
            
            else if(cnt2==0)
            {
                cnt2++;
                ele2=nums[i];
            }
                 
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==ele1)
            {
                cnt1++;
            }
            if(nums[i]==ele2)
            {
                cnt2++;
            }
        }

        if(cnt1>min)
        {
            result.push_back(ele1);
        }
        if(cnt2>min)
        {
            result.push_back(ele2);
        }
        return result;
    }
};