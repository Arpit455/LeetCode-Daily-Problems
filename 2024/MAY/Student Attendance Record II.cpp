int helper(int i,int n,int absent,int late,vector<vector<vector<int>>>&dp)
    {
        
        if(late<1 || absent<1)
        return 0;
        if(i==n)
        return 1;
        if(dp[i][absent][late]!=-1)
        return dp[i][absent][late];
        long long int p=0,l=0,a=0;
         p=helper(i+1,n,absent,3,dp);
         if(late>1 )
         l=helper(i+1,n,absent,late-1,dp);
         if(absent>1)
         a=helper(i+1,n,absent-1,3,dp);

         return dp[i][absent][late]= (p+a+l)%1000000007;
    }

    int checkRecord(int n) {
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(3,vector<int>(4,-1)));
        return helper(0,n,2,3,dp);
        
    }