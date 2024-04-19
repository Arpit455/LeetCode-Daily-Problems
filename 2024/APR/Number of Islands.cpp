int helper(int i, int j,vector<vector<char>>& grid,vector<vector<int>>& visited )
    {
        if(i<0 ||j<0 ||i>=grid.size()|| j>=grid[0].size()|| visited[i][j]==1 )
        return 0;
        visited[i][j]=1;
        if(grid[i][j]=='1')
        return helper(i+1,j,grid,visited)+helper(i-1,j,grid,visited)+helper(i,j+1,grid,visited)+helper(i,j-1,grid,visited);
        return 0;
    }
    int numIslands(vector<vector<char>>& grid) {

        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),-1));
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(visited[i][j]!=1)
                {
                    if(grid[i][j]=='1')
                    {
                        ans++;
                      helper(i,j,grid,visited);
                    }
                    
                    else
                    visited[i][j]=1;
                }
            }
        }
        return ans;
        
    }