int dp[21][2001];
    int helper(int i ,int sum ,int target,vector<int>&nums)
    {
        if(i==nums.size())
        {
            return sum ==target ? 1 :  0;
        }
        if(dp[i][sum+1000]!=-1)
        return dp[i][sum+1000];
        return dp[i][sum+1000]=helper(i+1,sum+nums[i],target,nums) + helper(i+1,sum-nums[i],target,nums);
    }
    int findTargetSumWays(vector<int>& nums, int target) {

        memset(dp,-1,sizeof(dp));
        return helper(0,0,target,nums);
        
    }