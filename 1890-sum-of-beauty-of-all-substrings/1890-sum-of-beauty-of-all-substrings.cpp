class Solution {
public:
    int beautySum(string s) {
        int beauty=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int> mpp;
            for(int j=i;j<n;j++)
            {
                mpp[s[j]]++;

                int maxele=0;
                int minele=INT_MAX;
                for(auto &it:mpp)
                {
                    maxele=max(maxele,it.second);
                    minele=min(minele,it.second);
                }
                beauty+=(maxele-minele);
            }
        }
        return beauty;
        
    }
};