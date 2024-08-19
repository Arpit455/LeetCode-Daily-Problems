int dp[1001][1001];
    int helper(int a,int count,int n)
    {
        if(a>n)
        return 1e5;
        if(a==n)
        return 0;
        if(dp[a][count]!=-1)
        return dp[a][count];

        int copy=INT_MAX,paste=INT_MAX;
        if(a>count)
        copy=helper(a,a,n);
        paste=helper(a+count,count,n);

        return dp[a][count]=1+min(copy,paste);
    }
    int minSteps(int n) {
        if(n==1)
        return 0;
        if(n==2)
        return 2;
        memset(dp,-1,sizeof(dp));

        return 2+helper(2,1,n);
        
    }