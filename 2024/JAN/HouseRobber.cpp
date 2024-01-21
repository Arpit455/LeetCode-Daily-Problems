 int max_amount(vector<int>& nums,int i,vector<int>& dp)
    {
        if(i<0)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        return dp[i]=max(max_amount(nums,i-1,dp),nums[i]+max_amount(nums,i-2,dp));
    }
    int rob(vector<int>& nums) {

        int size=nums.size();
        vector<int>dp(size,-1);
        return max_amount(nums,size-1,dp);
        
    }