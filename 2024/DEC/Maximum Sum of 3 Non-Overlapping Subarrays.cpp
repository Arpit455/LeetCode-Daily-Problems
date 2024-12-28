int minimum(int x,int y){
    return min(x,y);
    }
    int maxiSum(int i, int subarray,int k,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(subarray ==0)
        return 0;
        if(i>=nums.size())
        return INT_MIN;
        if(dp[i][subarray]!=-1)
        return dp[i][subarray];
        int not_take =maxiSum(i+1,subarray,k,nums,dp);
        int sum=0,mini=minimum(i+k,nums.size());
        for(int j=i;j<mini;j++)
        {
            sum+=nums[j];
        }
        int take=sum+maxiSum(i+k,subarray-1,k,nums,dp);

        return dp[i][subarray]=max(take,not_take);
    }
    vector<int> helper(int i,int subarray,int k,vector<int>&nums,vector<int>&ans,vector<vector<int>>&dp)
    {
        if(i>=nums.size() || subarray ==0)
        return ans;

        int not_take=maxiSum(i+1,subarray,k,nums,dp);

        int sum=0,mini=minimum(i+k,nums.size());
        for(int j=i;j<mini;j++)
        {
            sum+=nums[j];
        }
        int take=sum+maxiSum(i+k,subarray-1,k,nums,dp);

        if(take>=not_take)
        {
            ans.push_back(i);
            helper(i+k,subarray-1,k,nums,ans,dp);
        }
        else
        {
            helper(i+1,subarray,k,nums,ans,dp);
        }
        return ans;



    }
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        vector<vector<int>>dp(nums.size(),vector<int>(4,-1));
        vector<int> a;
        return helper(0,3,k,nums,a,dp);
        
    }