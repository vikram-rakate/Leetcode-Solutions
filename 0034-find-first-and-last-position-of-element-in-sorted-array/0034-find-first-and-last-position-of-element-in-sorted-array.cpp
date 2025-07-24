class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int pos1=-1,pos2=-1,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                if(pos1==-1)
                {
                    pos1=i;
                }
                else
                {
                    pos2=i;
                }
            }
        }
        if(pos1!=-1&&pos2!=-1)
        {
            return{pos1,pos2};
        }
        else if(pos1!=-1&&pos2==-1)
        {
            return{pos1,pos1};
        }
        else if(pos2!=-1&&pos1==-1)
        {
            return{pos2,pos2};
        }
        else
        {
            return{-1,-1};
        }
        
        
    }
};