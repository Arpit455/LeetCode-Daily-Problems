class Solution {
public:
     bool IsPossible(int i,int sum,vector<int>&nums,vector<vector<int>>&dp)
    {
       // cout<<i<<sum<<" ";
        if(nums[i]==sum)
        return true;
        if(i<=0)
        return false;
        if(dp[i][sum]!=-1)
        return dp[i][sum];

        if(nums[i]<sum)
        return dp[i][sum]=(IsPossible(i-1,sum-nums[i],nums,dp) || IsPossible(i-1,sum,nums,dp));
        else
        return dp[i][sum]=IsPossible(i-1,sum,nums,dp);
    }
    bool canPartition(vector<int>& nums) {

        int sum=0;
        for(auto i:nums)
        sum+=i;
        if(sum%2!=0)
        return false;

        vector<vector<int>>dp(nums.size(),vector<int>(1+sum/2,-1));

        return IsPossible(nums.size()-1,sum/2,nums,dp);
        
    }
};