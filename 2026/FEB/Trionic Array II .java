class Solution {

    public long helper(int i , int[]nums , int trend , int n , long[][] dp)
    {
        long take =Long.MIN_VALUE/2, skip=Long.MIN_VALUE/2;
        if(i==n)
        {
            if(trend==3)
            return 0;
            else
            return Long.MIN_VALUE/2;
        }
    

        if(dp[i][trend]!=-1)
        return dp[i][trend];

        if(trend == 0)
        skip=helper(i+1,nums,trend,n,dp);

        if(trend==3)
        take=nums[i];

        if(i<n-1 && trend == 0 && nums[i+1]>nums[i])
        take=Math.max(take,nums[i]+helper(i+1,nums,trend+1,n,dp));

        if( i<n-1 && trend == 1 && nums[i+1]>nums[i])
        take=Math.max(take,nums[i]+helper(i+1,nums,trend,n,dp));

        if(i<n-1 && trend == 1 && nums[i+1]<nums[i])
        take=Math.max(take,nums[i]+helper(i+1,nums,trend+1,n,dp));

        if(i<n-1 && trend == 2 && nums[i+1]<nums[i])
        take=Math.max(take,nums[i]+helper(i+1,nums,trend,n,dp));

        if(i<n-1 && trend == 2 && nums[i+1]>nums[i])
        take=Math.max(take,nums[i]+helper(i+1,nums,trend+1,n,dp));

        if(i<n-1 && trend ==3 && nums[i+1]>nums[i])
        take = Math.max(nums[i]+ helper(i+1,nums,trend,n,dp) , take);

        return dp[i][trend]= Math.max(skip,take);
    }

    public long maxSumTrionic(int[] nums) {

        int n = nums.length;

        long [][] dp =  new long [n+1][4];

        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<4 ;j++)
            dp[i][j]=-1;
        }

        return helper(0,nums,0,n,dp);
        
    }
}