 int minsum(int i,int j,int n,vector<vector<int>>& matrix,vector<vector<int>>& dp )
    {
      if(i==n-1)
      return dp[i][j]=matrix[i][j];
      if(dp[i][j]!=INT_MAX)
      return dp[i][j];
      int b;
      
      b=minsum(i+1,j,n,matrix,dp);
      if(j>0)
      b=min(b,minsum(i+1,j-1,n,matrix,dp));
      if(j<n-1)
      b=min(b,minsum(i+1,j+1,n,matrix,dp));
      return dp[i][j]=matrix[i][j]+b;


    }
    int minFallingPathSum(vector<vector<int>>& matrix) {

        int size=matrix.size();
        int ans=INT_MAX;
        vector<vector<int>>dp(size,vector<int>(size,INT_MAX));
        for(int i=0;i<size;i++)
        {
            ans=min(ans,minsum(0,i,size,matrix,dp));
        }
        return ans;
        
    }