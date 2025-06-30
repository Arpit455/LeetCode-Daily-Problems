class Solution {
public:
    int findLHS(vector<int>& nums) {

        map<int,int>m;

        for(auto i:nums)
        m[i]++;

        int lhs=0;

        for(auto i:m)
        {
            if(m.find(i.first+1)!=m.end())
            lhs=max(lhs,i.second+m[i.first+1]);
        }

        return lhs;
        
    }
};