class Solution {
public:
    int maxSum(vector<int>& nums) {

        unordered_set<int>s;
        int maxsum=0;
        int lowestnum=INT_MIN ,iszero=0;

        for(auto i:nums)
        {
            if(i>0 && s.count(i)==0)
            {
                maxsum+=i;
                s.insert(i);
            }
            if(i==0)
            iszero=1;
            if(i<0)
            lowestnum=max(lowestnum,i);
        }

        if(maxsum==0 && iszero==0)
        return lowestnum;
        return maxsum;
        
    }
};