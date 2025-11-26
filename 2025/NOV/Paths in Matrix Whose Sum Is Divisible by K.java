class Solution {
    
    int mod=1000000007;
    public int helper( int i ,int j , int m ,int n, int sum, int k ,int[][] grid , int[][][] dp)
    {
      if(i==m && j== n)
      return ((grid[i][j]+sum)%k)==0 ? 1: 0;

      if(i<0 || j<0 || i>m || j>n)
      return 0;

      if(dp[i][j][sum]!=-1)
      return dp[i][j][sum];

      return dp[i][j][sum]=( helper(i+1,j,m,n,(sum+grid[i][j])%k,k,grid,dp)%mod +  helper(i,j+1,m,n,(sum+grid[i][j])%k,k,grid,dp)%mod)%mod;
    }
    public int numberOfPaths(int[][] grid, int k) {

        int m=grid.length , n=grid[0].length;

        int [][][] dp = new int[m][n][50];

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int r=0;r<50;r++)
                 dp[i][j][r]=-1;
            }
           
        }

        return helper(0,0,m-1,n-1,0,k,grid,dp);

    }
}