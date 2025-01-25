bool safenode(int node ,vector<int>&visited, unordered_set<int>&s,vector<vector<int>>& graph)
    {
        if(graph[node].size()==0 || s.find(node)!=s.end())
       { 
        return true;
       }
        if(visited[node]==1 )
        {
        
        return false;
        }

        visited[node]=1;
        for(int i=0;i<graph[node].size();i++)
        {
            if(!safenode(graph[node][i],visited,s,graph))
            {
            return false;
            }
        }
        s.insert(node);
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        unordered_set<int>s,sn;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            vector<int>visited(n,0);
            if(safenode(i,visited,s,graph))
            ans.push_back(i);
        }
        
        return ans;

        
    }