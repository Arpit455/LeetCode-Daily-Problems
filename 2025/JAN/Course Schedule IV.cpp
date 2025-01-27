vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<bool>ans(queries.size(),false);

        if(prerequisites.size()==0)
        return ans;

        vector<int>inDegree(numCourses,0);
        vector<vector<int>>adj(numCourses);

        for(auto i:prerequisites)
        {
            adj[i[0]].push_back(i[1]);
            inDegree[i[1]]++;
        }

        queue<int>q;
        for(int i=0;i<numCourses;i++)
        {
            if(inDegree[i]==0)
            q.push(i);
        }
        vector<unordered_set<int>>dependency(numCourses);

        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            for(auto i:adj[temp])
            {
                dependency[i].insert(temp);
                for(auto j:dependency[temp])
                dependency[i].insert(j);
                if(--inDegree[i]==0)
                q.push(i);
            }
        }
        
        for(int i=0;i<queries.size();i++)
        {
            if(dependency[queries[i][1]].find(queries[i][0])!=dependency[queries[i][1]].end())
            ans[i]=true;
        }
        return ans;
        
    }