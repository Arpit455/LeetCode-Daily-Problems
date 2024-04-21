bool helper(int source, int destination,vector<vector<int>>&adj, vector<int>&visited)
    {
        if(source==destination)
        return true;
        if(visited[source]!=-1)
        return false;
        visited[source]=1;
        bool ans=false;
        for(int i=0;i<adj[source].size();i++)
        {
            ans=ans || helper(adj[source][i],destination,adj,visited);
        }
        return ans;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        vector<int>visited(n,-1);
        for(int i=0;i<edges.size();i++)
        {

               adj[edges[i][0]].push_back(edges[i][1]);
               adj[edges[i][1]].push_back(edges[i][0]);
        }
        return helper(source,destination,adj,visited);

    }