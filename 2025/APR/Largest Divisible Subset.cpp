class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());

        vector<int> dp(n,1) , prevIndex(n,-1);
        int maxi=0,index;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0 && 1+dp[j]>dp[i])
                {
                    dp[i]=dp[j]+1;
                    prevIndex[i]=j;
                }
            }
            if(dp[i]>maxi)
            {
                maxi=dp[i];
                index=i;
            }
        }

        vector<int>ans;

        while(index!=-1)
        {
            ans.push_back(nums[index]);
            index=prevIndex[index];
        }
        return ans;

    }
};