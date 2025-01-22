vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {

        int m=isWater.size();
        int n=isWater[0].size();

        queue<pair<int,int>>q;
        vector<vector<int>>visited(m,vector<int>(n,-1));

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isWater[i][j]==1)
                {
                    visited[i][j]=1;
                    isWater[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dir_x[4]={0,1,0,-1};
        int dir_y[4]={1,0,-1,0};
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                if(r+dir_x[i]>=0 && r+dir_x[i]<m && c+dir_y[i]>=0 && c+dir_y[i]<n &&visited[r+dir_x[i]][c+dir_y[i]]!=1 )
                {
                   visited[r+dir_x[i]][c+dir_y[i]]=1;
                   q.push({r+dir_x[i],c+dir_y[i]});
                   isWater[r+dir_x[i]][c+dir_y[i]]=isWater[r][c]+1;
                }
            }
            
        }
        return isWater;

        
    }