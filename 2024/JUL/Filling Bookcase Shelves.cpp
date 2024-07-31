int dp[1001][1001];
    int minHeight(int i ,int t,int h,int w,vector<vector<int>>& books )
    {
        if(i>=books.size())
        return h;
        if(dp[i][t]!=-1)
        return dp[i][t];
        int take=INT_MAX,not_take=INT_MAX;
        if(books[i][0]+t<=w)
        take= minHeight(i+1,t+books[i][0],max(h,books[i][1]),w,books);
        not_take= h+minHeight(i+1,books[i][0],books[i][1],w,books);

        return  dp[i][t]=min(take,not_take);
    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {

        memset(dp,-1,sizeof(dp));

        return minHeight(0,0,0,shelfWidth,books);
        
    }