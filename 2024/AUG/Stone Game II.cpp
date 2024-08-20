int dp[101][2][201];
    int maxStones(int i,int turn,int m,int n,vector<int>& piles)
    {
        if(i>=n)
        return 0;
        if(dp[i][turn][m]!=-1)
        return dp[i][turn][m];
        if(turn == 0)
        {
            int temp=0,maxiScore=0;
            for(int j=1;j<=2*m;j++)
            {
                if(j>=n-i+1)
                break;
                temp+=piles[j+i-1];
                maxiScore=max(temp+maxStones(j+i,1,max(m,j),n,piles),maxiScore);

            }
            return dp[i][turn][m]=maxiScore;
        }
        else
        {
            int miniScore=INT_MAX;
            for(int j=1;j<=2*m;j++)
            {
                if(j>=n-i+1)
                break;
                //temp1+=piles[j+i-1];
                miniScore=min(maxStones(j+i,0,max(m,j),n,piles),miniScore);
            }
            return dp[i][turn][m]= miniScore;
        }
    }
    int stoneGameII(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        return maxStones(0,0,1,piles.size(),piles);
    }