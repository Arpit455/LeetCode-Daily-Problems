int findChampion(int n, vector<vector<int>>& edges) {

        vector<int>indegree(n,0);

        for(int i=0;i<edges.size();i++)
        {
            indegree[edges[i][1]]++;
        }
        int minidegree=INT_MAX ,node;
        for(int i=0;i<indegree.size();i++)
        {
           if(indegree[i]<minidegree)
           {
            minidegree=indegree[i];
            node=i;
           }
        }
        int count=0;
        for(auto i:indegree)
        {
            if(i==minidegree)
            count++;
        }
        
        return count>1 ? -1 : node;
        

        
    }