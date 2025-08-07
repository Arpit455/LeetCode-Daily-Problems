class Solution {
public:
    int path1(int i,int j,int m,vector<vector<int>>& fruits ,vector<vector<int>>&dp)
    {
        if(i<0 || i>=m || j<0 ||j>=m)
        return 0;
        if(i==m-1 && j==m-1) 
        return 0;
        if(i<=j)
        return 0;
        
        if(dp[i][j]!=-1)
        return dp[i][j];

        int p1 = 0, p2 = 0, p3 = 0;
        p1=path1(i-1,j+1,m,fruits,dp);
        p2=path1(i,j+1,m,fruits,dp);
        p3=path1(i+1,j+1,m,fruits,dp);

        return dp[i][j]=fruits[i][j]+max({p1,p2,p3});
    }
     int path2(int i,int j,int m,vector<vector<int>>& fruits ,vector<vector<int>>&dp)
    {
        if(i<0 || i>=m || j<0 ||j>=m)
        return 0;
        if(i==m-1 && j==m-1) 
        return 0;
        if(i>=j)
        return 0;
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        int p1 = 0, p2 = 0, p3 = 0;
        p1=path2(i+1,j-1,m,fruits,dp);
        p2=path2(i+1,j,m,fruits,dp);
        p3=path2(i+1,j+1,m,fruits,dp);

         return dp[i][j]=fruits[i][j]+max({p1,p2,p3});
    }

    int maxCollectedFruits(vector<vector<int>>& fruits) {

        int m=fruits.size();
        int fruitsCollected=0;

        for(int i=0;i<m;i++)
        {
          fruitsCollected+=fruits[i][i];
        }
        vector<vector<int>>dp1(m,vector<int>(m,-1));
        vector<vector<int>>dp2(m,vector<int>(m,-1));

        fruitsCollected+=path2(0,m-1,m,fruits,dp1);
        fruitsCollected+=path1(m-1,0,m,fruits,dp2);

        return fruitsCollected;

    }
};