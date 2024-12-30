int mod=1e9+7;
    int helper(int l,int h,int z,int o,int length,vector<int>&dp)
    {
        
        if(length>h)
        return 0;

       long long int num=0;
        if(length>=l)
        num++;

        if(dp[length]!=-1)
        return dp[length];

        num+=helper(l,h,z,o,length+z,dp);
        num+=helper(l,h,z,o,length+o,dp);
        
        return dp[length]=num%mod;

    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>dp(1000000,-1);
        return helper(low,high,zero,one,0,dp);
        
    }