class Solution {
using ll = long long;
public:
    
    long long gridGame(vector<vector<int>>& grid) {

        int n=grid[0].size();
        vector<vector<ll>> prefix_sum(2,vector<ll>(n,0));

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
               j==0 ?prefix_sum[i][j]=grid[i][j] :prefix_sum[i][j]=prefix_sum[i][j-1]+grid[i][j];
            }
        }
        ll r2=prefix_sum[0][n-1]-prefix_sum[0][0];
        for(int i=1;i<n;i++)
        {
           r2=min(r2,max(prefix_sum[0][n-1]-prefix_sum[0][i],prefix_sum[1][i-1]));
        }
        return r2;
        
    }
};