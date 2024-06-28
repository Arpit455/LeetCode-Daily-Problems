long long maximumImportance(int n, vector<vector<int>>& roads) {

        vector<int>degree(n,0);
        vector<vector<int>>graph(n);
        for(int i=0;i<roads.size();i++)
        {
            degree[roads[i][0]]++;
            degree[roads[i][1]]++;
            graph[roads[i][0]].push_back(roads[i][1]);
            graph[roads[i][1]].push_back(roads[i][0]);

        }
        priority_queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            q.push({degree[i],i});
        }
        int importance=n;
        while(!q.empty())
        {
            int city=q.top().second;
            degree[city]=importance--;
            q.pop();
        }


        long long ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                if(graph[i][j]>i)
                {
                    ans+=degree[i]+degree[graph[i][j]];
                }
            }
        }
        return ans;
        
        
    }