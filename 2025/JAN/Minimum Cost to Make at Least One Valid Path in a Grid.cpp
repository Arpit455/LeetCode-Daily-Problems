int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>cost(m, vector<int>(n, INT_MAX));
        vector<vector<int>>visited(m, vector<int>(n, -1));
        visited[0][0]=1;
        cost[0][0]=0;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{0,0}});

        while(!pq.empty())
        {
            int curr_cost=pq.top().first;
            int x_crd=pq.top().second.first;
            int y_crd=pq.top().second.second;
            visited[x_crd][y_crd]=1;
            pq.pop();
            int x[4] = {0, 0, 1, -1};
            int y[4] = {1, -1, 0, 0};
            for(int i=0;i<4;i++)
            {
               if (!(x_crd+x[i] < 0 || x_crd+x[i] >= m || y_crd+y[i] < 0 || y_crd+y[i] >= n || visited[x_crd+x[i]][y_crd+y[i]]==1))
               {
                  int x_=x_crd+x[i];
                  int y_=y_crd+y[i];
                  int temp_cost= curr_cost+((grid[x_crd][y_crd]==i+1) ?0 :1);
                  if(temp_cost<cost[x_][y_])
                  {
                    cost[x_][y_]=temp_cost;
                    
                    pq.push({temp_cost,{x_,y_}});
                  }

               }
            }

        }
        return cost[m-1][n-1];
    }