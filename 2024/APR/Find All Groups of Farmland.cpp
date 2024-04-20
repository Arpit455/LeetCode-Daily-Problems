 void helper(int i, int j, int m, int n, vector<vector<int>>& visited,
                vector<vector<int>>& land, vector<int>& ans) {
        if (i < 0 || j < 0 || i >= m || j >= n)
            return;
        if (visited[i][j] != -1 || land[i][j] == 0) {
            return;
        }
        if ((i + 1 == m && j == n - 1) ||
            (i < m - 1 && j < n - 1 && land[i + 1][j] == 0 &&
             land[i][j + 1] == 0) ||
            (i + 1 == m and land[i][j + 1] == 0) ||
            (j + 1 == n && land[i + 1][j] == 0)) {
            ans.push_back(i);
            ans.push_back(j);
        }
        visited[i][j] = 1;

        helper(i + 1, j, m, n, visited, land, ans);
        helper(i, j + 1, m, n, visited, land, ans);

        return;
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>> ans1;
        vector<vector<int>> visited(m, vector<int>(n, -1));

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {
                if (visited[i][j] == -1) {
                    if (land[i][j] == 1) {
                        cout << i << " " << j << "\n";
                        vector<int> ans;
                        ans.push_back(i);
                        ans.push_back(j);
                        helper(i, j, m, n, visited, land, ans);
                        ans1.push_back(ans);
                    }
                }
            }
        }
        return ans1;
    }