class Solution {
public:
    long long fun(vector<int>&piles,int h)
    {
        long long sum=0;
        for(int i=0;i<piles.size();i++)
            {
                sum+=((piles[i]+h-1)/h);
            }
            return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        long long k;
        while(left<right)
        {
            int mid=(left+right)/2;
            k=fun(piles,mid);
            
            if(k>h)
            {
                left=mid+1;
            }
            else
            {
                right=mid;
            }
        }
        return left;     
    }
};