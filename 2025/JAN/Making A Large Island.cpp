class DisjointSet {
public:
    vector<int> size, parent;
    DisjointSet(int n) {
        size.resize(n, 1);
        parent.resize(n);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }
    void unionBySize(int a, int b) {
        int p_a = findparent(a);
        int p_b = findparent(b);
        if (p_a == p_b)
            return;
        if (size[p_a] > size[p_b]) {
            size[p_a] += size[p_b];
            parent[p_b] = p_a;
        } else {
            size[p_b] += size[p_a];
            parent[p_a] = p_b;
        }
        return;
    }
    int findparent(int a) {
        if (a == parent[a])
            return a;
        return parent[a] = findparent(parent[a]);
    }
};
class Solution {
public:
    int node(int r, int c, int n) { return r * (n) + c; }

    int largestIsland(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<vector<int>> visited(n, vector<int>(n, 0));

        int x[4] = {0, 1, 0, -1};
        int y[4] = {1, 0, -1, 0};

        DisjointSet ds(n * n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {

                    int nod = node(i, j, n);

                    for (int ind = 0; ind < 4; ind++) {
                        if (i + x[ind] >= 0 && i + x[ind] < n &&
                            j + y[ind] >= 0 && j + y[ind] < n &&
                            grid[i + x[ind]][j + y[ind]] == 1) {
                            int newnode = node(i + x[ind], j + y[ind], n);
                            ds.unionBySize(nod, newnode);
                        }
                    }
                }
            }
        }
        int maxIslands = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    int islands = 1;
                    unordered_set<int> s;
                    for (int ind = 0; ind < 4; ind++) {
                        if (i + x[ind] >= 0 && i + x[ind] < n &&
                            j + y[ind] >= 0 && j + y[ind] < n &&
                            grid[i + x[ind]][j + y[ind]] == 1) {
                            int newnode = node(i + x[ind], j + y[ind], n);
                            s.insert(ds.findparent(newnode));
                        }
                    }
                    for (auto i : s)
                        islands += ds.size[i];
                    maxIslands = max(maxIslands, islands);
                }
            }
        }

        return maxIslands == 0 ? n * n : maxIslands;
    }
};