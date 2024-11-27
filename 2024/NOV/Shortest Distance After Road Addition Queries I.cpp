vector<int> shortestDistanceAfterQueries(int n,
                                             vector<vector<int>>& queries) {

        vector<int> adj[n];
        for (int i = 0; i < n - 1; i++)
            adj[i].push_back(i + 1);
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            adj[queries[i][0]].push_back(queries[i][1]);
            vector<int> visited(n, 0);
            queue<int> q;
            q.push(0);
            visited[0] = 1;
            int level = 0;
            bool found = false;
            while (!q.empty()) {
                int s = q.size();
                while (s) {
                    int node = q.front();
                    q.pop();
                    for (int k = 0; k < adj[node].size(); k++) {
                        if (visited[adj[node][k]] == 0) {
                            q.push(adj[node][k]);
                            visited[adj[node][k]] = 1;
                        }
                    }

                    if (node == n - 1) {
                        ans.push_back(level);
                        found = true;
                        break;
                    }
                    s--;
                }
                if (found)
                    break;
                level++;
            }
        }
        return ans;
    }