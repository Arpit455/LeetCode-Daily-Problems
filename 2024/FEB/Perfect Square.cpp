int min_PS(vector<int> &nums,int sum,int i,vector<vector<int>>&dp)
    {
        if(sum==0)
        return 0;
             if(i<0)
        return 10000;
        if(dp[sum][i]!=-1)
        return dp[sum][i];

   

        if(nums[i]<=sum)
        return dp[sum][i]=min(1+min_PS(nums,sum-nums[i],i,dp),min_PS(nums,sum,i-1,dp));
        else
        return dp[sum][i]=min_PS(nums,sum,i-1,dp);

    }
    int numSquares(int n) {
        vector<int>perfect_square;
        

        for(int i=1;i<=sqrt(n);i++)
        {
            perfect_square.push_back(i*i);

        }
        vector<vector<int>>dp(n+1,vector<int>(perfect_square.size(),-1));
        int ans=min_PS(perfect_square,n,perfect_square.size()-1,dp);
        return ans;



        
    }