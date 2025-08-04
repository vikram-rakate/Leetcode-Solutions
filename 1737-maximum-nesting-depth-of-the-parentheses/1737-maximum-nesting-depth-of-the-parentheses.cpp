class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxcount=0;
        for(char c : s)
        {
            if(c=='(')
            count ++;
            else if(c==')')
            {
                maxcount=max(maxcount,count);
                count--;
            }
        }
        return maxcount;
        
    }
};