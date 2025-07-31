class Solution {
public:
    bool bin_search(vector<int>& arr, int ele)
    {
        int left=0;
        int right=arr.size()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(arr[mid]==ele)return true;
            if(arr[mid]>ele)right=mid-1;
            else left=mid+1;
        }
        return false;
    }
    int findKthPositive(vector<int>& arr, int k) {
        
        int count=0;
        int maxele=*max_element(arr.begin(),arr.end());
        for(int i=1;i<maxele;i++)
        {
            if(!bin_search(arr,i))
            {
                count++;
            }
            if(count==k)
            return i;
        }
        return maxele+(k-count);
    }
};